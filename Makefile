SRC	:=	my_string/my_strchr.c \
		my_string/my_strrchr.c \
		my_string/my_strlen.c

TEST_SRC	:=	tests/test_string.c

TEST_OBJ	=	$(TEST_SRC:.c=.o)

NAME	:=	unit_tests

tests:	$(TEST_OBJ)
	gcc -o $(NAME) $(SRC) $(TEST_OBJ) --coverage -lcriterion
	-./unit_tests

clean:
	rm -f *.gcda
	rm -f *.gcno
	rm -f tests/*.o

fclean:	clean
	rm -f $(NAME)

re:	fclean	tests

coverage: tests
	gcovr --exclude tests/

.PHONY:	tests clean fclean re
