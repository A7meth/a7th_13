/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelamri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:01:09 by ahelamri          #+#    #+#             */
/*   Updated: 2025/07/23 12:09:15 by ahelamri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
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

int	main ()
{
	char str[] = "gsfjsgj";
	char str1[] = "WEQEEfdf";
	char str2[] = "QRE@#$@356ryhe";
	printf("%d\n",ft_str_is_uppercase(str));
	printf("%d\n",ft_str_is_uppercase(str1));
	printf("%d\n",ft_str_is_uppercase(str2));
}
