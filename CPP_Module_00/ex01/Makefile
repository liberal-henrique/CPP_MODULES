CC			=	c++
CCFLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -f
NAME		=	PhoneBook

SRCS		=	Contact.cpp PhoneBook.cpp Main.cpp

OBJS		=	$(SRCS:%.cpp=%.o)

all:	$(NAME)

$(NAME):
		$(CC) $(CCFLAGS) $(SRCS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean m
