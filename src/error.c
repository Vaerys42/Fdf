/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboucaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 16:44:14 by kboucaud          #+#    #+#             */
/*   Updated: 2017/09/27 16:44:17 by kboucaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void		ft_error(void)
{
	write(1, "error\n", 6);
	exit(1);
}

void		ft_error_file(void)
{
	ft_putstr("File error\n");
	exit(1);
}
