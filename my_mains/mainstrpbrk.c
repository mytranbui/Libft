/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrpbrk.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:49:43 by mbui              #+#    #+#             */
/*   Updated: 2019/09/25 16:22:45 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, char c);

char	*ft_strpbrk(const char *s1, const char *s2);

int		main(void)
{
	char s1[] = "salut les cocos";
	char s2[] = "dzagrg";
	char s1a[] = "salut les cocos";
	char s2a[] = "ut";
	char s1b[] = "salut les cocos";
	char s2b[] = "qwpnm";
	char s1c[] = "salut les cocos";
	char s2c[] = " les";
	char s1d[] = "salut les cocos";
	char s2d[] = "dblfofn";

	printf("mine: %s.\n", ft_strpbrk(s1, s2));
	printf("libc: %s.\n", strpbrk(s1, s2));
	printf("mine: %s.\n", ft_strpbrk(s1a, s2a));
	printf("libc: %s.\n", strpbrk(s1a, s2a));
	printf("mine: %s.\n", ft_strpbrk(s1b, s2b));
	printf("libc: %s.\n", strpbrk(s1b, s2b));
	printf("mine: %s.\n", ft_strpbrk(s1c, s2c));
	printf("libc: %s.\n", strpbrk(s1c, s2c));
	printf("mine: %s.\n", ft_strpbrk(s1d, s2d));
	printf("libc: %s.\n", strpbrk(s1d, s2d));
	return (0);
}

/*find the first occurence and put out the s1 starting from that occurence*/
/*if no occurence -> null*/
/*if occurence is a same word from the 2 strings -> full s1*/
