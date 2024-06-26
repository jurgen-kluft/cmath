#include "cmath/cglm.h"

namespace __drand48
{
    // TODO drand48 implementation is multi-thread unsafe

#define RAND48_SEED_0 (0x330e)
#define RAND48_SEED_1 (0xabcd)
#define RAND48_SEED_2 (0x1234)

#define RAND48_MULT_0 (0xe66d)
#define RAND48_MULT_1 (0xdeec)
#define RAND48_MULT_2 (0x0005)
#define RAND48_ADD    (0x000b)

    static unsigned short _rand48_seed[3] = {RAND48_SEED_0, RAND48_SEED_1, RAND48_SEED_2};

    static void _dorand48(unsigned short xseed[3])
    {
        unsigned long  accu;
        unsigned short temp[2];

        accu    = (unsigned long)RAND48_MULT_0 * (unsigned long)xseed[0] + (unsigned long)RAND48_ADD;
        temp[0] = (unsigned short)accu; /* lower 16 bits */
        accu >>= sizeof(unsigned short) * 8;
        accu += (unsigned long)RAND48_MULT_0 * (unsigned long)xseed[1] + (unsigned long)RAND48_MULT_1 * (unsigned long)xseed[0];
        temp[1] = (unsigned short)accu; /* middle 16 bits */
        accu >>= sizeof(unsigned short) * 8;
        accu += RAND48_MULT_0 * xseed[2] + RAND48_MULT_1 * xseed[1] + RAND48_MULT_2 * xseed[0];
        xseed[0] = temp[0];
        xseed[1] = temp[1];
        xseed[2] = (unsigned short)accu;
    }

    static double erand48(unsigned short xseed[3])
    {
        _dorand48(xseed);
        return ldexp((double)xseed[0], -48) + ldexp((double)xseed[1], -32) + ldexp((double)xseed[2], -16);
    }

} // namespace __drand48

float glm_frand48(){ return (float)__drand48::erand48(__drand48::_rand48_seed); }
double glm_drand48() { return __drand48::erand48(__drand48::_rand48_seed); }
