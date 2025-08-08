/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelamri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:06:10 by ahelamri          #+#    #+#             */
/*   Updated: 2025/08/04 12:22:24 by ahelamri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*range;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (malloc (sizeof (int) * size));
	if (!range)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

/*
#include<stdio.h>

int     main()
{
	int	*R;

	R = ft_range(2, 6);
	for (int i = 0; i < 6 - 2; i++)
		printf("%d\n", R[i]);
	free (R);
}
*/
