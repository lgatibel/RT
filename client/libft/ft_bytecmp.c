/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bytecmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/21 13:19:31 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/28 15:40:47 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int					ft_bytecmp
	(const void *p, unsigned char c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)p;
	i = 0;
	while (i < n)
	{
		if (s[i] != c)
			return (s[i] - c);
		i++;
	}
	return (0);
}
