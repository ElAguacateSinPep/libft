/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-o <amunoz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 21:12:43 by amunoz-o          #+#    #+#             */
/*   Updated: 2025/10/15 12:51:00 by amunoz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	d;

	d = (unsigned char)c;
	while (*s)
	{
		if (*s == d)
			return ((char *)s);
		s++;
	}
	if (d == '\0')
		return ((char *)s);
	return (NULL);
}
