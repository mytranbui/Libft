/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainfreetab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 15:38:13 by mbui              #+#    #+#             */
/*   Updated: 2019/11/21 16:03:25 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

void	*ft_memalloc(size_t size);

char	*ft_strnew(size_t size);

int		nbwords(char const *s, char c);

char	*ft_strsub(char const *s, unsigned int start, size_t len);

char	**ft_strsplit(char const *s, char c);

char	**free_tab(char **tab, int i);

int main(void)
{
	int i;
	char **tab = ft_strsplit("Je suis Winnie the Pooh et j'adore le miel.",' ');

	i = 0;
	while (tab[i])
	{
		printf("tab[%d] = %s\n", i , tab[i]);
		i++;
	}
	free_tab(tab, 9);
	i = 0;
	while (tab[i])
	{
		if (tab[i] != NULL)
			printf("tab[%d] is not freed\n", i);
		if (tab != NULL)
			printf("tab is not freed(IN WHILE)\n");
		i++;
	}
	if (tab != NULL)
		printf("tab is not freed(OUT WHILE)\n");
	return (0);
}
