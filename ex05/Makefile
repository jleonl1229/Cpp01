NAME = HARL
HARL = HARL

SRC = 	main.cpp 

CXX = c++ 

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(HARL)

$(NAME): all 

$(HARL):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(HARL)
        
clean:
	rm -rf $(HARL)

re: fclean all 

fclean: clean

.PHONY: all fclean clean re
