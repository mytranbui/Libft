/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 09:26:24 by mbui              #+#    #+#             */
/*   Updated: 2019/04/04 09:27:50 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(const char *s1, const char *s2);

int	main(void)
{
	printf("%d\n", ft_strcmp("coco42", "cocopeanut"));
	printf("%d", strcmp("coco42", "cocopeanut"));
	return (0);
}
