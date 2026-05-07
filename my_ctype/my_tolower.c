/*
** my_libc project
** my_tolower.c based on the eponym ctype.h libc function
*/

#include "my_ctype.h"

/**
 * Converts character into a lowercase letter if
 * character is an uppercase letter
 * @param character Char to convert
 * @return Converted char if possible, original char otherwise
 */
int my_tolower(int character)
{
    return (my_isupper(character) ? character + 32 : character);
}
