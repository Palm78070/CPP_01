NAME := OUTPUT_FILE

CC := c++

CFLAGS := -Wall -Werror -Wextra -std=c++98 -g

SRCS := main.cpp \
								Sedx.cpp \

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(NAME) *.dSYM

fclean: clean

re: fclean all

.PHONY: all clean fclean re all