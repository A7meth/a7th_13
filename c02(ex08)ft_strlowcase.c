/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelamri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:43:42 by ahelamri          #+#    #+#             */
/*   Updated: 2025/07/23 14:50:38 by ahelamri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	ptr;

	ptr = str;
	while (*str)
	{
		if(*str >= 'A' && *str <= 'Z')
			*str += 32;
	*str ++;
	}
	return (ptr);
}

#include <stdio.h>

int	main()
{
	char	str[] ="AHMED";
	*ft_strlowcase(str);
	printf("%s\n",str);
}
