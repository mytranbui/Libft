/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintolower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 10:46:09 by mbui              #+#    #+#             */
/*   Updated: 2019/04/05 10:46:39 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c);

int	main(void)
{
	printf("%d\n", ft_tolower(75));
	printf("%d\n", tolower(75));
	return (0);
}
