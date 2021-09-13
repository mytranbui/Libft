/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmemccpy2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 11:29:07 by mbui              #+#    #+#             */
/*   Updated: 2019/05/14 11:38:34 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

int		main()
{
	char dst1[50] = "Pluriel";
	char src1 [] = "luhqdia";
	char dst2[50] = "";
	char src2 [] = "pluif ee";
	char dst3[50] = "\tl\no\ru\vr\fd";
	char src3[] = "\r";
	char dst4[50] = "box 99    bix";
	char src4 [] = " \r 5eeed d";
//	char dst5[50] = "        ddd       .. ";
//	char src5 [] = "Pas de quoi";
	char dst6[50] = " o u   i777 ---___++ ";
	char src6 [] = "iu ";
	char dst7[50] = " 99999999988-- ++";
	char src7 [] = "+-";
	char dst8[50] = "9";
	char src8 [] = ".";
	char dst9[] = "-088           88";
	char src9 [] = "8";
	char dst10[50] = "3335";
	char src10 [] = "je";
	char dst1a[50] = "Pluriel";
	char src1a [] = "luhqdia";
	char dst2a[50] = "";
	char src2a [] = "pluif ee";
	char dst3a[50] = "\tl\no\ru\vr\fd";
	char src3a[] = "\r";
	char dst4a[50] = "box 99    bix";
	char src4a [] = " \r 5eeed d";
//	char dst5a[50] = "        ddd       .. ";
//	char src5a [] = "Pas de quoi";
	char dst6a[50] = " o u   i777 ---___++ ";
	char src6a [] = "iu ";
	char dst7a[50] = " 99999999988-- ++";
	char src7a [] = "+-";
	char dst8a[50] = "9";
	char src8a [] = ".";
	char dst9a[] = "-088           88";
	char src9a [] = "8";
	char dst10a[50] = "3335";
	char src10a [] = "je";
	printf("---------------------TEST1---------------------\n");
	printf("%s\n", ft_memccpy(dst1, src1, 'q', sizeof(src1)));
	printf("%s\n", memccpy(dst1a, src1a, 'q', sizeof(src1a)));
	printf("---------------------TEST2---------------------\n");
	printf("%s\n", ft_memccpy(dst2, src2, 'f', 5));
	printf("%s\n", memccpy(dst2a, src2a, 'f', 5));
	printf("---------------------TEST3---------------------\n");
	printf("%s\n", ft_memccpy(dst3, src3, '5', 20));
	printf("%s\n", memccpy(dst3a, src3a, '5', 20));
	printf("---------------------TEST4---------------------\n");
	printf("%s\n", ft_memccpy(dst4, src4, 'a', 8));
	printf("%s\n", memccpy(dst4a, src4a, 'a', 8));
//	printf("---------------------TEST5---------------------\n");
//	printf("%s\n", ft_memccpy(dst5, src5, '\n', 50));
//	printf("%s\n", memccpy(dst5a, src5a, '\n', 50));
	printf("---------------------TEST6---------------------\n");
	printf("%s\n", ft_memccpy(dst6, src6, 'i', 8));
	printf("%s\n", memccpy(dst6a, src6a, 'i', 8));
	printf("---------------------TEST7---------------------\n");
	printf("%s\n", ft_memccpy(dst7, src7, 'l', 0));
	printf("%s\n", memccpy(dst7a, src7a, 'l', 0));
	printf("---------------------TEST8---------------------\n");
	printf("%s\n", ft_memccpy(dst8, src8, 'f', 3));
	printf("%s\n", memccpy(dst8a, src8a, 'f', 3));
	printf("---------------------TEST9---------------------\n");
	printf("%s\n", ft_memccpy(dst9, src9, 'p', 2));
	printf("%s\n", memccpy(dst9a, src9a, 'p', 2));
	printf("---------------------TEST10---------------------\n");
	printf("%s\n", ft_memccpy(dst10, src10, '3', 0));
	printf("%s\n", memccpy(dst10a, src10a, '3', 0));
	return (0);
}
