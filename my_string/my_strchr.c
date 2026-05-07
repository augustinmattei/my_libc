/*
** my_libc project
** my_strchr.c based on the eponym string.h libc function
*/

#include "my_string.h"

/**
 * Search for first occurence of searchedChar in string
 * @param string String to look into
 * @param searchedChar Char you're trying to find
 * @return Pointer to first searchedChar position in string, NULl if not found
*/
char *my_strchr(const char *string, int searchedChar)
{
    if (searchedChar < ASCII_LOW_LIM || searchedChar > ASCII_HIGH_LIM || string == NULL)
        return NULL;
    for (int i = 0; string[i] != '\0'; i++)
        if (string[i] == searchedChar)
            return &string[i];
    return NULL;
}
