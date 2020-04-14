/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 17:05:03 by aelphias          #+#    #+#             */
/*   Updated: 2020/04/14 21:32:51 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void    ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *tmp;
    
    tmp = ft_create_elem(data);
    tmp->next = *begin_list;
    *begin_list = tmp;
}
