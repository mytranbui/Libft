/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 11:34:01 by mbui              #+#    #+#             */
/*   Updated: 2019/04/24 10:18:01 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strnew(size_t size);

char	*ft_itoa(int n);

int		main(void)
{
	printf("%s\n", ft_itoa(-56));
	printf("%s\n", ft_itoa(6));
	printf("%s\n", ft_itoa(113));
	printf("%s\n", ft_itoa(0));
	return (0);
}
