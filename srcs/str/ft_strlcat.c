/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 15:28:02 by nbouchin          #+#    #+#             */
/*   Updated: 2016/11/09 15:28:22 by nbouchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	end;

	i = 0;
	while (dst[i] && i < size)
		i++;
	end = i;
	while (src[i - end] && i < size - 1)
	{
		dst[i] = src[i - end];
		i++;
	}
	if (end < size)
		dst[i] = '\0';
	return (end + ft_strlen(src));
}
