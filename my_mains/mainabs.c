/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainabs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 09:28:30 by mbui              #+#    #+#             */
/*   Updated: 2019/04/29 09:29:23 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_abs(int i);

int	main(void)
{
	printf("%d\n", ft_abs(45));
	printf("%d\n", abs(45));
	printf("%d\n", ft_abs(0));
	printf("%d\n", abs(0));
	printf("%d\n", ft_abs(-6));
	printf("%d\n", abs(-6));
	return (0);
}
