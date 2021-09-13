/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrncat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 12:11:33 by mbui              #+#    #+#             */
/*   Updated: 2019/04/11 12:12:26 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n);

int    main(void)
{
	char a[] = "bonjour";
	const char b[] = " les amis";

	printf("%s\n", ft_strncat(a, b, 10));
	printf("%s\n", strncat(a, b, 10));
	return (0);
}

//sigabort but function is OK
