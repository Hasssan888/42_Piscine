/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:18:31 by hbakrim           #+#    #+#             */
/*   Updated: 2023/08/22 16:05:34 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_white_space(char *str, int *p_i)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (str[i] <= 32 || str [i] == 127)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count *= -1;
		i++;
	}
	*p_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	r;

	r = 0;
	sign = ft_white_space(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10;
		r = r + (str[i] - 48);
		i++;
	}
	return (r * sign);
}
