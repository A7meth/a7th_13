/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelamri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:02:32 by ahelamri          #+#    #+#             */
/*   Updated: 2025/07/22 18:38:58 by ahelamri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i ++;
	}
	while (i < n)
	{
	dest[i] = '\0'; 
	i ++;
	}
	return (dest);
}

#include <stdio.h>

int	main()
{
	int	n = 3;
	char	src[] = "ahmed";
	char	dest[100];

	ft_strncpy(dest, src, n);
	printf("%s\n",dest);
	return (0);
}
