NAME = MoarBrainz
MoarBrainz = MoarBrainz

SRC = 	main.cpp \
	Zombie.cpp \
	zombieHorde.cpp

CXX = c++ 

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(MoarBrainz)

$(NAME): all 

$(MoarBrainz):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(MoarBrainz)
        
clean:
	rm -rf $(MoarBrainz)

re: fclean all 

fclean: clean

.PHONY: all fclean clean re
