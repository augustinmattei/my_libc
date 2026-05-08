/*
** my_libc project
** my_isalpha.c based on the eponym ctype.h libc function
*/

#include "my_ctype.h"

/**
 * Determinates if a char is alphabetic
 * @param character Char to check
 * @return true if so, false otherwise
 * @warning Parameter is int type because this function can handle EOF
 */
bool my_isalpha(int character)
{
    return (('a' <= character && character <= 'z') ||
        ('A' <= character && character <= 'Z'));
}
