/*
** my_libc project
** my_stddef.h based on the eponym libc header
*/

#ifndef MY_STDDEF_H_
    #define MY_STDDEF_H_

    #define NULL ((void *)0)

    #if !defined(offsetof)
    #define offsetof(type, member) __builtin_offsetof(type, member)
    #endif

typedef long int ptrdiff_t;
typedef unsigned long size_t;


#endif /* !MY_STDDEF_H_ */
