# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rastle <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/18 09:19:03 by rastle            #+#    #+#              #
#    Updated: 2018/04/21 14:46:27 by rastle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c ft_isalpha.c ft_isprint.c ft_memcmp.c ft_memset.c ft_strcmp.c ft_strlcat.c ft_strncmp.c ft_strrchr.c ft_toupper.c ft_bzero.c ft_isascii.c ft_memccpy.c ft_memcpy.c ft_strcat.c ft_strcpy.c ft_strlen.c ft_strncpy.c ft_strstr.c ft_isalnum.c ft_isdigit.c ft_memchr.c ft_memmove.c ft_strchr.c ft_strdup.c ft_strncat.c ft_strnstr.c ft_tolower.c

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) .o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
