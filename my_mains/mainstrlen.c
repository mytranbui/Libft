/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 12:44:18 by mbui              #+#    #+#             */
/*   Updated: 2019/04/04 12:44:46 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

int		main(void)
{
	printf("%zu\n", ft_strlen("coco"));
	printf("%lu\n", strlen("coco"));
	return (0);
}
