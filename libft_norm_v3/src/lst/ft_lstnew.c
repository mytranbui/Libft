/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbui <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 12:11:34 by mbui              #+#    #+#             */
/*   Updated: 2021/04/02 13:41:04 by mbui             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	void	*rcontent;
	size_t	rsize;

	rcontent = ft_memalloc(content_size);
	rsize = content_size;
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	if (content)
	{
		ft_memcpy(rcontent, content, content_size);
		new->content = rcontent;
		new->content_size = rsize;
	}
	else
	{
		new->content = NULL;
		new->content_size = 0;
	}
	new->next = NULL;
	return (new);
}
