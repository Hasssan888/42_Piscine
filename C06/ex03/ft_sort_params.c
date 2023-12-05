/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:10:46 by hbakrim           #+#    #+#             */
/*   Updated: 2023/08/26 21:37:25 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int arc, char **arv)
{
	int	i;
	int	j;

	if (arc >= 2)
	{
		i = 0;
		while (++i < arc - 1)
		{
			j = i;
			while (++j <= arc - 1)
			{
				if (ft_strcmp(arv[i], arv[j]) > 0)
					ft_swap(&arv[i], &arv[j]);
			}
		}
		i = 1;
		while (i < arc)
		{
			ft_putstr(arv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
