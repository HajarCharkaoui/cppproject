NAME = Bank
CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Acount.cpp  tests.cpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CPPFLAGS)  $(OBJ) -o $(NAME)

%.o: %.cpp Acount.hpp 
	@$(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re