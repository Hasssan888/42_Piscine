/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:56:26 by hbakrim           #+#    #+#             */
/*   Updated: 2023/09/07 22:29:59 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}
