/*
** my_libc project
** my_ctype.h based on the eponym libc header
*/

#ifndef MY_CTYPE_H_
    #define MY_CTYPE_H_

    #include "../my_bool/my_bool.h"

bool my_isalnum(int character);
bool my_isalpha(int character);
bool my_isblank(int character);
bool my_iscntrl(int character);
bool my_isdigit(int character);
bool my_isgraph(int character);
bool my_islower(int character);
bool my_isprint(int character);
bool my_ispunct(int character);
bool my_isspace(int character);
bool my_isupper(int character);
bool my_isxdigit(int character);

int my_tolower(int character);
int my_toupper(int character);

#endif /* !MY_CTYPE_H_ */
