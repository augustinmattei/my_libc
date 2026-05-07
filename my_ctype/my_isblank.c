/*
** my_libc project
** my_isblank.c based on the eponym ctype.h libc function
*/

#include "my_ctype.h"

/**
 * Determinates if a char is a blank character
 * @param character Char to check
 * @return true if so, false otherwise
 * @warning Parameter is int type because this function can handle EOF
 * @warning tab is considered a blank character and will return true
 */
bool my_isblank(int character)
{
    return (character == '\t' ||
        character == ' ');
}
