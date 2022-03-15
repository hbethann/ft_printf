# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbethann <hbethann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 19:41:36 by hbethann          #+#    #+#              #
#    Updated: 2021/11/15 22:04:37 by hbethann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_atoi.c		ft_bzero.c		ft_calloc.c			ft_isalnum.c\
			ft_isalpha.c	ft_isascii.c	ft_isdigit.c		ft_isprint.c\
			ft_memchr.c		ft_memcmp.c		ft_memcpy.c			ft_memmove.c\
			ft_memset.c		ft_strchr.c		ft_strdup.c			ft_strjoin.c\
			ft_strlcat.c	ft_strlcpy.c	ft_strlen.c			ft_strncmp.c\
			ft_strnstr.c	ft_strrchr.c	ft_substr.c			ft_tolower.c\
			ft_toupper.c	ft_putnbr_fd.c	ft_putchar_fd.c		ft_putendl_fd.c\
			ft_substr.c		ft_strjoin.c	ft_putstr_fd.c		ft_strtrim.c\
			ft_strtrim.c	ft_itoa.c		ft_striteri.c		ft_strmapi.c\
			ft_split.c

SRCS_B	=	
HEADER	=	~/libft.h
OBJ		=	$(patsubst %.c, %.o, $(SRCS))

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra -I $(HEADER)

.PHONY	:	all clean fclean re bonus

all		:	$(NAME)

$(NAME)	:	$(OBJ)
	ar rsc	$(NAME) $?

%.o		:	%.c	$(HEADER)
	$(CC)	$(CFLAGS) -c $< -o $@

bonus	:
	@make OBJ="$(OBJ_B)" all

clean	:
	@rm -f $(OBJ) $(OBJ_B)

fclean	:	clean
	@$(RM) $(NAME)

re		: fclean all