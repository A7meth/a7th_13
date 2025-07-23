/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelamri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 11:47:29 by ahelamri          #+#    #+#             */
/*   Updated: 2025/07/23 11:55:24 by ahelamri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		return (1);
		}
		else
		{
		return (0);
		}
	i ++;
	}
	return (i);
}

#include <stdio.h>

int	main()
{
	char str[] = "hgwafgj";
	char str1[] = "QEFGEG";
	char str2[] = "471349187";

	printf("%d\n",ft_str_is_lowercase(str));
	printf("%d\n",ft_str_is_lowercase(str1));
	printf("%d\n",ft_str_is_lowercase(str2));
}
