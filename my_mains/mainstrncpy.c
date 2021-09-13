/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrncpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:13:18 by mbui              #+#    #+#             */
/*   Updated: 2019/04/03 14:14:00 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len);

int		main(void)
{
	char a[] = "bonjour";
	char b[] = "aurevoir";
	char c[] = "bonjour";
	char d[] = "aurevoir";

	printf("%s", ft_strncpy(a, b, 4));
	printf("%s", strncpy(c, d, 4));
	return (0);
}
