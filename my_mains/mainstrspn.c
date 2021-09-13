/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:45:17 by mbui              #+#    #+#             */
/*   Updated: 2019/09/25 16:23:54 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c);

size_t	ft_strspn(const char *s1, const char *s2);

int		main(void)
{
	char *s1 = "abcd";
	char *s2 = "abcg";
	char *s1a = "0123456789";
	char *s2a = "9876543210";
	char *s1b = "thomxaslala";
	char *s2b = "mathieulolo";
	char *s1c = "thomxaslala";
	char *s2c = "wqzzzp";

	printf("mine: %zu\n", ft_strspn(s1, s2));
	printf("libc: %zu\n", strspn(s1, s2));
	printf("mine: %zu\n", ft_strspn(s1a, s2a));
	printf("libc: %zu\n", strspn(s1a, s2a));
	printf("mine: %zu\n", ft_strspn(s1b, s2b));
	printf("libc: %zu\n", strspn(s1b, s2b));
	printf("mine: %zu\n", ft_strspn(s1c, s2c));
	printf("libc: %zu\n", strspn(s1c, s2c));
	return(0);
}

/*number of identical letters between the 2 strings if you can't find a letter from s1 in s2, then stop counting*/
