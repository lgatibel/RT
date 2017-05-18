/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:01:50 by qle-guen          #+#    #+#             */
/*   Updated: 2017/02/28 23:09:25 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "malloc.h"

char		*ft_strdup(const char *s)
{
	char		*dup;

	MALLOC_N(dup, 1 + ft_strlen(s));
	if (!dup)
		return (NULL);
	ft_strcpy(dup, s);
	return (dup);
}
