NAME		= scavTrap

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS		= ClapTrap.cpp \
				ScavTrap.cpp \
				main.cpp \

OBJS		= $(SRCS:.cpp=.o)

all			: $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean
