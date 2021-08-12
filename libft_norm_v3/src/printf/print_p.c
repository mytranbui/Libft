/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 14:22:04 by mbui              #+#    #+#             */
/*   Updated: 2021/04/02 16:48:49 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
** %p: undefined behavior with +, 0, ' ', # and precision
** line 102: +2 is the len of the prefix "0x"
*/

static void	print_p_if(char *s, t_print *p, int pres)
{
	if (*s == '0' && pres == 0)
		p->width++;
}

static void	print_p2(int len, int bigger_len, t_print *p)
{
	while (p->width-- - bigger_len > 0 && (!p->flg.zero
			|| (p->pres == 0 && p->flg.zero)))
	{
		ft_putchar(' ');
		p->ret++;
	}
	putprefix(0, p);
	while (p->width-- - bigger_len > -1 && p->flg.zero && p->pres == -1)
	{
		ft_putchar('0');
		p->ret++;
	}
	padding_zero(len, p);
}

void	print_p(va_list ap, t_print *p)
{
	char	*s;
	int		len;
	int		bigger_len;
	int		tmp_pres;

	s = ft_itoa_base(va_arg(ap, long long), 16, 'x');
	if (!s)
		free_print(&p, 2);
	len = ft_strlen(s);
	tmp_pres = p->pres;
	bigger_len = ft_max(len, p->pres) + 2;
	print_p_if(s, p, tmp_pres);
	if (!p->flg.minus)
	{
		print_p2(len, bigger_len, p);
		print_result(s, tmp_pres, p);
	}
	else
	{
		putprefix(0, p);
		padding_zero(len, p);
		print_result(s, tmp_pres, p);
		padding_space(bigger_len, p);
	}
	ft_strdel(&s);
}
