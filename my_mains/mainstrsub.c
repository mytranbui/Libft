/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrsub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 09:50:23 by mbui              #+#    #+#             */
/*   Updated: 2019/09/28 09:53:56 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len);

int		main(void)
{
	char str[] = "salut les cocos";
	printf("before = %s\n", str);
	printf("after = %s\n", ft_strsub(str, 5, 7));
	return (0);
}
