#include "ccore/c_target.h"
#include "cunittest/cunittest.h"

#include "cmath/test/tests.h"

#include <stdlib.h>
#include <time.h>
#include <string.h>

UNITTEST_SUITE_BEGIN(cmath)
{
    UNITTEST_FIXTURE(tests)
    {
        UNITTEST_FIXTURE_SETUP() {}
        UNITTEST_FIXTURE_TEARDOWN() {}

        UNITTEST_TEST(test)
        {
            test_entry_t* entry;
            test_status_t st;
            int32_t       i, count, passed, failed, maxlen;
            double        start, end, elapsed, total;

            passed = failed = maxlen = 0;
            total                    = 0.0;
            count                    = sizeof(tests) / sizeof(tests[0]);

            for (i = 0; i < count; i++)
            {
                int32_t len;

                entry = tests + i;
                len   = (int32_t)strlen(entry->name);

                maxlen = GLM_MAX(maxlen, len);
            }

            for (i = 0; i < count; i++)
            {
                entry   = tests + i;
                start   = clock();
                st      = entry->entry();
                end     = clock();
                elapsed = (end - start) / CLOCKS_PER_SEC;
                total += elapsed;

                CHECK_TRUE(st.status);

                if (!st.status)
                {
                    fprintf(stderr, BOLDRED "  " FAIL_TEXT BOLDWHITE " %s " RESET, entry->name);
                    if (st.msg)
                    {
                        fprintf(stderr, YELLOW "- %s" RESET, st.msg);
                    }

                    fprintf(stderr, "\n");

                    failed++;
                }
                else
                {
                    fprintf(stderr, GREEN "  " OK_TEXT RESET " %-*s  ", maxlen, entry->name);

                    if (elapsed > 0.01)
                        fprintf(stderr, YELLOW "%.2fs", elapsed);
                    else
                        fprintf(stderr, "0");

                    fprintf(stderr, "\n" RESET);
                    passed++;
                }
            }
        }
    }
}
UNITTEST_SUITE_END
