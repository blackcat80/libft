/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:05:42 by csitja-b          #+#    #+#             */
/*   Updated: 2022/09/23 20:14:07 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	l_trim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	size_t			count;

	i = 0;
	count = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				count++;
				break ;
			}
			j++;
		}
		if (!set[j])
			return (count);
		i++;
	}
	return (count);
}

static size_t	r_trim(char const *s1, char const *set)
{
	size_t			i;
	unsigned int	j;
	size_t			count;

	i = ft_strlen(s1) - 1;
	count = 0;
	while (s1[i] && i >= 0)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				count++;
				break ;
			}
			j++;
		}
		if (!set[j])
			return (count);
		i--;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s;
	size_t	l;
	size_t	r;
	size_t	i;

	if (!ft_strlen(s1))
		return (ft_strdup(""));
	l = l_trim(s1, set);
	r = r_trim(s1, set);
	if (l == ft_strlen(s1))
		r = 0;
	new_s = (char *)malloc(ft_strlen(s1) - l - r + 1);
	if (!new_s)
		return (NULL);
	i = 0;
	while ((l + i) <= (ft_strlen(s1) - r - 1))
	{
		new_s[i] = s1[l + i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
