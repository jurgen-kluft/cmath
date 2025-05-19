package cmath

import (
	ccore "github.com/jurgen-kluft/cbase/package"
	"github.com/jurgen-kluft/ccode/denv"
	cunittest "github.com/jurgen-kluft/cunittest/package"
)

// GetPackage returns the package object of 'cmath'
func GetPackage() *denv.Package {
	// Dependencies
	cunittestpkg := cunittest.GetPackage()
	ccorepkg := ccore.GetPackage()

	// The main (cmath) package
	mainpkg := denv.NewPackage("cmath")
	mainpkg.AddPackage(ccorepkg)

	// 'cmath' library
	mainlib := denv.SetupCppLibProject("cmath", "github.com\\jurgen-kluft\\cmath")
	mainlib.AddDependencies(ccorepkg.GetMainLib()...)

	// 'cmath' unittest project
	maintest := denv.SetupDefaultCppTestProject("cmath_test", "github.com\\jurgen-kluft\\cmath")
	maintest.AddDefine("CGLM_DEFINE_PRINTS")
	maintest.AddDependencies(cunittestpkg.GetMainLib()...)
	maintest.Dependencies = append(maintest.Dependencies, mainlib)

	mainpkg.AddMainLib(mainlib)
	mainpkg.AddUnittest(maintest)
	return mainpkg
}
