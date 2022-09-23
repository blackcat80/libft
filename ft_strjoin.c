/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:03:00 by csitja-b          #+#    #+#             */
/*   Updated: 2022/09/23 20:11:27 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new_s;
	unsigned int	i;
	unsigned int	j;

	new_s = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!new_s)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new_s[i] = (char)s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new_s[i + j] = (char)s2[j];
		j++;
	}
	new_s[i + j] = '\0';
	return (new_s);
}
