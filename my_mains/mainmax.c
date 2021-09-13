/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmax.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 09:15:44 by mbui              #+#    #+#             */
/*   Updated: 2019/04/29 09:17:42 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	max(int *tab, unsigned int len);

int	main(void)
{
	int	*tab;

	if (!(tab = (int*)malloc(sizeof(int) * 3)))
		return (0);
	tab[0] = 7;
	tab[1] = 6;
	tab[2] = 4;
	printf("%d", max(tab, 3));
	return (0);
}
