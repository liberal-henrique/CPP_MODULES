CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	/bin/rm -f
NAME		=	ScavTrap

SRCS		=	Main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp 

OBJS		=	$(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CCFLAGS) -c $< -o $@

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean m
