		/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_window.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 15:55:55 by kboucaud          #+#    #+#             */
/*   Updated: 2017/03/22 16:35:43 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

double		smll(int x)
{
	return (x * 0.2);
}

double		x_iso(double x, double y, t_fdf *fdf)
{
	return ((x - y + 8.5) * 40);
}

double		y_iso_up(double x, double y, t_fdf *fdf)
{
	return ((x + y + 3) * 20);
}

double		y_iso(double x, double y, t_fdf *fdf)
{
	return ((x + y + 4) * 20);
}