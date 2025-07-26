/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelamri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 10:55:54 by ahelamri          #+#    #+#             */
/*   Updated: 2025/07/23 11:03:37 by ahelamri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			return (0);
		}
		i ++;
	}
	return (1);
}

#include <stdio.h>

int main()
{
	char str[] = "36828462";
	char str1[] = "dgiwd628325";
	char str2[] = "dgiwd";

	printf("%d \n", ft_str_is_numeric(str));
	printf("%d \n", ft_str_is_numeric(str1));
	printf("%d \n", ft_str_is_numeric(str2));
}
