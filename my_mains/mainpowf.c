/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powf.c                                          :+:      :+:    :+:   */
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

float	ft_powf(float x, float y)
{
	float	tmp;

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
	printf("%f\n", ft_powf(4,-54));
	printf("%f\n", powf(4,-54));
	printf("%f\n", ft_powf(-4,5));
	printf("%f\n", powf(-4,5));
	printf("%f\n", ft_powf(0,43));
	printf("%f\n", powf(0,43));
	printf("%f\n", ft_powf(324, 0));
	printf("%f\n", powf(324,0));
	printf("%f\n", ft_powf(0, 0));
	printf("%f\n", powf(0,0));
	printf("%f\n", ft_powf(324, 1));
	printf("%f\n", powf(324,1));
	printf("%f\n", ft_powf(-1, 831));
	printf("%f\n", powf(-1, 831));
	return (0);
}
