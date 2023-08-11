CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	/bin/rm -f
NAME		=	AnimalClass

SRCS		=	Main.cpp \
				Animal.cpp \
				Cat.cpp \
				Dog.cpp \
				WrongCat.cpp \
				WrongAnimal.cpp

OBJS		=	$(SRCS:.cpp=.o)

all:	$(NAME)

%.o: %.cpp
	$(CC) $(CCFLAGS) -c $< -o $@

$(NAME):
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean m
