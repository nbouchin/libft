# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hublanc <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/24 15:04:09 by hublanc           #+#    #+#              #
#    Updated: 2017/07/26 09:47:26 by nbouchin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = shell
CC      = gcc
FLAGS   = -Wall -Wextra -Werror
LIB     = libft/libft.a
HEADER  = includes/
LIBSRC  = libft/
SRCDIR  = srcs/
OBJDIR  = objs/
SRC		=	main.c\
			terminal.c\
			line_editor/prompt.c\
			line_editor/arrow.c\
			line_editor/keys.c\
			line_editor/cmd.c\
			line_editor/quote.c\
			line_editor/history.c\
			exec/exec.c\
			exec/pidwaiter.c\
			exec/routine.c\
			lexer/token.c\
			lexer/lexer.c\
			lexer/sort_token.c\
			lexer/stock_tree.c\
			lexer/node.c\
			redirection/filedescriptor.c\
			redirection/pipe.c\
			redirection/heredoc.c\
			redirection/redirection.c\
			tools/error.c\
			tools/tools.c\
			tools/tools_keys.c\
			tools/tools_quote.c\
			tools/tools_extra.c\
			tools/tools_history.c\
			built-in/echo.c\
			built-in/env.c\
			built-in/ft_cd.c\
			built-in/set_env.c\
			built-in/unsetenv.c
# colors
GRN     =   \033[0;32m
RED     =   \033[0;31m
CYN     =   \033[0;36m
NC      =   \033[0m
SRCS        = $(addprefix $(SRCDIR), $(SRC))
OBJS        = $(addprefix $(OBJDIR), $(SRC:.c=.o))
	
all: $(OBJDIR) $(NAME)

$(NAME): $(LIB) $(OBJS)
	@$(CC) $(FLAGS)OC -L./$(LIBSRC) -lft -ltermcap -o $(NAME) $(OBJS)
	@echo "\n${CYN}PROCESSING DONE !${NC}"

$(OBJDIR):
	@mkdir -p objs objs/built-in objs/tools objs/exec objs/lexer objs/redirection objs/line_editor

$(LIB):
	@echo "${CYN}Processing ${NC}./libft/objs ${CYN}[${NC}...${CYN}]${NC}"
	@make -C $(LIBSRC)
	@echo "\n${CYN}Processing ${NC}./objs ${CYN}[${NC}...${CYN}]${NC}"

$(OBJDIR)%.o: $(SRCDIR)%.c $(HEADER)$(NAME).h
	@echo "${GRN}Compiling${NC} $@"
	@$(CC) $(FLAGS) -c -o $@ $< -I $(HEADER)

clean:
	@echo "${RED}Cleaning ${NC}./objs/ ${RED}[${NC}...${RED}]${NC}"
	@rm -rf $(OBJS)
	@echo "${RED}Cleaning ${NC}./libft/objs/ ${RED}[${NC}...${RED}]${NC}"
	@make -C $(LIBSRC) clean

fclean: clean
	@echo "${RED}Cleaning ${NC}./${RED}ft_ls${NC}"
	@rm -Rf $(NAME)
	@echo "${RED}Cleaning ${NC}./libft/${RED}libft.h${NC}\n"
	@make -C $(LIBSRC) fclean
	@echo "${RED}DELET DONE !${NC}"

re: fclean all

.PHONY: all clean fclean re