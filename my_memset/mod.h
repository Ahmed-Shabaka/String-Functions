#ifndef _MOD_H_
#define _MOD_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char           uint8;
typedef signed char             sint8;
typedef unsigned short int     uint16;
typedef signed short int       sint16;
typedef unsigned long int      uint32;
typedef signed long int        sint32;
typedef unsigned long long int uint64;
typedef signed long long int   sint64;
typedef float                 float32;
typedef double                float64;

#define ZERO 0
#define MAX_ARRAY_SIZE 30

typedef enum 
{
	R_OK=0,
	R_NOK=1
}return_status_t;


void *my_memset(void *const dest , const uint8 value , const uint32 n, return_status_t *const ret);


#endif