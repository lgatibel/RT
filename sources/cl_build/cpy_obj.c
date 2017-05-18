/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpy_obj.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouchet <bsouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 09:31:07 by qle-guen          #+#    #+#             */
/*   Updated: 2017/05/13 12:26:02 by bsouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cl_interface.h"
#include "obj_types.h"
#include "rt.h"

#define CPY(a) dest->a = src->a

void
	cpy_obj
	(t_cl_obj *dest
	, t_obj *src)
{
	assert(src->type == 'O');
	ft_bzero(dest, sizeof(*dest));
	dest->type = src->forme;
	CPY(pos);
	CPY(rot);
	CPY(clr);
	CPY(opacity);
	CPY(width);
	CPY(height);
	CPY(radius);
	CPY(specular);
	CPY(reflex);
	CPY(refrac);
	CPY(shader);
}
