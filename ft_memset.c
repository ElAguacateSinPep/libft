/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-o <amunoz-o@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:12:44 by amunoz-o          #+#    #+#             */
/*   Updated: 2025/10/03 15:31:47 by amunoz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*bigc;

	bigc = b;
	i = 0;
	while (len > 0)
	{
		bigc[i] = (char)c;
		len--;
		i++;
	}
	return (bigc);
}
