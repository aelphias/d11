/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 14:20:45 by io                #+#    #+#             */
/*   Updated: 2020/04/12 19:06:34 by aelphias         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

 #include "ft_list.h"

void	print_list(t_list *head)
{
	while (head != NULL)
	{
		printf("%d - ",(int)head->data);
		head = head->next;
	}	
	printf("\n");
}


/* void	print_list_str(t_list *head)
{
	while (head != NULL)
	{
		printf("%s - ", (char *)head->data);
		head = head->next;
	}	
	if (head == NULL)
		printf("head == NULL\n");
} */

 void	insert_at_head(t_list **head, t_list *node_to_insert)
{
	node_to_insert->next = *head;
	*head = node_to_insert;
}
 

 void	f(void *data)
 {
	int tmp;

	tmp = (int)data;
	tmp++;
	data = (void *)tmp;
 }

 void	data_changer(t_list *head)
 {
	
	 f(head->data) ;
 }

int	main(void)
{
	t_list	*head;
	int		i;
	int tmp;
	
	void (*foo)(void*);
	tmp = 0;
	foo = &f;
	i = 5;
	head = NULL;
	while (i < 8)
		insert_at_head(&head, ft_create_elem((void *)i++));
	printf("before:\n");
	print_list(head);
	//ft_list_foreach(head, foo);
	data_changer(head);
	printf("after:\n");
	//printf("%d\n",(int)head->data);
	print_list(head);
 	return (0);
}
