/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainisascii.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 10:18:06 by mbui              #+#    #+#             */
/*   Updated: 2019/04/05 10:19:34 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c);

int	main(void)
{
	printf("%d\n", ft_isascii(128));
	printf("%d\n", isascii(128));
	return (0);
}