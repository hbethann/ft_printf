# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbethann <hbethann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/09 22:20:02 by drgnvgr           #+#    #+#              #
#    Updated: 2022/01/10 14:38:26 by hbethann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILES = ft_print_for_type.c\
	ft_print_precent.c\
	ft_printf_char.c\
	ft_printf.c\
	print_dem_int.c\
	print_hex.c\
	print_str.c\
	print_unsigned_dem.c\
	print_void_pointer.c

HEAD = ft_printf.h
NAME = libftprintf.a
LIBFT = libft/libft.a
OBJ_SRC = $(SRC_FILES:.c=.o)
FLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJ_SRC)
				$(MAKE) -C ./libft
				cp $(LIBFT) $(NAME)
				ar rc $(NAME) $(OBJ_SRC)
				ranlib $(NAME)
%.o:	%.c $(HEAD)
				cc $(FLAGS) -c $< -o $@
all: $(NAME)

clean:
		$(MAKE) clean -C ./libft
		rm -f $(OBJ_SRC)
fclean: clean
		$(MAKE) fclean -C ./libft
		rm -f $(NAME)
re: fclean all

.PHONY: all bonus clean fclean re