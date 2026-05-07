/*
** my_libc project
** my_isupper.c based on the eponym ctype.h libc function
*/

#include "my_ctype.h"

/**
 * Determinates if a char is an uppercase letter
 * @param character Char to check
 * @return true if so, false otherwise
 * @warning Parameter is int type because this function can handle EOF
 */
bool my_isupper(int character)
{
    return ('A' <= character <= 'Z');
}
