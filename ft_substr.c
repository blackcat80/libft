/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:21:31 by csitja-b          #+#    #+#             */
/*   Updated: 2022/09/23 20:21:41 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len(char const *s, unsigned int start, size_t len)
{
	size_t	longitud;

	longitud = 0;
	if (ft_strlen(s) == 0)
		longitud = 0;
	else if (len > ft_strlen(s))
		longitud = ft_strlen(s) - start;
	else
		longitud = len;
	return (longitud);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;
	size_t			j;

	i = start;
	j = 0;
	len = ft_len(s, start, len);
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	str = malloc(sizeof(char ) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i] && j < len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

/*
int main()
{
	char* str;

	str = ft_substr("Hello, 42Barcelona!", 7, 2);
	printf("%s\n", str);

	return 0;
}
*/
