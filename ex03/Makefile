NAME = UnnecessaryViolence
UnnecessaryViolence = UnnecessaryViolence

SRC = 	main.cpp \
	Weapon.cpp \
	HumanA.cpp \
	HumanB.cpp

CXX = c++ 

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(UnnecessaryViolence)

$(NAME): all 

$(UnnecessaryViolence):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(UnnecessaryViolence)
        
clean:
	rm -rf $(UnnecessaryViolence)

re: fclean all 

fclean: clean

.PHONY: all fclean clean re
