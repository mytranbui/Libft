/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmemset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 09:34:19 by mbui              #+#    #+#             */
/*   Updated: 2019/04/25 08:57:33 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);

int		main(void)
{
	char a[] = "Have you met TED? he's single.";

	printf("%s\n", a);
	memset(a + 9, 'k', 4 * sizeof(char));
	printf("%s\n", a);
	ft_memset(a + 9, 'k', 4 * sizeof(char));
	printf("%s\n", a);
	memset(a, 'k', 4 * sizeof(char));
	printf("%s\n", a);
	ft_memset(a, 'k', 4 * sizeof(char));
	printf("%s\n", a);
	memset(a, 'k', sizeof(a));
	printf("%s\n", a);
	ft_memset(a, 'k', sizeof(a));
	printf("%s\n", a);


	return (0);
}
