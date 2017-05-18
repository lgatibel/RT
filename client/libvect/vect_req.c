/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_req.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/25 18:40:10 by qle-guen          #+#    #+#             */
/*   Updated: 2017/04/03 12:11:38 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"
#include "../libft/malloc.h"

int
	vect_req
	(t_vect *v
	, size_t size)
{
	size_t	n;

	if (!size)
		return (0);
	if (!v->total)
	{
		MALLOC(v->data, size);
		v->total = size;
		v->used = 0;
	}
	if (v->total >= v->used + size)
		return (1);
	if (v->total == 1)
		v->total++;
	n = 1;
	while (v->total * n * GROWTH_FACTOR < v->used + size)
		n++;
	return (vect_grow(v, size));
}
