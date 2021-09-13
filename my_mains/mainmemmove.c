/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmemmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 13:46:18 by mbui              #+#    #+#             */
/*   Updated: 2019/04/25 09:36:09 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len);

int		main(void)
{
//	const char	src[] = "my butt hurts";
	char		dst[] = "abcd";
	const char	srcb[] = "my butt hurts";
	char		dstb[50];
	const char	srcc[50] = "my butt hurts";
	char		dstc[50];
	const char	srcd[] = "my butt hurts";
	char		dstd[50];

	ft_memmove(dst, dst + 3, 10);
	printf("%s\n", dst);
	memmove(&dstb, &srcb, sizeof(srcb));
	printf("%s\n", dstb);
	ft_memmove(dstc, srcc, sizeof(srcc));
	printf("%s\n", dstc);
	memmove(dstd, srcd, sizeof(srcd));
	printf("%s\n", dstd);
	return (0);
}
