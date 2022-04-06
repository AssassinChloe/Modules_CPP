# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 00:18:47 by cassassi          #+#    #+#              #
#    Updated: 2022/04/06 14:01:19 by cassassi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	materia

SRC		=	main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

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
