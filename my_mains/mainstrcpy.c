/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:00:02 by mbui              #+#    #+#             */
/*   Updated: 2019/04/03 14:02:14 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dst, const char *src);

int		main(void)
{
	char a[] = "coco";
	char b[] = "lolol";

	printf("%s", ft_strcpy(a, b));
	return (0);
}