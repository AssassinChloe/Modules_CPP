# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cassassi <cassassi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/15 12:56:21 by cassassi          #+#    #+#              #
#    Updated: 2022/04/15 14:02:25 by cassassi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	iter

SRC		=	main.cpp

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
