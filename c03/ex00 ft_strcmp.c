/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelamri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 10:18:28 by ahelamri          #+#    #+#             */
/*   Updated: 2025/07/26 15:09:03 by ahelamri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int main() 
{
    printf("%d\n", ft_strcmp("abc", "abd"));
    printf("%d\n", ft_strcmp("hello", "hello"));
    printf("%d\n", ft_strcmp("a", " "));

    return 0;
}
