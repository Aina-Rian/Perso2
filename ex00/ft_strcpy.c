/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harandri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:35:18 by harandri          #+#    #+#             */
/*   Updated: 2023/12/05 13:59:22 by harandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcpy(char *dest, char *src)
{
	int	size;
	int	i;

	size = ft_strlen(src);
	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
