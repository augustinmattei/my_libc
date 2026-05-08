/*
** my_libc project
** my_ispunct.c based on the eponym ctype.h libc function
*/

#include "my_ctype.h"

/**
 * Determinates if a char is a punctuation character
 * @param character Char to check
 * @return true if so, false otherwise
 * @warning Parameter is int type because this function can handle EOF
 */
bool my_ispunct(int character)
{
    return ((0x21 <= character && character <= 0x2F) ||
        (0x3a <= character && character <= 0x40) ||
        (0x5B <= character && character <= 0x60) ||
        (0x7B <= character && character <= 0x7E));
}
