# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rastle <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/18 09:19:03 by rastle            #+#    #+#              #
#    Updated: 2018/04/21 19:03:55 by rastle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME = libft.a
#
#CFLAGS = -Wall -Wextra -Werror
#
#SRC = ft_atoi.c ft_isalpha.c ft_isprint.c ft_memcmp.c ft_memset.c ft_strcmp.c ft_strlcat.c ft_strncmp.c ft_strrchr.c ft_toupper.c ft_bzero.c ft_isascii.c ft_memccpy.c ft_memcpy.c ft_strcat.c ft_strcpy.c ft_strlen.c ft_strncpy.c ft_strstr.c ft_isalnum.c ft_isdigit.c ft_memchr.c ft_memmove.c ft_strchr.c ft_strdup.c ft_strncat.c ft_strnstr.c ft_tolower.c
#
#all: $(NAME)
#	
#$(NAME):
#	gcc $(CFLAGS) -c $(SRC)
#	ar rc $(NAME) ft_atoi.o ft_isalpha.o ft_isprint.o ft_memcmp.o ft_memset.o ft_strcmp.o ft_strlcat.o ft_strncmp.o ft_strrchr.o ft_toupper.o ft_bzero.o ft_isascii.o ft_memccpy.o ft_memcpy.o ft_strcat.o ft_strcpy.o ft_strlen.o ft_strncpy.o ft_strstr.o ft_isalnum.o ft_isdigit.o ft_memchr.o ft_memmove.o ft_strchr.o ft_strdup.o ft_strncat.o ft_strnstr.o ft_tolower.o
#
#clean:
#	/bin/rm -f $(wildcard *.o)
#
#fclean: clean
#	/bin/rm -f $(NAME)
#
#re: fclean all

FLAG = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_atoi.c \
	  ft_bzero.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_itoa.c \
	  ft_memalloc.c \
	  ft_memccpy.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memdel.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_putchar.c \
	  ft_putchar_fd.c \
	  ft_putendl.c \
	  ft_putendl_fd.c \
	  ft_putnbr.c \
	  ft_putnbr_fd.c \
	  ft_putstr.c \
	  ft_putstr_fd.c \
	  ft_strcat.c \
	  ft_strchr.c \
	  ft_strclr.c \
	  ft_strcmp.c \
	  ft_strcpy.c \
	  ft_strdel.c \
	  ft_strdup.c \
	  ft_strequ.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strjoin.c \
	  ft_strlcat.c \
	  ft_strlen.c \
	  ft_strmap.c \
	  ft_strmapi.c \
	  ft_strncat.c \
	  ft_strncmp.c \
	  ft_strncpy.c \
	  ft_strnequ.c \
	  ft_strnew.c \
	  ft_strnstr.c \
	  ft_strrchr.c \
	  ft_strsplit.c \
	  ft_strstr.c \
	  ft_strsub.c \
	  ft_strtrim.c \
	  ft_tolower.c \
	  ft_toupper.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"

%.o: %.c
	@gcc $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all
