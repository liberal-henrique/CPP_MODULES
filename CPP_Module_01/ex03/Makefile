CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	/bin/rm -f
NAME		=	Unnecessary_violence

SRCS		=	Main.cpp \
				HumanA.cpp \
				HumanB.cpp \
				Weapon.cpp \

OBJS		=	$(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean m
