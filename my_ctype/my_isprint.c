/*
** my_libc project
** my_isprint.c based on the eponym ctype.h libc function
*/

#include "my_ctype.h"

/**
 * Determinates if a char is printable
 * @param character Char to check
 * @return true if so, false otherwise
 * @warning Parameter is int type because this function can handle EOF
 */
bool my_isprint(int character)
{
    return (0x21 <= character && character <= 0x7E);
}
