/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 09:18:02 by mbui              #+#    #+#             */
/*   Updated: 2019/04/29 09:19:49 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	min(int *tab, unsigned int len);

int	main(void)
{
	int	*tab;

	if (!(tab = (int*)malloc(sizeof(int) * 3)))
		return (0);
	tab[0] = 7;
	tab[1] = 6;
	tab[2] = 4;
	printf("%d", min(tab, 3));
	return (0);
}
