/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstriteri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 10:27:10 by mbui              #+#    #+#             */
/*   Updated: 2019/04/11 10:27:33 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_fd(char *s, unsigned int fd);

void	ft_putendl_fd(char *s, unsigned int fd);

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

int	main(void)
{
	char a[] = "Bowling";
	ft_striteri(a, &ft_putendl_fd);
	return (0);
}
