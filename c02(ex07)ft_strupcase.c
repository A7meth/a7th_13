/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelamri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:48:18 by ahelamri          #+#    #+#             */
/*   Updated: 2025/07/23 14:34:12 by ahelamri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	while (*str)
	{
		if(*str >= 'a' && *str <= 'z')
			*str -= 32;
			str ++;
	}
	return (str);
}

#include <stdio.h>

int	main()
{
	char	str[] = "ahmed";

	ft_strupcase(str);
	printf("%s\n", str);
}
