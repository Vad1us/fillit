/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_demon_soul.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 16:15:25 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/29 16:15:26 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static	t_soul	variable(void)
{
	t_soul	soul;

	soul.z = 0;
	soul.x = 0;
	soul.k = 0;
	soul.m = 0;
	return (soul);
}

void			ft_demon_soul(t_cordinate **cordinate, char **file, int sizer)
{
	t_soul	soul;

	soul = variable();
	while (soul.k <= ft_map_size(file) + 1)
	{
		soul.map = ft_create_map(file, soul.m);
		//soul.done = ft_demon_brain(soul.map, cordinate, soul.z, soul.x);
		if (ft_demon_brain(soul.map, cordinate, soul.z, soul.x) == 1)
			break ;
		soul.m = soul.m + 1;
		sizer = sizer + 1;
		cordinate = ft_struct_split(file, sizer);
		soul.k++;
	}
	ft_print_map(soul.map);
}
