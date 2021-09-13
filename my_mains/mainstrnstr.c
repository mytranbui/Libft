/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 13:03:20 by mbui              #+#    #+#             */
/*   Updated: 2019/04/25 10:32:42 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *src);

char	*ft_strnstr(const char *haystack, const char *needle, size_t n);

int		main(void)
{
	printf("%s\n", ft_strnstr("yaourt aux fraises", "aux", 10));
	printf("%s\n", strnstr("yaourt aux fraises", "aux", 10));
	printf("%s\n", ft_strnstr("yaourt aux fraises", "aux", 5));
	printf("%s\n", strnstr("yaourt aux fraises", "aux", 5));
	return (0);
}
