/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrmapi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:54:58 by mbui              #+#    #+#             */
/*   Updated: 2019/05/20 11:03:36 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "../libft/libft.h"

size_t	ft_strlen(const char *s);

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

void	*ft_memalloc(size_t size);

char	*ft_strnew(size_t size);

char ft_random(unsigned int i,char c)
{
	if (i == 0)
		write(1, &c, 1);
	else
		write(1, &c, 1);
	return (c);
}

char	*ft_strmap(char const *s, char (*f)(char));

int main(void)
{
	char s[] = "bonjour";
	ft_strmapi(s, &ft_random);
	return(0);
}
