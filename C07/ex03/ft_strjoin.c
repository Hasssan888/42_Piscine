/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:55:25 by hbakrim           #+#    #+#             */
/*   Updated: 2023/08/28 15:43:47 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (*dest);
}

int	count_len_total(int size, char **strs, char *sep)
{
	int	i;
	int	len_total;
	int	len_sep;
	int	len_final;

	len_total = 0;
	i = 0;
	while (i < size)
	{
		len_total += ft_strlen(strs[i]);
		i++;
	}
	len_sep = ft_strlen(sep);
	len_final = len_total + (size - 1) * len_sep + 1;
	return (len_final);
}

char	*join_str(int size, char **strs, char *sep, int len_final)
{
	int		i;
	int		pos;
	char	*result;

	result = (char *)malloc(sizeof(char) * len_final);
	if (result == NULL)
		return (NULL);
	pos = 0;
	i = 0;
	while (i < size)
	{
		ft_strcpy(result + pos, strs[i]);
		pos += ft_strlen(strs[i]);
		if (i != size - 1)
		{
			ft_strcpy(result + pos, sep);
			pos += ft_strlen(sep);
		}
		i++;
	}
	result[len_final - 1] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len_final;
	char	*empty_str;

	if (size == 0)
	{
		empty_str = (char *)malloc(sizeof(char));
		if (empty_str == NULL)
			return (NULL);
		empty_str[0] = '\0';
		return (empty_str);
	}
	len_final = count_len_total(size, strs, sep);
	return (join_str(size, strs, sep, len_final));
}
/*
#include <stdio.h>

int main() {
    char *strs[] = {"Hello", "world", "how", "are", "you"};
    int size = sizeof(strs) / sizeof(strs[0]);
    char *sep = " ";

    char *result = ft_strjoin(size, strs, sep);
    if (result != NULL) {
        printf("%s\n", result);
        free(result); // Remember to free the allocated memory
    }

    return 0;
}*/
