/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 09:08:40 by mbui              #+#    #+#             */
/*   Updated: 2019/04/05 13:01:12 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char    *ft_strcat(char *s1, const char *s2);

int    main(void)
{
	char a[] = "bonjour";
	char b[] = " les amis";
	char c[] = "bonjsours";
	char d[] = " les samiss";
	printf("%s\n", ft_strcat(a,b));
	printf("%s", strcat(c,d));
	return (0);
}
