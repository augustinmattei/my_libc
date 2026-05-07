/*
** my_libc project
** my_isgraph.c based on the eponym ctype.h libc function
*/

#include "my_ctype.h"

/**
 * Determinates if a char has a graphical representation
 * @param character Char to check
 * @return true if so, false otherwise
 * @warning Parameter is int type because this function can handle EOF
 */
bool my_isgraph(int character)
{
    return (0x21 <= character <= 0x7E);
}
