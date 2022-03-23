# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cassassi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 11:18:06 by cassassi          #+#    #+#              #
#    Updated: 2022/03/21 11:18:10 by cassassi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

SRC		=	megaphone.cpp

OBJSD   =	.obj/

OBJS    =	$(addprefix $(OBJSD), $(SRC:%.cpp=%.o))

FLAGCXX	=	-std=c++98 -Wall -Wextra -Werror

CCXX		=	c++

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