NAME	= PhoneBook
SRC		= main.cpp Contact.cpp PhoneBook.cpp
INCLUDE	= PhoneBook.hpp Contact.hpp
OBJ		= $(SRC:.cpp=.o)
CFLAGS  = -Wall -Wextra -Werror -std=c++98
CXX		= c++

all	: $(NAME)

$(NAME)	: $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME) $(INCLUDE)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all