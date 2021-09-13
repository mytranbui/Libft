/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 10:44:08 by mbui              #+#    #+#             */
/*   Updated: 2019/04/10 12:22:26 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int		main(void)
{
	char a[] = "allergies suck";

	printf("%s\n", a);
	printf("first occurrence is 's' = %s\n", ft_strchr(a, 's'));
	printf("first occurrence is 's'(real) = %s\n", strchr(a, 's'));
	printf("no occurrence found = %s\n", ft_strchr(a, 'p'));
	printf("no occurrence found (real) = %s\n", strchr(a, 'p'));
	return (0);
}
