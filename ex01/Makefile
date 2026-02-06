NAME = phonebook

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Phonebook.cpp  Contact.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS)  $(OBJ) -o $(NAME)

%.o: %.cpp Phonebook.hpp Contact.hpp
	@$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re