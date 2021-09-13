/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainsqrt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:40:34 by mbui              #+#    #+#             */
/*   Updated: 2019/09/23 18:13:29 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

double	ft_sqrt(double nb);

int main (void)
{
	printf("%f\n", sqrt(2147483648));
	printf("%f\n", sqrt(21474836487));
	printf("%f\n", sqrt(2147483646));
	printf("%f\n", ft_sqrt(2147483648));
	printf("%f\n", ft_sqrt(21474836487));
	printf("%f\n", ft_sqrt(2147483646));
	printf("%f\n", sqrt(1.7976931348623158e+308));
	printf("%f\n", ft_sqrt(1.7976931348623158e+308));
	printf("%f\n", sqrt(1.7976931348623157e+308));
	printf("%f\n", ft_sqrt(1.7976931348623157e+308));
	printf("%f\n", sqrt(1.7976931348623156e+308));
	printf("%f\n", ft_sqrt(1.7976931348623156e+308));
	printf("%f\n", sqrt(1));
	printf("%f\n", ft_sqrt(1));
	printf("%f\n", sqrt(2));
	printf("%f\n", ft_sqrt(2));
	printf("%f\n", sqrt(3));
	printf("%f\n", ft_sqrt(3));
	printf("%f\n", sqrt(4));
	printf("%f\n", ft_sqrt(4));
	printf("%f\n", sqrt(5));
	printf("%f\n", ft_sqrt(5));
	printf("%f\n", sqrt(6));
	printf("%f\n", ft_sqrt(6));
	printf("%f\n", sqrt(4));
	printf("%f\n", ft_sqrt(4));
	printf("%f\n", ft_sqrt(8));
	printf("%f\n", ft_sqrt(12));
	printf("%f\n", ft_sqrt(16));
	printf("%f\n", ft_sqrt(20));
	printf("%f\n", ft_sqrt(24));
	printf("%f\n", ft_sqrt(28));
	printf("%f\n", ft_sqrt(32));
	printf("%f\n", ft_sqrt(36));
	printf("%f\n", ft_sqrt(40));
	return (0);
}
