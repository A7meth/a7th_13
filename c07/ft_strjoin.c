/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelamri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 04:35:45 by ahelamri          #+#    #+#             */
/*   Updated: 2025/08/06 04:51:59 by ahelamri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*cpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	final_len(char **strs, int size, int sep_len)
{
	int	final_len;
	int	i;

	final_len = 0;
	i = 0;
	while (i < size)
	{
		final_len += len(strs[i]);
		final_len += sep_len;
		i++;
	}
	final_len -= sep_len;
	return (final_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	char	*p;

	if (size == 0)
		return (malloc(1));
	str = malloc(final_len(strs, size, len(sep)) + 1);
	if (!str)
		return (0);
	p = str;
	i = 0;
	while (i < size)
	{
		cpy(p, strs[i]);
		p += len(strs[i]);
		if (i < size - 1)
		{
			cpy(p, sep);
			p += len(sep);
		}
		i++;
	}
	*p = 0;
	return (str);
}
/*

#include <stdio.h>

int main()
{
    char *R[] = {"rak", "tema", "ajemi"};
    char *sep = "-->";

    printf("%s", ft_strjoin(3, R, sep));
}
*/
