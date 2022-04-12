# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 13:55:30 by cassassi          #+#    #+#              #
#    Updated: 2022/04/07 17:34:23 by cassassi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	formalities

SRC		=	main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJSD   =	.obj/

OBJS    =	$(addprefix $(OBJSD), $(SRC:%.cpp=%.o))

FLAGCXX	=	-std=c++98 -Wall -Wextra -Werror

CCXX	=	c++

all		:	$(NAME)

$(NAME)	:	$(OBJS)
				$(CCXX) -o $(NAME) $(FLAGCXX) $(OBJS)
clean	:	
			rm -rf $(OBJSD)

fclean	:	clean
				rm -rf $(NAME)

re		:	fclean all

$(OBJSD)%.o:%.cpp
			@mkdir -p $(OBJSD)
			$(CCXX) $(FLAGCXX) -o $@ -c $<
