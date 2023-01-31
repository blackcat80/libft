/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 21:10:31 by csitja-b          #+#    #+#             */
/*   Updated: 2022/10/25 19:39:42 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*pt_dst;
	char	*pt_src;

	if (!src && !dst)
		return (NULL);
	i = -1;
	pt_dst = (char *)dst;
	pt_src = (char *)src;
	if (pt_src > pt_dst)
	{
		while (++i < len)
			pt_dst[i] = pt_src[i];
	}	
	else
	{
		while (++i != len)
			pt_dst[len - i - 1] = pt_src[len - i - 1];
	}
	return (dst);
}
