/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpy_cam.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 12:17:28 by qle-guen          #+#    #+#             */
/*   Updated: 2017/05/12 17:00:11 by erodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cl_interface.h"
#include "obj_types.h"
#include "rt.h"

#define CPY(a) dest->a = src->a

void
	cpy_cam
	(t_cl_cam *dest
	, t_obj *src)
{
	ft_bzero(dest, sizeof(*dest));
	if (ft_strlcmp((void *)src->n, "skyday"))
		dest->skytype = CAM_SKYDAY;
	else if (ft_strlcmp((void *)src->n, "skynight"))
		dest->skytype = CAM_SKYNIGHT;
	else
		dest->skytype = CAM_OTHER;
	CPY(pos);
	CPY(rot);
	CPY(focal);
}
