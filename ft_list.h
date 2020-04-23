/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 20:33:03 by io                #+#    #+#             */
/*   Updated: 2020/04/21 17:12:01 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef D11_FT_LIST_H
#define D11_FT_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

int		ft_list_size(t_list *begin_list);
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_list_clear(t_list **begin_list);
t_list	*ft_create_elem(void *data);
t_list	*ft_list_last(t_list *begin_list);
t_list	*ft_list_push_params(int ac, char **av);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);
void	print_list_str(t_list *head);
void	print_list(t_list *head);
void	ft_list_reverse(t_list **begin_list);
void	ft_list_foreach(t_list *begin_list, void (*f)(void *));
void	insert_at_head(t_list **head, t_list *node_to_insert);
void	f(void *data);
void	print_data(void *data);
void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)());
#endif //D11_FT_LIST_H
