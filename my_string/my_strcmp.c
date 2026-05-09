/*
** my_libc project
** my_strcmp.c based on the eponym string.h libc function
*/

#include "my_string.h"

/**
 * Compares l_str with r_str
 * @param l_str String to be compared
 * @param r_str String to compare to
 * @return Negative, null or positive value if inferior, equal or superior respectively
 * @warning Absolute value of returned value can always be interpreted as the differing char position (starting from 1)
 */
int my_strcmp(const char *l_str, const char *r_str)
{
    for (int i = 0; l_str[i] != '\0' || r_str[i] != '\0'; i++) {
        if (l_str[i] < r_str[i])
            return -(i + 1);
        if (l_str[i] > r_str[i])
            return (i + 1);
    }
    return 0;
}

