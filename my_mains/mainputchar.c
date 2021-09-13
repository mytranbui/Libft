/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainputchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:27:02 by mbui              #+#    #+#             */
/*   Updated: 2019/11/11 13:55:42 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,(const void*)&c,1);
}

int		main(void)
{
	char happy[] = { 0xe2, 0x98, 0xba };  /* U+263A */

	write(1, happy, 3);
	ft_putchar(happy);
	return (0);
}
