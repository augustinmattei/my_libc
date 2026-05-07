/*
** my_libc project
** my_strlen.c based on the eponym string.h libc function
*/

#include "my_string.h"

/**
 * Determinates length of string
 * @param string String whose length is to be determined
 * @return Length of string
 * @warning Length is zero in case of NULL string
 * @warning Returned size does not count the null terminator
*/
size_t my_strlen(const char *string)
{
    size_t str_size = 0;

    if (string != NULL)
        for (; string[str_size] != '\0'; str_size++);
    return str_size;
}
