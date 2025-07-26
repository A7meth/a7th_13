/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelamri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:38:19 by ahelamri          #+#    #+#             */
/*   Updated: 2025/07/22 17:21:29 by ahelamri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = src[i];
	return (dest);
}
#include <stdio.h>

int	main()
{
	char	src[] = "ahmed";
	char	dest[10];
	
	printf("%s\n", ft_strcpy(dest, src));
}
