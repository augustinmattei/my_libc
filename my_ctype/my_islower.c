/*
** my_libc project
** my_islower.c based on the eponym ctype.h libc function
*/

#include "my_ctype.h"

/**
 * Determinates if a char is a lowercase letter
 * @param character Char to check
 * @return true if so, false otherwise
 * @warning Parameter is int type because this function can handle EOF
 */
bool my_islower(int character)
{
    return ('a' <= character <= 'z');
}
