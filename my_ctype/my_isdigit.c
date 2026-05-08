/*
** my_libc project
** my_isdigit.c based on the eponym ctype.h libc function
*/

#include "my_ctype.h"

/**
 * Determinates if a char is a digit
 * @param character Char to check
 * @return true if so, false otherwise
 * @warning Parameter is int type because this function can handle EOF
 */
bool my_isdigit(int character)
{
    return ('0' <= character && character <= '9');
}
