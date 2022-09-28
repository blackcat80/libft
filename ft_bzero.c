/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:20:54 by csitja-b          #+#    #+#             */
/*   Updated: 2022/09/28 16:33:24 by csitja-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
int     main(void)
{	
    char    str[] = "Barcelona"; 

	printf("%s\n", str);
	ft_bzero(str, 2);
	printf("%s\n", str); 
    return (0); 

}*/
