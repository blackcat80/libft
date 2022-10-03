/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 20:13:14 by csitja-b          #+#    #+#             */
/*   Updated: 2022/09/30 16:47:02 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{	
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if ((char)c == s[i])
			return ((char *)&s[i]);
		i--;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (0);
}
