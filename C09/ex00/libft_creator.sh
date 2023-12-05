# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 16:13:05 by hbakrim           #+#    #+#              #
#    Updated: 2023/09/06 20:46:29 by hbakrim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
rm -f libft.a
gcc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_strlen.c ft_putstr.c ft_strcmp.c
ar rc libft.a *.o
find . -name "*.o" -type f -delete
