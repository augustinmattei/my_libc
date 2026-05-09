/*
** my_libc project
** my_string.h based on the eponym libc header
*/

#ifndef MY_STRING_H_
    #define MY_STRING_H_

    #include "../my_stddef/my_stddef.h"
    #define ASCII_LOW_LIM 0
    #define ASCII_HIGH_LIM 127


char *my_strchr(const char *string, int searchedChar);
size_t my_strlen(const char *string);
char *my_strrchr(const char *string, int searchedChar);

#endif /* !MY_STRING_H_ */
