/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 10:20:23 by mbui              #+#    #+#             */
/*   Updated: 2020/11/11 19:33:51 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>
#include <stdio.h>

long double	ft_powl(long double x, long double y)
{
	long double	tmp;

	tmp = x;
	if (y < 0)
		return (0);
	if (y == 0 || x == 1)
		return (1);
	while (y > 1)
	{
		x *= tmp;
		y--;
	}
	return (x);
}

int main()
{
	printf("%Lf\n", ft_powl(4,-54));
	printf("%Lf\n", powl(4,-54));
	printf("%Lf\n", ft_powl(-4,5));
	printf("%Lf\n", powl(-4,5));
	printf("%Lf\n", ft_powl(0,43));
	printf("%Lf\n", powl(0,43));
	printf("%Lf\n", ft_powl(324, 0));
	printf("%Lf\n", powl(324,0));
	printf("%Lf\n", ft_powl(0, 0));
	printf("%Lf\n", powl(0,0));
	printf("%Lf\n", ft_powl(324, 1));
	printf("%Lf\n", powl(324,1));
	printf("%Lf\n", ft_powl(-1, 831));
	printf("%Lf\n", powl(-1, 831));
	return (0);
}
