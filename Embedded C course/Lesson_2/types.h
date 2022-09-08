/*
 * types.h
 *
 *  Created on: Sep 3, 2022
 *      Author: islam
 */
////////////////////////////////////////
/*
 * s stands for signed
 * u stands for unsigned
 * v stands for volatile
 */
////////////////////////////////////////
#ifndef TYPES_H_
#define TYPES_H_

typedef unsigned char bool_t ;

typedef volatile unsigned char vbool_t ;

typedef unsigned char uchar8_t;
typedef char schar8_t;
typedef unsigned short ushort16_t;
typedef short sshort16_t;
typedef unsigned int uint32_t;
typedef int sint32_t;
typedef unsigned long long ulonglong64_t;
typedef long long slonglong64_t;
typedef  float ufloat32_t;
typedef  double udouble64_t;

typedef volatile unsigned char vuchar8_t;
typedef volatile char vschar8_t;
typedef volatile unsigned short vushort16_t;
typedef volatile short vsshort16_t;
typedef volatile unsigned int vuint32_t;
typedef volatile int vsint32_t;
typedef volatile unsigned long long vulonglong64_t;
typedef volatile long long vslonglong64_t;
typedef volatile  float vufloat32_t;
typedef volatile  double vudouble64_t;

#endif /* TYPES_H_ */
