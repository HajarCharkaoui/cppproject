NAME = phonebook
CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = phonebook.cpp 

OBG = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CPPFLAGS)  $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re