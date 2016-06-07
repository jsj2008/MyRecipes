/**
 * This file is automatically generated by GenerateTest.py, collecting function
 * information from source files.
 *
 * If you want to change the content of this file, go to GenerateTest.py and
 * modify the script. Or you can maintain this file by yourself after you delete
 * the related lines in the makefile.
 */

#ifndef _TESTDECLARATION_H_
#define _TESTDECLARATION_H_

#define PASSED 0
#define FAILED 1

/* declarations of testfunctions */
int testAdamsPECE();
int testAdaptiveSimpson();
int testBisection();
int testChasing();
int testClassicRK();
int testDividedDiff();
int testGaussianEli();
int testGaussianEliPP();
int testHermiteIpl();
int testLeastSq();
int testMuller();
int testNewtonMethod();
int testPicardRecurtion();
int testQR();
int testRKF();
int testRomberg();
int testSecent();
int testSODERungeKutta();
int testSplineIpl();
int testSteffensen();

void testall();

/* define the array of all test functions */
#define FUNC_ARRAY { \
	testAdamsPECE,\
	testAdaptiveSimpson,\
	testBisection,\
	testChasing,\
	testClassicRK,\
	testDividedDiff,\
	testGaussianEli,\
	testGaussianEliPP,\
	testHermiteIpl,\
	testLeastSq,\
	testMuller,\
	testNewtonMethod,\
	testPicardRecurtion,\
	testQR,\
	testRKF,\
	testRomberg,\
	testSecent,\
	testSODERungeKutta,\
	testSplineIpl,\
	testSteffensen \
}

/* define the array of function names */
#define NAME_ARRAY { \
	"testAdamsPECE",\
	"testAdaptiveSimpson",\
	"testBisection",\
	"testChasing",\
	"testClassicRK",\
	"testDividedDiff",\
	"testGaussianEli",\
	"testGaussianEliPP",\
	"testHermiteIpl",\
	"testLeastSq",\
	"testMuller",\
	"testNewtonMethod",\
	"testPicardRecurtion",\
	"testQR",\
	"testRKF",\
	"testRomberg",\
	"testSecent",\
	"testSODERungeKutta",\
	"testSplineIpl",\
	"testSteffensen" \
}

/* define the number of functions */
#define FUNC_COUNT 20

#endif
