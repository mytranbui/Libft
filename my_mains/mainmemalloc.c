/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmemalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 12:58:40 by mbui              #+#    #+#             */
/*   Updated: 2019/04/10 13:05:40 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memalloc(size_t size);

int		main(void)
{
	int n;
	int *p1 = ft_memalloc(4 * sizeof(int));
	int *p2 = malloc(sizeof(int[4]));

	n = 0;
	while (n < 4)
	{
		p1[n] = n * n;
		p2[n] = n * n;
		printf("p1[%d] = %d\n", n, p1[n]);
		printf("p2[%d] = %d\n", n, p2[n]);
		n++;
	}
	free(p1);
	free(p2);
	return (0);
}
