/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:51:52 by hbakrim           #+#    #+#             */
/*   Updated: 2023/08/21 17:57:47 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_putstr_is_printable(char str)
{
	if (str < ' ' || str > '~')
		return (1);
	else
		return (0);
}

void	print_hexa(char str)
{
	char	*hexa;
	char	c;

	hexa = "0123456789abcdef";
	write(1, "\\", 1);
	c = hexa[(unsigned char) str / 16];
	write(1, &c, 1);
	c = hexa[(unsigned char) str % 16];
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (ft_putstr_is_printable(*str))
			print_hexa(*str);
		else
			write(1, str, 1);
		str++;
	}
}
