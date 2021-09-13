/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 11:08:12 by mbui              #+#    #+#             */
/*   Updated: 2019/04/11 15:18:07 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c);

int		main(void)
{
	char a[] = "les chaussettes de l'archiduchesse sont-elles sèches archi-sèches";

	printf("%s\n", a);
	printf("last occurrence is 'l' = %s\n", ft_strrchr(a, 'l'));
	printf("last occurrence is 'l'(real) = %s\n", strrchr(a, 'l'));
	printf("no occurrence found = %s\n", ft_strrchr(a, 'p'));
	printf("no occurrence found (real) = %s\n", strrchr(a, 'p'));
	return (0);
}
