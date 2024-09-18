/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdarbaye <cdarbaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 22:13:19 by cdarbaye          #+#    #+#             */
/*   Updated: 2024/06/05 22:26:15 by cdarbaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*c;

	c = lst;
	if (lst == NULL || (*f) == NULL)
		return ;
	while (c != NULL)
	{
		(*f)(c->content);
		c = c->next;
	}
}
