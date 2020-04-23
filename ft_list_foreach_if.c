/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 12:53:03 by aelphias          #+#    #+#             */
/*   Updated: 2020/04/23 20:45:44 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
	t_list *tmp;
	
	tmp = begin_list;
	while (tmp)
	{
		if ((*cmp)(tmp->data, data_ref))
			(*f)(tmp->data);
		tmp = tmp->next;
	}
}
