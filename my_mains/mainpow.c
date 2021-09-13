/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainpow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 10:20:23 by mbui              #+#    #+#             */
/*   Updated: 2020/11/11 19:22:01 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <math.h>

double	ft_pow(double x, double y);

int main()
{
	printf("%f\n", ft_pow(4,-54));
	printf("%f\n", pow(4,-54));
	printf("%f\n", ft_pow(-4,5));
	printf("%f\n", pow(-4,5));
	printf("%f\n", ft_pow(0,43));
	printf("%f\n", pow(0,43));
	printf("%f\n", ft_pow(324, 0));
	printf("%f\n", pow(324,0));
	printf("%f\n", ft_pow(0, 0));
	printf("%f\n", pow(0,0));
	printf("%f\n", ft_pow(324, 1));
	printf("%f\n", pow(324,1));
	printf("%f\n", ft_pow(1, 830));
	printf("%f\n", pow(1, 830));

	return (0);
}
