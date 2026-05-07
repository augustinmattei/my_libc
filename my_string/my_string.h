/*
** my_libc project
** my_string.h based on the eponym libc header
*/

#ifndef MY_STRING_H_
    #define MY_STRING_H_

    #define NULL ((void *)0)
    #define ASCII_LOW_LIM 0
    #define ASCII_HIGH_LIM 127

typedef unsigned long size_t;

char *my_strchr(const char *string, int searchedChar);
size_t my_strlen(const char *string);
char *my_strrchr(const char *string, int searchedChar);

#endif /* !MY_STRING_H_ */
