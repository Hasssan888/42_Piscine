/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:16:07 by hbakrim           #+#    #+#             */
/*   Updated: 2023/08/28 17:13:16 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	tab = malloc(sizeof(int) * (max - min));
	if (tab != NULL)
	{
		while (i < (max - min))
		{
			tab[i] = min + i;
			i++;
		}
		return (tab);
	}
	else
		return (NULL);
}
