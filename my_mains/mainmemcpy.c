/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmemcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 10:55:36 by mbui              #+#    #+#             */
/*   Updated: 2019/04/25 09:38:56 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

int		main(void)
{
//	const char	src[] = "Yoyoyo les copains";
	char		dst[50] = "coucou les amis";
	const char	srce[] = "Yoyoyo les copains";
	char		dste[50];
	const char	srcf[] = "";
	char		dstf[50];
	const char	srcg[] = "";
	char		dstg[50];
	const char	srcb[] = "Yoyoyo les copains";
	char		dstb[50];

	ft_memcpy(dst, dst + 3, 4);	//undefined behaviour go to memmove
	printf("dst after = %s\n", dst);
	ft_memcpy(dste, srce, sizeof(srce));
	printf("dst empty = %s\n", dste);
	ft_memcpy(dstf, srcf, sizeof(srcf));
	printf("src empty = %s\n", dstf);
	ft_memcpy(dstg, srcg, sizeof(srcg));
	printf("both empty = %s\n", dstg);
	memcpy((char *)srcb + 4, srcb, 4); //undefined behaviour go to memmove
	printf("dst verif = %s\n", dstb);
	return (0);
}
