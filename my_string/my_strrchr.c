/*
** my_libc project
** my_strrchr.c based on the eponym string.h libc function
*/

#include "my_string.h"

/**
 * Search for last occurence of searchedChar in string
 * @param string String to look into
 * @param searchedChar Char you're trying to find
 * @return Pointer to last searchedChar position in string, NULL if not found
*/
char *my_strrchr(const char *string, int searchedChar)
{
    size_t str_size = my_strlen(string);

    if (searchedChar < 0 || searchedChar > 126)
        return NULL;
    for (; str_size >= 0; str_size--)
        if (string[str_size] == searchedChar)
            return &string[str_size];
    return NULL;
}
