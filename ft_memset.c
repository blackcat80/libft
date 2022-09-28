/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:15:45 by csitja-b          #+#    #+#             */
/*   Updated: 2022/09/26 18:34:15 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)b;
	while (len--)
		*tmp++ = c;
	return (b);
}

/*
int     main(void) 

{ 
    char    str[] = "Barcelona"; 

	printf("%s\n", (char *)ft_memset(str, '$', 3)); 
	printf("%s\n", (char *)ft_memset(str, '%', 5)); 
    return (0); 

} */
