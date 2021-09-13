/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 08:40:24 by mbui              #+#    #+#             */
/*   Updated: 2019/04/05 08:41:10 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2);

int	ft_strequ(char const *s1, char const *s2);

int	main(void)
{
	printf("%d\n", ft_strequ("coco", "coco"));
	printf("%d\n", ft_strequ("coco", "cocopop"));
	printf("%d\n", ft_strequ("coco", "yaourt"));
	printf("%d\n", ft_strequ("coco", "coyaourt"));
	return (0);
}
