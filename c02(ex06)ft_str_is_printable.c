/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelamri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:14:37 by ahelamri          #+#    #+#             */
/*   Updated: 2025/07/23 13:44:21 by ahelamri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 && str[i] > 126)
		{
			return (0);
		}
		i ++;
	}
	return (1);
}

#include <stdio.h>

int	main()
{
	char	alpha;

	alpha = '~' + 1;
	char	str[] = "132456768";
	char	str1[] = "^&*%^@#";
	char	str2[] = {alpha};

	printf("%d\n", ft_str_is_printable(str));
	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));

}
