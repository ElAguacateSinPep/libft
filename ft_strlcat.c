/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-o <amunoz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 14:06:05 by amunoz-o          #+#    #+#             */
/*   Updated: 2025/10/04 14:29:05 by amunoz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t max)
{
	size_t	lendst;
	size_t	j;

	lendst = 0;
	j = 0;
	while (lendst < max && dst[lendst] != '\0')
		lendst++;
	if (lendst == max)
		return (lendst + ft_strlen(src));
	while ((lendst + j + 1) < max && src[j] != '\0')
	{
		dst[lendst + j] = src[j];
		j++;
	}
	dst[lendst + j] = '\0';
	return (lendst + ft_strlen(src));
}
