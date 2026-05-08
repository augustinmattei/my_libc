/*
** my_libc project
** my_isxdigit.c based on the eponym ctype.h libc function
*/

#include "my_ctype.h"

/**
 * Determinates if a char is a hexadecimal digit
 * @param character Char to check
 * @return true if so, false otherwise
 * @warning Parameter is int type because this function can handle EOF
 */
bool my_isxdigit(int character)
{
    return (('0' <= character && character <= '9') ||
        ('A' <= character && character <= 'F') ||
        ('a' <= character && character <= 'f'));
}
