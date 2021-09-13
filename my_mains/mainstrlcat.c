/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 12:01:57 by mbui              #+#    #+#             */
/*   Updated: 2019/04/23 12:03:24 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int main(void)
{
	char d[] = "cocopop";
	char s[] = "au miel";

	printf("%lu\n", ft_strlcat(d, s, 0));
	printf("%lu\n", strlcat(d, s, 0));
	printf("%lu\n", ft_strlcat(d, s, sizeof(d)));
	printf("%lu\n", strlcat(d, s, sizeof(d)));
	return (0);
}
