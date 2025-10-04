/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-o <amunoz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 13:48:31 by amunoz-o          #+#    #+#             */
/*   Updated: 2025/10/04 14:04:38 by amunoz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (src[a] == '\0')
	{
		dst[b] = '\0';
		return (ft_strlen(src));
	}
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dstsize > 1 && src[a] != '\0')
	{
		dst[b] = src[a];
		dstsize--;
		a++;
		b++;
	}
	dst[b] = '\0';
	while (src[a] != '\0')
		a++;
	return (ft_strlen(src));
}
