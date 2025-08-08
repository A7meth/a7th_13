/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelamri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:58:41 by ahelamri          #+#    #+#             */
/*   Updated: 2025/08/04 15:47:40 by ahelamri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (!*range)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

/*
#include<stdio.h>
int	main()
{
	int	*R;
	int	size = ft_ultimate_range(&R,2, 8);
	for (int i = 0; i < size; i++)
		printf("%d\n", R[i]);
	free(R);
}
*/
