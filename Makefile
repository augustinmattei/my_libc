SRC	:=	my_string/my_strchr.c \
		my_string/my_strrchr.c \
		my_string/my_strlen.c \
		my_string/my_strcmp.c \
		my_string/my_strncmp.c \
		my_ctype/my_isalnum.c \
		my_ctype/my_isalpha.c \
		my_ctype/my_isblank.c \
		my_ctype/my_iscntrl.c \
		my_ctype/my_isdigit.c \
		my_ctype/my_isgraph.c \
		my_ctype/my_islower.c \
		my_ctype/my_isprint.c \
		my_ctype/my_ispunct.c \
		my_ctype/my_isspace.c \
		my_ctype/my_isupper.c \
		my_ctype/my_isxdigit.c \
		my_ctype/my_tolower.c \
		my_ctype/my_toupper.c

TEST_SRC	:=	tests/test_string.c \
				tests/test_ctype.c

TEST_OBJ	=	$(TEST_SRC:.c=.o)

NAME	:=	unit_tests

LDLIBS	:=	-lcriterion

CC	:=	gcc

tests:	$(TEST_OBJ)
	$(CC) -o $(NAME) $(SRC) $(TEST_OBJ) --coverage $(LDLIBS)
	-./unit_tests

clean:
	rm -f *.gcda
	rm -f *.gcno
	rm -f $(TEST_OBJ)
	rm -f tests/*.gcda
	rm -f tests/*.gcno

fclean:	clean
	rm -f $(NAME)

re:	fclean	tests

coverage: tests
	gcovr --exclude tests/

.PHONY:	tests clean fclean re
