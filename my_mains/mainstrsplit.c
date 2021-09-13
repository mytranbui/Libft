/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 11:52:12 by mbui              #+#    #+#             */
/*   Updated: 2019/05/20 15:03:34 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t			ft_strlen(const char *s);

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

void	*ft_memalloc(size_t size);

char	*ft_strnew(size_t size);

char			*ft_strsub(char const *s, unsigned int start, size_t len);

char			**ft_strsplit(char const *s, char c);

int				main(void)
{
	char **str = ft_strsplit("coucou les amis mon nom est dora", ' ');

	if (str)
	{
	printf("%s\n", str[0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);
	printf("%s\n", str[3]);
	printf("%s\n", str[4]);
	printf("%s\n", str[5]);
	printf("%s\n", str[6]);
	printf("%s\n", str[7]);
	free(str);
	}
	return (0);
}
