/*
** my_libc project
** my_toupper.c based on the eponym ctype.h libc function
*/

#include "my_ctype.h"

/**
 * Converts character into an uppercase letter if
 * character is a lowercase letter
 * @param character Char to convert
 * @return Converted char if possible, original char otherwise
 */
int my_toupper(int character)
{
    return (my_islower(character) ? character - 32 : character);
}
