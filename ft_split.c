/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:29:21 by csitja-b          #+#    #+#             */
/*   Updated: 2022/09/28 21:06:48 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	**malloc_error(char **split, int j)
{
	while (j >= 0)
	{
		free(split[j]);
		--j;
	}
	free(split);
	return (NULL);
}

static char	**makesplit(char **split, int j)
{
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**split;
	int		start;

	start = 0;
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i > 0 && s[i] != c && s[i - 1] == c)
			start = i;
		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
		{
			split[j++] = ft_substr(s, start, i - start + 1);
			if (split[j - 1] == NULL)
				return (malloc_error(split, j - 2));
		}
		i++;
	}
	split[j] = NULL;
	return (makesplit(split, j));
}
/*
int main(void)
{
	char **result;
	result = ft_split("hello!", ' ');
	return(0);
}*/
