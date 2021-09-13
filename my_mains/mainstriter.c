/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstriter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 09:53:40 by mbui              #+#    #+#             */
/*   Updated: 2019/04/11 09:54:56 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *s);

void	ft_putendl(char *s);

void	ft_striter(char *s, void (*f)(char *));

int main(void)
{
	char s[] = "bonjour";
	ft_striter(s, &ft_putendl);
	return(0);
}
