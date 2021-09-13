/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmemcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:46:38 by mbui              #+#    #+#             */
/*   Updated: 2019/04/08 14:50:01 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	char a[] = "choco peanut butter";
	char b[] = "choco peanut";
	char c[] = "";

	printf("%d\n", ft_memcmp(a, b, sizeof(b)));
	printf("%d\n", memcmp(a, b, sizeof(b)));
	printf("%d\n", ft_memcmp(c, b, sizeof(b)));
	printf("%d\n", memcmp(c, b, sizeof(b)));
	printf("%d\n", ft_memcmp(b, c, sizeof(b)));
	printf("%d\n", memcmp(b, c, sizeof(b)));
	return (0);
}
