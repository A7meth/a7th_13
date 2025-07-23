/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelamri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:41:06 by ahelamri          #+#    #+#             */
/*   Updated: 2025/07/23 10:38:19 by ahelamri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'))
		{
			return(0);
		}
		i ++;
	}
	return (1);
}

#include <stdio.h>

int	main()
{
	char	str[] = "arwhgfe";
	char	str1[] ="9739147gegw";

	printf("%d \n", ft_str_is_alpha(str));
	printf("%d \n", ft_str_is_alpha(str1));
}
