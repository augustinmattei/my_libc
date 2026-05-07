/*
** my_libc project
** my_string.h based on the eponym libc header
*/

#ifndef MY_STRING_H_
    #define MY_STRING_H_

    #define NULL (void *)0

typedef unsigned int size_t;

char *my_strchr(const char *string, int searchedChar);
size_t my_strlen(const char *string);

#endif /* !MY_STRING_H_ */
