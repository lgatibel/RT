/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/17 11:05:17 by qle-guen          #+#    #+#             */
/*   Updated: 2016/11/09 19:14:10 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "malloc.h"

void		*ft_memdup(void *p, size_t n)
{
	void	*ret;

	MALLOC(ret, n);
	ft_memcpy(ret, p, n);
	return (ret);
}
