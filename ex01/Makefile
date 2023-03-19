NAME := Zombie_horde

CC := c++

CFLAGS := -Wall -Werror -Wextra -std=c++98 -g

INCS := -iquote ./

SRCS := main.cpp \
	Zombie.cpp \
	zombieHorde.cpp \

OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC)  -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCS) -c $^ -o $@

clean:
	rm -rf $(NAME) *.dSYM ${OBJS}

fclean: clean

re: fclean all

.PHONY: clean fclean re all