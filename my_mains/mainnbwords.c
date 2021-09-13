/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainnbwords.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:48:05 by mbui              #+#    #+#             */
/*   Updated: 2019/11/21 14:54:10 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	nbwords(char const *s, char c); 

int main(int argc, char **argv)
{
	if (argc != 2)
		printf("Usage: ./a.out <string>\n");
	if (argc == 2)
		printf("nbwords = %d\n", nbwords(argv[1], ' '));
	return (0);
}
