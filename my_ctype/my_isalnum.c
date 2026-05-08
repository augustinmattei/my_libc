/*
** my_libc project
** my_isalnum.c based on the eponym ctype.h libc function
*/

#include "my_ctype.h"

/**
 * Determinates if a char is alphanumeric
 * @param character Char to check
 * @return true if so, false otherwise
 * @warning Parameter is int type because this function can handle EOF
 */
bool my_isalnum(int character)
{
    return (('0' <= character && character <= '9') ||
        ('a' <= character && character <= 'z') ||
        ('A' <= character && character <= 'Z'));
}
