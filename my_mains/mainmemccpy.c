/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmemccpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 13:07:23 by mbui              #+#    #+#             */
/*   Updated: 2019/04/24 11:36:36 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

int		main(void)
{
	char		dst[50] = "BONCHOCOLATNOIR"; 
	char		dsta[50] = "BONCHOCOLATNOIR";
	char		dstb[50] = "BONCHOCOLATNOIR";
	char		dstc[50] = "BONCHOCOLATNOIR";
	char		dstd[50] = "BONCHOCOLATNOIR";
	char		dste[50] = "BONCHOCOLATNOIR";
	char		dstf[50] = "BONCHOCOLATNOIR";
	char		dstg[50] = "BONCHOCOLATNOIR";
	char		dsth[50] = "BONCHOCOLATNOIR";
	char		dsti[50] = "BONCHOCOLATNOIR";
	const char	src[] = "macadamia nuts";
	const char	*srcb = NULL;

	ft_memccpy(dsta, src, 'i', sizeof(src));
	printf("dst until i = %s\n", dsta);
	memccpy(dst, src, 'i', sizeof(src));
	printf("dst until i(real) = %s\n", dst);
	ft_memccpy(dstb, src, 'a', sizeof(src));
	printf("dst until a = %s\n", dstb);
	memccpy(dstc, src, 'a', sizeof(src));
	printf("dst until a(real)= %s\n", dstc);
	ft_memccpy(dstd, src, 'p', sizeof(src));
	printf("c not found in src = %s\n", dstd);
	memccpy(dste, src, 'p', sizeof(src));
	printf("c not found in src(real) = %s\n", dste);
	ft_memccpy(dstf, srcb, 'i', sizeof(srcb));
	printf("(src = NULL) = %s\n", dstf);
	memccpy(dstg, srcb, 'i', sizeof(srcb));
	printf("(src = NULL)(real) = %s\n", dstg);
	ft_memccpy(dsti, src, 'i', 0);
	printf("(n = 0) = %s\n", dsti);
	memccpy(dsth, src, 'i', 0);
	printf("(n = 0)(real) = %s\n", dsth);
	return (0);
}
