# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araveala <araveala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/04 12:20:06 by araveala          #+#    #+#              #
#    Updated: 2024/12/10 10:46:02 by araveala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++11

CPPFILES = main.cpp

OFILES = $(CPPFILES:.cpp=.o)

EXEC = show_reference

all: $(EXEC)
	@echo "\033[0;95m Creating executable\033[0m"

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -g -c $< -o $@

$(EXEC): $(OFILES)
	$(CPP) $(CPPFLAGS) $(CPPFILES) -o $(EXEC)

clean:
	@echo "\033[0;93m Cleaning ofiles\033[0m"
	rm -rf $(OFILES)

fclean: clean
	@echo "\033[0;91m Cleaning all\033[0m"
	rm -f $(EXEC)

re: fclean all $(EXEC)

.PHONY: all clean fclean re
