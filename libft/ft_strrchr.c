/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdarbaye <cdarbaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:03:10 by cdarbaye          #+#    #+#             */
/*   Updated: 2024/06/05 19:13:56 by cdarbaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		len;

	len = ft_strlen(s);
	ptr = (char *)s + len - 1;
	if (((char)c) == '\0')
	{
		ptr++;
		return (ptr);
	}
	while (len != 0)
	{
		if (*ptr == (char)c)
		{
			return (ptr);
		}
		len--;
		ptr--;
	}
	return (0);
}
