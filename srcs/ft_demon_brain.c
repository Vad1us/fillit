/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_demon_brain.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 18:50:51 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/12/08 18:50:52 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"
#include <stdio.h>

static	int	ft_count_size(t_cordinate **cordinate)
{
	int n;

	n = 0;
	while (cordinate[n])
		n++;
	return (n);
}

static	int	ft_cleaner(char *map, t_cordinate **cordinate, int fig_i)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (map[i])
	{
		if (map[i] == cordinate[fig_i]->bykovka)
		{
			n = i;
			break ;
		}
		i++;
	}
	n++;
	i = 0;
	while (map[i])
	{
		if (map[i] == cordinate[fig_i]->bykovka)
			map[i] = '.';
		i++;
	}
	return (n);
}

int			ft_demon_brain(char *map, t_cordinate **cordinate,
	int map_i2, int fig_i)
{
	int i;
	i = 0;
	int	count_figures;
	int	map_i;

	map_i = map_i2;
	count_figures = ft_count_size(cordinate);
	while (ft_zapolnyator(cordinate, map, map_i, fig_i))
	{
		//printf("qq\n");
		fig_i++;
		map_i = 0;
		if (fig_i == count_figures)
			return (1);
	}
	//printf("2222\n");
	if (fig_i == 0)
		return (0);
	fig_i--;
	// while (map[i])
	// {
	// 	printf("index %i symb %c\n",i,map[i] );
	// 	i++;
	// }
	//printf("map do\n%s\n",map );
	map_i2 = ft_cleaner(map, cordinate, fig_i);
	//printf("map posle\n%s\n",map );
	//map_i = map_i2;
	if (ft_demon_brain(map, cordinate, map_i2, fig_i))
		return (1);
	return (0);
}
