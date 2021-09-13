/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainbzero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 10:11:55 by mbui              #+#    #+#             */
/*   Updated: 2019/04/25 09:05:30 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n);

int		main(void)
{
	char a[] = "hello bitches !";
	char b[] = "hello bitches !";
	char c[] = "hello bitches !";
	char d[] = "hello bitches !";

	ft_bzero(a, 0);
	printf("%s\n", a);
	bzero(a, 0);
	printf("%s\n", a);
	ft_bzero(b, 15);
	printf("%s\n", b);
	bzero(c, 1 * sizeof(char));
	printf("%s\n", c);
	memset(d, 0, 4 *sizeof(char));
	printf("%s\n", d);
	return (0);
}
