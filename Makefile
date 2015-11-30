# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tifuzeau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 18:14:12 by tifuzeau          #+#    #+#              #
#    Updated: 2015/11/30 16:44:41 by pgourran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SHELL	= /bin/sh
RM		= /bin/rm

ARFLAG	= rcs

CC		= gcc
CFLAG	= -Wall -Werror -Wextra
OBJ		= $(SRC:.c=.o)
SRC		= ft_atoi.c\
		  ft_bzero.c\
		  ft_isalnum.c\
		  ft_isalpha.c\
		  ft_isascii.c\
		  ft_isdigit.c\
		  ft_isprint.c\
		  ft_itoa.c\
		  ft_memalloc.c\
		  ft_memchr.c\
		  ft_memcmp.c\
		  ft_memcpy.c\
		  ft_memccpy.c\
		  ft_memdel.c\
		  ft_memmove.c\
		  ft_memset.c\
		  ft_putchar.c\
		  ft_putchar_fd.c\
		  ft_putendl.c\
		  ft_putendl_fd.c\
		  ft_putnbr.c\
		  ft_putnbr_fd.c\
		  ft_putstr.c\
		  ft_putstr_fd.c\
		  ft_strjoin.c\
		  ft_strcat.c\
		  ft_strchr.c\
		  ft_strclr.c\
		  ft_strcmp.c\
		  ft_strcpy.c\
		  ft_strdel.c\
		  ft_strdup.c\
		  ft_strequ.c\
		  ft_striter.c\
		  ft_striteri.c\
		  ft_strlcat.c\
		  ft_strlen.c\
		  ft_strmap.c\
		  ft_strmapi.c\
		  ft_strncat.c\
		  ft_strncmp.c\
		  ft_strncpy.c\
		  ft_strnequ.c\
		  ft_strnew.c\
		  ft_strnstr.c\
		  ft_strrchr.c\
		  ft_strstr.c\
		  ft_strsub.c\
		  ft_strtrim.c\
		  ft_tolower.c\
		  ft_toupper.c\
		  ft_strsplit.c\
		  ft_sizeint.c\
		  ft_pow.c


all: $(NAME)

$(NAME): $(OBJ)
	@ar $(ARFLAG) $(NAME) $(OBJ)
#	@echo "$(NAME) is: OK"
%.o: %.c
	@$(CC) $(CFLAG) -o $@ -c $<
#	@echo "Created $@: done"
clean:
	@rm -rf $(OBJ)
#	@echo "clean obj: done"

fclean: clean
	@rm -rf $(NAME)
#	@echo "clean $(NAME): done"

re: fclean all
