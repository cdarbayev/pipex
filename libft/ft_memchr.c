/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdarbaye <cdarbaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:02:15 by cdarbaye          #+#    #+#             */
/*   Updated: 2024/06/05 15:25:43 by cdarbaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	character;

	i = 0;
	ptr = (unsigned char *)s;
	character = (unsigned char)c;
	while (i < n)
	{
		if (*ptr == character)
		{
			return (ptr);
		}
		ptr++;
		i++;
	}
	return (0);
}
