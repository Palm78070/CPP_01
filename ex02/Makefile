NAME := OUTPUT_FILE

CC := c++

CFLAGS := -Wall -Werror -Wextra -std=c++98 -g

INCS := -iquote ./

SRCS := main.cpp \

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(INCS) $^ -o $@

clean:
	rm -rf $(NAME) *.dSYM

fclean: clean

re: fclean all

.PHONY: clean fclean re all