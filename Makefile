NAME = auto_test

SRCS = $(wildcard ../ft_*.c) auto_test.c

CFLAGS = -Wall -Wextra -Werror -I ..

all:
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@./$(NAME)
	@rm $(NAME)

clean:
	rm -f $(NAME) manual_test

re: clean all
