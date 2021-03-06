/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controllers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubugra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/09 11:57:16 by adubugra          #+#    #+#             */
/*   Updated: 2018/03/24 20:59:01 by adubugra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

int		on_key(int key, t_pointers *param)
{
	int			i;
	t_pointers	*pt;

	pt = param;
	i = key;
	if (key == 53)
	{
		mlx_destroy_window(pt->mlx_ptr, pt->win_ptr);
		pt->mlx_ptr = 0;
		exit(0);
	}
	return (1);
}
