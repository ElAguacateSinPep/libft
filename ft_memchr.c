/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-o <amunoz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 22:35:54 by amunoz-o          #+#    #+#             */
/*   Updated: 2025/10/04 22:36:12 by amunoz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		character;
	const unsigned char	*sentence;

	character = c;
	sentence = s;
	i = 0;
	while (i < n)
	{
		if (sentence[i] == character)
			return ((void *)&sentence[i]);
		i++;
	}
	return (NULL);
}
