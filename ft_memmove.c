/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:35:27 by csitja-b          #+#    #+#             */
/*   Updated: 2022/09/16 22:46:12 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned const char *s;
	int	i;

	i = 0;
	d = dst;
	s = src;
	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return (dst);
	if (dst < src)
	{
		while (i < len)
			d[i++] = s[i];
	}
	else
	{
		while (len--)
			d[len - 1] = s[len - 1];
	}
	return (dst);
}
