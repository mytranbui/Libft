/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrnequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 08:49:08 by mbui              #+#    #+#             */
/*   Updated: 2019/04/05 08:50:20 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	ft_strnequ(char const *s1, char const *s2, size_t n);

int	main(void)
{
	printf("%d\n", ft_strnequ("coco", "cocopop", 4));
	printf("%d\n", ft_strnequ("X", "cocopop", 4));
	printf("%d\n", ft_strnequ("coco", "cocop", 5));
	return (0);
}
