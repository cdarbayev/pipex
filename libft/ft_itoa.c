/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdarbaye <cdarbaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:59:55 by cdarbaye          #+#    #+#             */
/*   Updated: 2024/06/05 20:40:16 by cdarbaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*ptr;
	unsigned int	len;
	unsigned int	nb;

	len = ft_intlen(n);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (n < 0)
	{
		ptr[0] = '-';
		nb = -n;
	}
	else
		nb = n;
	if (nb == 0)
		ptr[0] = '0';
	while (nb != 0)
	{
		ptr[len - 1] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (ptr);
}
