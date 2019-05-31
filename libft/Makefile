# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlinde <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 10:38:37 by dlinde            #+#    #+#              #
#    Updated: 2019/05/31 11:01:15 by dlinde           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_atoi.c \
	   ft_memalloc.c \
	   ft_putstr.c \
	   ft_strlen.c \
	   ft_tolower.c \
	   ft_bzero.c \
	   ft_memccpy.c \
	   ft_putstr_fd.c \
	   ft_strmap.c \
	   ft_toupper.c \
	   ft_isalnum.c \
	   ft_memchr.c \
	   ft_strcat.c \
	   ft_strmapi.c \
	   ft_wlen.c \
	   ft_isalpha.c \
	   ft_memcmp.c \
	   ft_strchr.c \
	   ft_strncat.c \
	   ft_wordcount.c \
	   ft_isascii.c \
	   ft_memcpy.c \
	   ft_strclr.c \
	   ft_strncmp.c \
	   ft_isdigit.c \
	   ft_memdel.c \
	   ft_strcmp.c \
	   ft_strncpy.c \
	   ft_isprint.c \
	   ft_memmove.c \
	   ft_strcpy.c \
	   ft_strnequ.c \
	   ft_itoa.c \
	   ft_memset.c \
	   ft_strdel.c \
	   ft_strnew.c \
	   ft_lstadd.c \
	   ft_putchar.c \
	   ft_strdup.c \
	   ft_strnstr.c \
	   ft_lstdel.c \
	   ft_putchar_fd.c \
	   ft_strequ.c \
	   ft_strrchr.c \
	   ft_lstdelone.c \
	   ft_putendl.c \
	   ft_striter.c \
	   ft_strsplit.c \
	   ft_lstiter.c \
	   ft_putendl_fd.c \
	   ft_striteri.c \
	   ft_strstr.c \
	   ft_lstmap.c \
	   ft_putnbr.c \
	   ft_strjoin.c \
	   ft_strsub.c \
	   ft_lstnew.c \
	   ft_putnbr_fd.c \
	   ft_strlcat.c \
	   ft_strtrim.c

CC	=	gcc

FLAGS = -Wall -Wextra -Werror

LIB = libft.h

OBJ = $(FILES:%.c=%.o)

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) -c $(FILES) -I $(LIB)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
