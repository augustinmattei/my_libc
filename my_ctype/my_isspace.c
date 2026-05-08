/*
** my_libc project
** my_issspace.c based on the eponym ctype.h libc function
*/

#include "my_ctype.h"

/**
 * Determinates if a char is a space character
 * @param character Char to check
 * @return true if so, false otherwise
 * @warning Parameter is int type because this function can handle EOF
 */
bool my_isspace(int character)
{
    return ((0x09 <= character && character <= 0x0D) ||
        character == ' ');
}
