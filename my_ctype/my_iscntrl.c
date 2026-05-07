/*
** my_libc project
** my_iscntrl.c based on the eponym ctype.h libc function
*/

#include "my_ctype.h"

/**
 * Determinates if a char is a control character
 * @param character Char to check
 * @return true if so, false otherwise
 * @warning Parameter is int type because this function can handle EOF
 */
bool my_iscntrl(int character)
{
    return ((0x00 <= character <= 0x1F) ||
        (character == 0x7F));
}
