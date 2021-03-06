/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: io <io@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 20:25:01 by io                #+#    #+#             */
/*   Updated: 2020/03/12 20:53:05 by io               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list  *ft_create_elem(void *data)
{
    t_list *tmp;
    
    tmp = (t_list *)malloc(sizeof(t_list));
    tmp->data = data;
    tmp->next = NULL;
    return (tmp);
}