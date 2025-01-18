NAME = SedIsForLosers
SedIsForLosers = SedIsForLosers

SRC = 	main.cpp 

CXX = c++ 

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(SedIsForLosers)

$(NAME): all 

$(SedIsForLosers):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(SedIsForLosers)
        
clean:
	rm -rf $(SedIsForLosers)

re: fclean all 

fclean: clean

.PHONY: all fclean clean re
