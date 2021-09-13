/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainitoabase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 11:04:55 by mbui              #+#    #+#             */
/*   Updated: 2019/06/10 11:23:30 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa_base(int value, int base);

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
//		printf("size of value : %d\n", find_size(atoi(argv[1]), atoi(argv[2])));
		printf("itoa : %s\n", ft_itoa_base(atoi(argv[1]), atoi(argv[2])));
	}
	return (0);
}
