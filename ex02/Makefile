NAME = HiThisIsBrain
HiThisIsBrain = HiThisIsBrain

SRC = 	main.cpp 

CXX = c++ 

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(HiThisIsBrain)

$(NAME): all 

$(HiThisIsBrain):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(HiThisIsBrain)
        
clean:
	rm -rf $(HiThisIsBrain)

re: fclean all 

fclean: clean

.PHONY: all fclean clean re
