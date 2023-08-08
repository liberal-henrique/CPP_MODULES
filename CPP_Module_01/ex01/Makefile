CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	/bin/rm -f
NAME		=	zombieHorde

SRCS		=	Zombie.cpp \
				zombieHorde.cpp \
				Main.cpp \

OBJS		=	$(SRCS:.cpp=.o)

$(NAME):
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CCFLAGS) -c $< -o $@

all:	$(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean m
