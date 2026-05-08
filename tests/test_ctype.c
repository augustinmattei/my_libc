/*
** Tests for my_ctype.h header
*/

#include "../my_ctype/my_ctype.h"
#include <criterion/criterion.h>

Test(my_isalnum, not_alphanum_char)
{
    bool not_alnum_char = my_isalnum(' ');

    cr_assert_eq(not_alnum_char, false, "Got value : %i, expected : %i\n", not_alnum_char, false);
}

Test(my_isalnum, alphanum_char)
{
    cr_assert_eq(my_isalnum('T'), true);
}

Test(my_isalpha, not_alpha_char)
{
    cr_assert_eq(my_isalpha(' '), false);
}

Test(my_isalpha, alpha_char)
{
    cr_assert_eq(my_isalpha('B'), true);
}

Test(my_isblank, not_blank_char)
{
    cr_assert_eq(my_isblank('e'), false);
}

Test(my_isblank, blank_char)
{
    cr_assert_eq(my_isblank('\t'), true);
}

Test(my_iscntrl, not_cntrl_char)
{
    cr_assert_eq(my_iscntrl('e'), false);
}

Test(my_iscntrl, cntrl_char)
{
    cr_assert_eq(my_iscntrl('\n'), true);
}

Test(my_isdigit, not_digit_char)
{
    cr_assert_eq(my_isdigit('A'), false);
}

Test(my_isdigit, digit_char)
{
    cr_assert_eq(my_isdigit('2'), true);
}

Test(my_isgraph, no_graph_char)
{
    cr_assert_eq(my_isgraph(' '), false);
}

Test(my_isgraph, graph_char)
{
    cr_assert_eq(my_isgraph('d'), true);
}

Test(my_islower, not_lower_char)
{
    cr_assert_eq(my_islower('G'), false);
}

Test(my_islower, lower_char)
{
    cr_assert_eq(my_islower('g'), true);
}

Test(my_isprint, not_print_char)
{
    cr_assert_eq(my_isprint('\f'), false);
}

Test(my_isprint, print_char)
{
    cr_assert_eq(my_isprint('&'), true);
}

Test(my_ispunct, not_punct_char)
{
    cr_assert_eq(my_ispunct('8'), false);
}

Test(my_ispunct, punct_char)
{
    cr_assert_eq(my_ispunct('~'), true);
}

Test(my_isspace, not_space_char)
{
    cr_assert_eq(my_isspace('?'), false);
}

Test(my_isspace, space_char)
{
    cr_assert_eq(my_isspace(' '), true);
}

Test(my_isupper, not_upper_char)
{
    cr_assert_eq(my_isupper('a'), false);
}

Test(my_isupper, upper_char)
{
    cr_assert_eq(my_isupper('A'), true);
}

Test(my_isxdigit, not_hex_digit)
{
    cr_assert_eq(my_isxdigit('Z'), false);
}

Test(my_isxdigit, hex_digit)
{
    cr_assert_eq(my_isxdigit('c'), true);
}

Test(my_tolower, not_convertable_char)
{
    cr_assert_eq(my_tolower('a'), 'a');
}

Test(my_tolower, convertable_char)
{
    cr_assert_eq(my_tolower('H'), 'h');
}

Test(my_toupper, not_convertable_char)
{
    cr_assert_eq(my_toupper('F'), 'F');
}

Test(my_toupper, convertable_char)
{
    cr_assert_eq(my_toupper('o'), 'O');
}
