# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbouchin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/27 13:56:26 by nbouchin          #+#    #+#              #
#    Updated: 2017/07/27 15:50:36 by nbouchin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   	= 	libftprintf.a
CC     	= 	gcc
HEADER 	= 	includes/
FLAGS  	= 	-Wall -Wextra -Werror
SRCDIR 	= 	srcs/
OBJDIR 	= 	objs/
SRC		=	ft_printf.c	\
				get_type.c		\
				int_utils.c	\
				lower_c.c		\
				lower_d.c		\
				lower_i.c		\
				lower_o.c		\
				lower_p.c		\
				lower_s.c		\
				lower_u.c		\
				lower_x.c		\
				modulo.c		\
				parser.c		\
				str_utils.c	\
				tab_utils.c	\
				uint_utils.c	\
				undefined.c	\
				upper_c.c		\
				upper_d.c		\
				upper_o.c		\
				upper_s.c		\
				upper_u.c		\
				upper_x.c		\
				wstr_utils.c	\

# colors
GRN		=   "\033[0;32m"
RED		=   "\033[0;31m"
CYN		=   "\033[0;36m"
NC		=   "\033[0m"

SRCS	= $(addprefix $(SRCDIR), $(SRC))
OBJS	= $(addprefix $(OBJDIR), $(SRC:.c=.o))

all: $(OBJDIR) $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo $(GRN)"libftprintf.a created"$(NC)

$(OBJDIR):
	@mkdir -p objs

$(OBJDIR)%.o: $(SRCDIR)%.c $(HEADER)libftprintf.h
	@$(CC) -o $@ -c $< $(FLAGS) -I $(HEADER)
	@echo $(CYN)$@" done"$(NC)

clean:
	@rm -rf objs

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
