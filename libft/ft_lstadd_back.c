/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdarbaye <cdarbaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:52:28 by cdarbaye          #+#    #+#             */
/*   Updated: 2024/06/05 22:25:55 by cdarbaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*c;

	if (*lst == NULL)
		*lst = new;
	else
	{
		c = *lst;
		c = ft_lstlast(*lst);
		c->next = new;
	}
}
