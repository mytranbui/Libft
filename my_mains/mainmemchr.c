/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmemchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 12:26:28 by mbui              #+#    #+#             */
/*   Updated: 2019/04/10 12:30:27 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

void	*ft_memchr(const void *s, int c, size_t n);

int		main(void)
{
	const char	a[] = "Un matin, un lapin a tue un chasseur.";
	char		*res;

	printf("String = %s\n", a);
	res = (char *)ft_memchr(a, 'i', ft_strlen(a));
	printf("First occurrence is 'i' = %s\n", res);
	res = (char *)memchr(a, 'i', ft_strlen(a));
	printf("First occurrence is 'i'(real) = %s\n", res);
	res = (char *)ft_memchr(a, 'o', ft_strlen(a));
	printf("No occurrence found = %s\n", res);
	res = (char *)memchr(a, 'o', sizeof(a));
	printf("No occurrence found(real) = %s\n", res);
	return (0);
}
