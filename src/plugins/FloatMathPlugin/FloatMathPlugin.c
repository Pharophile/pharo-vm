/* Automatically generated by
	VMPluginCodeGenerator * VMMaker.oscog-EstebanLorenzano.746 uuid: 7091499b-788c-4871-a077-60abea56aa58
   from
	FloatMathPlugin * VMMaker.oscog-EstebanLorenzano.746 uuid: 7091499b-788c-4871-a077-60abea56aa58
 */
static char __buildInfo[] = "FloatMathPlugin * VMMaker.oscog-EstebanLorenzano.746 uuid: 7091499b-788c-4871-a077-60abea56aa58 " __DATE__ ;



#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* Default EXPORT macro that does nothing (see comment in sq.h): */
#define EXPORT(returnType) returnType

/* Do not include the entire sq.h file but just those parts needed. */
/*  The virtual machine proxy definition */
#include "sqVirtualMachine.h"
/* Configuration options */
#include "sqConfig.h"
/* Platform specific definitions */
#include "sqPlatformSpecific.h"

#define true 1
#define false 0
#define null 0  /* using 'null' because nil is predefined in Think C */
#ifdef SQUEAK_BUILTIN_PLUGIN
#undef EXPORT
// was #undef EXPORT(returnType) but screws NorCroft cc
#define EXPORT(returnType) static returnType
#endif

#include "FloatMathPlugin.h"
#include "sqMemoryAccess.h"


/*** Constants ***/


/*** Function Prototypes ***/
static VirtualMachine * getInterpreter(void);
EXPORT(const char*) getModuleName(void);
static sqInt halt(void);
static sqInt msg(char *s);
EXPORT(sqInt) primitiveArcCos(void);
EXPORT(sqInt) primitiveArcCosH(void);
EXPORT(sqInt) primitiveArcSin(void);
EXPORT(sqInt) primitiveArcSinH(void);
EXPORT(sqInt) primitiveArcTan(void);
EXPORT(sqInt) primitiveArcTan2(void);
EXPORT(sqInt) primitiveArcTanH(void);
EXPORT(sqInt) primitiveCos(void);
EXPORT(sqInt) primitiveCosH(void);
EXPORT(sqInt) primitiveExp(void);
EXPORT(sqInt) primitiveFMod(void);
EXPORT(sqInt) primitiveFractionalPart(void);
EXPORT(sqInt) primitiveHypot(void);
EXPORT(sqInt) primitiveLog10(void);
EXPORT(sqInt) primitiveLogN(void);
EXPORT(sqInt) primitiveRaisedToPower(void);
EXPORT(sqInt) primitiveSin(void);
EXPORT(sqInt) primitiveSinH(void);
EXPORT(sqInt) primitiveSqrt(void);
EXPORT(sqInt) primitiveTan(void);
EXPORT(sqInt) primitiveTanH(void);
EXPORT(sqInt) primitiveTimesTwoPower(void);
EXPORT(sqInt) setInterpreter(struct VirtualMachine*anInterpreter);


/*** Variables ***/

#if !defined(SQUEAK_BUILTIN_PLUGIN)
static sqInt (*failed)(void);
static sqInt (*methodArgumentCount)(void);
static sqInt (*pop)(sqInt nItems);
static sqInt (*primitiveFail)(void);
static sqInt (*pushFloat)(double  f);
static double (*stackFloatValue)(sqInt offset);
static sqInt (*stackIntegerValue)(sqInt offset);
#else /* !defined(SQUEAK_BUILTIN_PLUGIN) */
extern sqInt failed(void);
extern sqInt methodArgumentCount(void);
extern sqInt pop(sqInt nItems);
extern sqInt primitiveFail(void);
extern sqInt pushFloat(double  f);
extern double stackFloatValue(sqInt offset);
extern sqInt stackIntegerValue(sqInt offset);
extern
#endif
struct VirtualMachine* interpreterProxy;
static const char *moduleName =
#ifdef SQUEAK_BUILTIN_PLUGIN
	"FloatMathPlugin * VMMaker.oscog-EstebanLorenzano.746 (i)"
#else
	"FloatMathPlugin * VMMaker.oscog-EstebanLorenzano.746 (e)"
#endif
;



/*	Note: This is coded so that plugins can be run from Squeak. */

static VirtualMachine *
getInterpreter(void)
{
	// InterpreterPlugin>>#getInterpreter
	return interpreterProxy;
}


/*	Note: This is hardcoded so it can be run from Squeak.
	The module name is used for validating a module *after*
	it is loaded to check if it does really contain the module
	we're thinking it contains. This is important! */

EXPORT(const char*)
getModuleName(void)
{
	// InterpreterPlugin>>#getModuleName
	return moduleName;
}

static sqInt
halt(void)
{
	// InterpreterPlugin>>#halt
	;
	return 0;
}

static sqInt
msg(char *s)
{
	// InterpreterPlugin>>#msg:
	fprintf(stderr, "\n%s: %s", moduleName, s);
	return 0;
}


/*	Computes acos(receiver) */

EXPORT(sqInt)
primitiveArcCos(void)
{
	// FloatMathPlugin>>#primitiveArcCos
    double rcvr;
    double result;

	rcvr = stackFloatValue(0);
	if (failed()) {
		return null;
	}
	result = __ieee754_acos(rcvr);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Computes acosh(receiver) */

EXPORT(sqInt)
primitiveArcCosH(void)
{
	// FloatMathPlugin>>#primitiveArcCosH
    double rcvr;
    double result;

	rcvr = stackFloatValue(0);
	if (failed()) {
		return null;
	}
	result = __ieee754_acosh(rcvr);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Computes asin(receiver) */

EXPORT(sqInt)
primitiveArcSin(void)
{
	// FloatMathPlugin>>#primitiveArcSin
    double rcvr;
    double result;

	rcvr = stackFloatValue(0);
	if (failed()) {
		return null;
	}
	result = __ieee754_asin(rcvr);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Computes asinh(receiver) */

EXPORT(sqInt)
primitiveArcSinH(void)
{
	// FloatMathPlugin>>#primitiveArcSinH
    double rcvr;
    double result;

	rcvr = stackFloatValue(0);
	if (failed()) {
		return null;
	}
	result = __ieee754_asinh(rcvr);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Computes atan(receiver) */

EXPORT(sqInt)
primitiveArcTan(void)
{
	// FloatMathPlugin>>#primitiveArcTan
    double rcvr;
    double result;

	rcvr = stackFloatValue(0);
	if (failed()) {
		return null;
	}
	result = __ieee754_atan(rcvr);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Computes atan2(receiver, arg) */

EXPORT(sqInt)
primitiveArcTan2(void)
{
	// FloatMathPlugin>>#primitiveArcTan2
    double arg;
    double rcvr;
    double result;

	arg = stackFloatValue(0);
	rcvr = stackFloatValue(1);
	if (failed()) {
		return null;
	}
	result = __ieee754_atan2(rcvr, arg);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Computes atanh(receiver) */

EXPORT(sqInt)
primitiveArcTanH(void)
{
	// FloatMathPlugin>>#primitiveArcTanH
    double rcvr;
    double result;

	rcvr = stackFloatValue(0);
	if (failed()) {
		return null;
	}
	result = __ieee754_atanh(rcvr);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Computes cos(receiver) */

EXPORT(sqInt)
primitiveCos(void)
{
	// FloatMathPlugin>>#primitiveCos
    double rcvr;
    double result;

	rcvr = stackFloatValue(0);
	if (failed()) {
		return null;
	}
	result = __ieee754_cos(rcvr);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Computes cosh(receiver) */

EXPORT(sqInt)
primitiveCosH(void)
{
	// FloatMathPlugin>>#primitiveCosH
    double rcvr;
    double result;

	rcvr = stackFloatValue(0);
	if (failed()) {
		return null;
	}
	result = __ieee754_cosh(rcvr);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Computes E raised to the receiver power. */

EXPORT(sqInt)
primitiveExp(void)
{
	// FloatMathPlugin>>#primitiveExp
    double rcvr;
    double result;

	rcvr = stackFloatValue(0);
	if (failed()) {
		return null;
	}
	result = __ieee754_exp(rcvr);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Computes receiver \\ arg */

EXPORT(sqInt)
primitiveFMod(void)
{
	// FloatMathPlugin>>#primitiveFMod
    double arg;
    double rcvr;
    double result;

	arg = stackFloatValue(0);
	rcvr = stackFloatValue(1);
	if (failed()) {
		return null;
	}
	result = __ieee754_fmod(rcvr, arg);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Computes receiver \\ 1.0 */

EXPORT(sqInt)
primitiveFractionalPart(void)
{
	// FloatMathPlugin>>#primitiveFractionalPart
    double rcvr;
    double result;
    double trunc;

	rcvr = stackFloatValue(0);
	if (failed()) {
		return null;
	}
	result = __ieee754_modf(rcvr, &trunc);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	hypot(x,y) returns sqrt(x^2+y^2) with error less than 1 ulps */

EXPORT(sqInt)
primitiveHypot(void)
{
	// FloatMathPlugin>>#primitiveHypot
    double arg;
    double rcvr;
    double result;

	arg = stackFloatValue(0);
	rcvr = stackFloatValue(1);
	if (failed()) {
		return null;
	}
	result = __ieee754_hypot(rcvr, arg);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Computes log10(receiver) */

EXPORT(sqInt)
primitiveLog10(void)
{
	// FloatMathPlugin>>#primitiveLog10
    double rcvr;
    double result;

	rcvr = stackFloatValue(0);
	if (failed()) {
		return null;
	}
	if (rcvr < 0.0) {
return primitiveFail();
	}
	result = __ieee754_log10(rcvr);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Computes log(receiver) */

EXPORT(sqInt)
primitiveLogN(void)
{
	// FloatMathPlugin>>#primitiveLogN
    double rcvr;
    double result;

	rcvr = stackFloatValue(0);
	if (failed()) {
		return null;
	}
	if (rcvr < 0.0) {
return primitiveFail();
	}
	result = __ieee754_log(rcvr);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Computes receiver**arg */

EXPORT(sqInt)
primitiveRaisedToPower(void)
{
	// FloatMathPlugin>>#primitiveRaisedToPower
    double arg;
    double rcvr;
    double result;

	arg = stackFloatValue(0);
	rcvr = stackFloatValue(1);
	if (failed()) {
		return null;
	}
	result = __ieee754_pow(rcvr, arg);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Computes sin(receiver) */

EXPORT(sqInt)
primitiveSin(void)
{
	// FloatMathPlugin>>#primitiveSin
    double rcvr;
    double result;

	rcvr = stackFloatValue(0);
	if (failed()) {
		return null;
	}
	result = __ieee754_sin(rcvr);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Computes sinh(receiver) */

EXPORT(sqInt)
primitiveSinH(void)
{
	// FloatMathPlugin>>#primitiveSinH
    double rcvr;
    double result;

	rcvr = stackFloatValue(0);
	if (failed()) {
		return null;
	}
	result = __ieee754_sinh(rcvr);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Computes sqrt(receiver) */

EXPORT(sqInt)
primitiveSqrt(void)
{
	// FloatMathPlugin>>#primitiveSqrt
    double rcvr;
    double result;

	rcvr = stackFloatValue(0);
	if (failed()) {
		return null;
	}
	if (rcvr < 0.0) {
return primitiveFail();
	}
	result = __ieee754_sqrt(rcvr);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Computes tan(receiver) */

EXPORT(sqInt)
primitiveTan(void)
{
	// FloatMathPlugin>>#primitiveTan
    double rcvr;
    double result;

	rcvr = stackFloatValue(0);
	if (failed()) {
		return null;
	}
	result = __ieee754_tan(rcvr);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Computes tanh(receiver) */

EXPORT(sqInt)
primitiveTanH(void)
{
	// FloatMathPlugin>>#primitiveTanH
    double rcvr;
    double result;

	rcvr = stackFloatValue(0);
	if (failed()) {
		return null;
	}
	result = __ieee754_tanh(rcvr);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Computes E raised to the receiver power. */

EXPORT(sqInt)
primitiveTimesTwoPower(void)
{
	// FloatMathPlugin>>#primitiveTimesTwoPower
    sqInt arg;
    double rcvr;
    double result;

	arg = stackIntegerValue(0);
	rcvr = stackFloatValue(1);
	if (failed()) {
		return null;
	}
	result = __ieee754_ldexp(rcvr, arg);
	if (isnan(result)) {
		return primitiveFail();
	}
	pop((methodArgumentCount()) + 1);
	pushFloat(result);
}


/*	Note: This is coded so that it can be run in Squeak. */

EXPORT(sqInt)
setInterpreter(struct VirtualMachine*anInterpreter)
{
	// InterpreterPlugin>>#setInterpreter:
    sqInt ok;

	interpreterProxy = anInterpreter;
	ok = ((interpreterProxy->majorVersion()) == (VM_PROXY_MAJOR))
	 && ((interpreterProxy->minorVersion()) >= (VM_PROXY_MINOR));
	if (ok) {

#if !defined(SQUEAK_BUILTIN_PLUGIN)
		failed = interpreterProxy->failed;
		methodArgumentCount = interpreterProxy->methodArgumentCount;
		pop = interpreterProxy->pop;
		primitiveFail = interpreterProxy->primitiveFail;
		pushFloat = interpreterProxy->pushFloat;
		stackFloatValue = interpreterProxy->stackFloatValue;
		stackIntegerValue = interpreterProxy->stackIntegerValue;
#endif /* !defined(SQUEAK_BUILTIN_PLUGIN) */
	}
	return ok;
}


#ifdef SQUEAK_BUILTIN_PLUGIN

void* FloatMathPlugin_exports[][3] = {
	{"FloatMathPlugin", "getModuleName", (void*)getModuleName},
	{"FloatMathPlugin", "primitiveArcCos\000\000", (void*)primitiveArcCos},
	{"FloatMathPlugin", "primitiveArcCosH\000\000", (void*)primitiveArcCosH},
	{"FloatMathPlugin", "primitiveArcSin\000\000", (void*)primitiveArcSin},
	{"FloatMathPlugin", "primitiveArcSinH\000\000", (void*)primitiveArcSinH},
	{"FloatMathPlugin", "primitiveArcTan\000\000", (void*)primitiveArcTan},
	{"FloatMathPlugin", "primitiveArcTan2\000\000", (void*)primitiveArcTan2},
	{"FloatMathPlugin", "primitiveArcTanH\000\000", (void*)primitiveArcTanH},
	{"FloatMathPlugin", "primitiveCos\000\000", (void*)primitiveCos},
	{"FloatMathPlugin", "primitiveCosH\000\000", (void*)primitiveCosH},
	{"FloatMathPlugin", "primitiveExp\000\000", (void*)primitiveExp},
	{"FloatMathPlugin", "primitiveFMod\000\000", (void*)primitiveFMod},
	{"FloatMathPlugin", "primitiveFractionalPart\000\000", (void*)primitiveFractionalPart},
	{"FloatMathPlugin", "primitiveHypot\000\000", (void*)primitiveHypot},
	{"FloatMathPlugin", "primitiveLog10\000\000", (void*)primitiveLog10},
	{"FloatMathPlugin", "primitiveLogN\000\000", (void*)primitiveLogN},
	{"FloatMathPlugin", "primitiveRaisedToPower\000\000", (void*)primitiveRaisedToPower},
	{"FloatMathPlugin", "primitiveSin\000\000", (void*)primitiveSin},
	{"FloatMathPlugin", "primitiveSinH\000\000", (void*)primitiveSinH},
	{"FloatMathPlugin", "primitiveSqrt\000\000", (void*)primitiveSqrt},
	{"FloatMathPlugin", "primitiveTan\000\000", (void*)primitiveTan},
	{"FloatMathPlugin", "primitiveTanH\000\000", (void*)primitiveTanH},
	{"FloatMathPlugin", "primitiveTimesTwoPower\000\000", (void*)primitiveTimesTwoPower},
	{"FloatMathPlugin", "setInterpreter", (void*)setInterpreter},
	{NULL, NULL, NULL}
};

#else /* ifdef SQ_BUILTIN_PLUGIN */

signed char primitiveArcCosAccessorDepth = 0;
signed char primitiveArcCosHAccessorDepth = 0;
signed char primitiveArcSinAccessorDepth = 0;
signed char primitiveArcSinHAccessorDepth = 0;
signed char primitiveArcTanAccessorDepth = 0;
signed char primitiveArcTan2AccessorDepth = 0;
signed char primitiveArcTanHAccessorDepth = 0;
signed char primitiveCosAccessorDepth = 0;
signed char primitiveCosHAccessorDepth = 0;
signed char primitiveExpAccessorDepth = 0;
signed char primitiveFModAccessorDepth = 0;
signed char primitiveFractionalPartAccessorDepth = 0;
signed char primitiveHypotAccessorDepth = 0;
signed char primitiveLog10AccessorDepth = 0;
signed char primitiveLogNAccessorDepth = 0;
signed char primitiveRaisedToPowerAccessorDepth = 0;
signed char primitiveSinAccessorDepth = 0;
signed char primitiveSinHAccessorDepth = 0;
signed char primitiveSqrtAccessorDepth = 0;
signed char primitiveTanAccessorDepth = 0;
signed char primitiveTanHAccessorDepth = 0;
signed char primitiveTimesTwoPowerAccessorDepth = 0;

#endif /* ifdef SQ_BUILTIN_PLUGIN */