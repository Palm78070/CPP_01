NAME := OUTPUT_FILE

CC := c++

CFLAGS := -Wall -Werror -Wextra -std=c++98 -g

SRCS := main.cpp \
		Weapon.cpp \
		HumanA.cpp \

INCS := -iquote ./

OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCS) -c $^ -o $@

clean:
	rm -rf $(NAME) *.dSYM $(OBJS)

fclean: clean

re: clean all

.PHONY: clean fclean clean re all