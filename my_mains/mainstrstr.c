/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 11:17:26 by mbui              #+#    #+#             */
/*   Updated: 2019/04/25 10:31:06 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *src);

char	*ft_strstr(const char *haystack, const char *needle);

int		main(void)
{
	printf("%s\n", ft_strstr("yaourt aux fraises", "p"));
	printf("%s\n", strstr("coconutmilk choco", "p"));
	printf("%s\n", ft_strstr("yaourt aux fraises", "aux"));
	printf("%s\n", strstr("coconutmilk choco", "milk"));
	return (0);
}
