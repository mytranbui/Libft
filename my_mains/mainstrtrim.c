/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrtrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 11:47:06 by mbui              #+#    #+#             */
/*   Updated: 2019/09/28 09:43:23 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s);

char	*ft_strtrim(char const *s);

int		main(void)
{
	char str[] = " \n	  No spaces allowed at the beginning nor at the end	\n   ";
	printf("before = %s\n", str);
	printf("after = %s\n", ft_strtrim(str));
	printf("%s\n", ft_strtrim("     "));
	return (0);
}
