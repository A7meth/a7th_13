/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelamri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:58:50 by ahelamri          #+#    #+#             */
/*   Updated: 2025/08/04 13:24:41 by ahelamri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	i = 0;
	while (src[i])
		i++;
	copy = (malloc (sizeof(char) * (i + 1)));
	if (!copy)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*
#include<stdio.h>

int	main()
{
	char	*s = "1337";
	char	*c;
	
	c = ft_strdup(s);
	printf("%s\n",c);
	free (c);
}
*/
