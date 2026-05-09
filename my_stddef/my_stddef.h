/*
** my_libc project
** my_stddef.h based on the eponym libc header
*/

#ifndef MY_STDDEF_H_
    #define MY_STDDEF_H_

    #define NULL ((void *)0)

    #define offsetof(type, member) __builtin_offsetof(type, member)

typedef struct {
  long long __clang_max_align_nonce1
      __attribute__((__aligned__(__alignof__(long long))));
  long double __clang_max_align_nonce2
      __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
typedef long int ptrdiff_t;
typedef unsigned long size_t;


#endif /* !MY_STDDEF_H_ */
