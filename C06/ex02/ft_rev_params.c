/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:17:38 by hbakrim           #+#    #+#             */
/*   Updated: 2023/08/26 18:53:14 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int arc, char **arv)
{
	int	i;
	int	j;

	(void)arc;
	i = 1;
	while (arv[i])
		i++;
	i--;
	while (i > 0)
	{
		j = 0;
		while (arv[i][j])
		{
			write(1, &arv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
}
