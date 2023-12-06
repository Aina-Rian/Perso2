/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harandri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:12:33 by harandri          #+#    #+#             */
/*   Updated: 2023/12/05 16:12:36 by harandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str != '\0')
	{
		size++;
		str++;
	}
	return (size);
}

int	ft_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	val;

	i = 0;
	if (!*str)
		val = 1;
	while (i < ft_strlen(str))
	{
		if (ft_is_lower(str[i]) || ft_is_upper(str[i]))
			val = 1;
		else
			val = 0;
		i++;
	}
	return (val);
}

int main(void)
{
	printf("%d\n", ft_str_is_alpha("alphab"));
	printf("%d\n", ft_str_is_alpha("csd1523c4"));
	printf("%d\n", ft_str_is_alpha(""));

	return 0;
}