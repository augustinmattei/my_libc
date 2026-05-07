/*
** Tests for my_string.h header
*/

#include <criterion/criterion.h>
#include "../my_string/my_string.h"
#include <stdio.h>

Test(my_strchr, null_string)
{
    cr_assert_eq(my_strchr(NULL, 'c'), NULL);
}

Test(my_strchr, basic_case)
{
    char *strchr_basic_str = "Hello World";
    char *strchr_basic_result = my_strchr(strchr_basic_str, 'l');

    cr_assert_eq(*strchr_basic_result, 'l');
}

Test(my_strchr, invalid_chars)
{
    char *strchr_inv_str = "Hello everyone reading this!";
    char *strchr_neg_char = my_strchr(strchr_inv_str, -12);
    char *stchr_to_big_char = my_strchr(strchr_inv_str, 148);

    cr_assert_eq(strchr_neg_char, NULL);
    cr_assert_eq(stchr_to_big_char, NULL);
}

Test(my_strchr, char_not_in_string)
{
    char *strchr_not_in_str = "Un petit mot de francais...";
    char *strchr_not_in_result = my_strchr(strchr_not_in_str, 'z');

    cr_assert_eq(strchr_not_in_result, NULL);
}

Test(my_strrchr, null_string)
{
    cr_assert_eq(my_strrchr(NULL, 'c'), NULL);
}

Test(my_strrchr, basic_case)
{
    char *strrchr_basic_str = "Hello World";
    char *strrchr_basic_result = my_strrchr(strrchr_basic_str, 'W');

    cr_assert_eq(*strrchr_basic_result, 'W');
}

Test(my_strrchr, invalid_chars)
{
    char *strrchr_inv_str = "Hello everyone reading this!";
    char *strrchr_neg_char = my_strrchr(strrchr_inv_str, -12);
    char *strrchr_to_big_char = my_strrchr(strrchr_inv_str, 148);

    cr_assert_eq(strrchr_neg_char, NULL);
    cr_assert_eq(strrchr_to_big_char, NULL);
}

Test(my_strrchr, char_not_in_string)
{
    char *strrchr_not_in_str = "Un grand mot de francais...";
    char *strrchr_not_in_result = my_strrchr(strrchr_not_in_str, 'l');

    cr_assert_eq(strrchr_not_in_result, NULL);
}

Test(my_strlen, null_string)
{
    size_t null_len = my_strlen(NULL);

    cr_assert_eq(null_len, 0);
}

Test(my_strlen, no_len_string)
{
    size_t no_len_str_len = my_strlen("\0");

    cr_assert_eq(no_len_str_len, 0);
}

Test(my_strlen, basic_case)
{
    size_t basic_len = my_strlen("Not too long");

    cr_assert_eq(basic_len, 12);
}
