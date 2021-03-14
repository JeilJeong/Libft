# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/10 20:26:43 by jejeong           #+#    #+#              #
#    Updated: 2020/12/11 01:50:38 by jejeong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c\
       ft_isdigit.c\
       ft_memcpy.c\
       ft_putstr_fd.c\
       ft_strlcpy.c\
       ft_strtrim.c\
       ft_bzero.c\
       ft_isprint.c\
       ft_memmove.c\
       ft_split.c\
       ft_strlen.c\
       ft_substr.c\
       ft_calloc.c\
       ft_itoa.c\
       ft_memset.c\
       ft_strchr.c\
       ft_strmapi.c\
       ft_tolower.c\
       ft_isalnum.c\
       ft_memccpy.c\
       ft_putchar_fd.c\
       ft_strdup.c\
       ft_strncmp.c\
       ft_toupper.c\
       ft_isalpha.c\
       ft_memchr.c\
       ft_putendl_fd.c\
       ft_strjoin.c\
       ft_strnstr.c\
       ft_isascii.c\
       ft_memcmp.c\
       ft_putnbr_fd.c\
       ft_strlcat.c\
       ft_strrchr.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rsc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
