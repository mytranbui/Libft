/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainatoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 10:08:27 by mbui              #+#    #+#             */
/*   Updated: 2019/06/18 11:30:26 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str);

int	main(void)
{
	printf("%d\n", ft_atoi(" +773    8f7rdf"));
	printf("%d\n", atoi(" +773    8f7rdf"));
	printf("%d\n", ft_atoi("++846"));
	printf("%d\n", atoi("++846"));
	printf("%d\n", ft_atoi("+-1"));
	printf("%d\n", atoi("+-1"));
	printf("%d\n", ft_atoi("--1"));
	printf("%d\n", atoi("--1"));
	printf("%d\n", ft_atoi("-+1"));
	printf("%d\n", atoi("-+1"));
	printf("%d\n", ft_atoi("-17451h58145"));
	printf("%d\n", atoi("-17451h58145"));
	printf("%d\n", ft_atoi("\n\v\t\r\f -123"));
	printf("%d\n", atoi("\n\v\t\r\f -123"));
	printf("%d\n", ft_atoi("12-3"));
	printf("%d\n", atoi("12-3"));
	printf("%d\n", ft_atoi("-+123"));
	printf("%d\n", atoi("-+123"));
	printf("%d\n", ft_atoi(" - 123"));
	printf("%d\n", atoi(" - 123"));
	printf("%d\n", ft_atoi("\t -123"));
	printf("%d\n", atoi("\t -123"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", atoi("-2147483648"));
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", atoi("2147483647"));
	printf("%d\n", ft_atoi(""));
	printf("%d\n", atoi(""));
	return (0);
}
