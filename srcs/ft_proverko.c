/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_proverko.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 15:12:50 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/12/07 15:12:51 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_proverko(char *s_map, t_cordinate **s_fig, int fig_i, int map_i)
{
	int n;

	n = map_i;
	while (n < ft_strlen(s_map))
	{
		//printf("map[n]%c\n",s_map[n]);
		if (s_map[n] == '.' && s_map[n + s_fig[fig_i]->second] == '.' &&
			s_map[n + s_fig[fig_i]->third] == '.' &&
			s_map[n + s_fig[fig_i]->fourth] == '.')
		{
			//printf("tryue\n");
			return (n);
		}
		//printf("n = %i\n", n);
		n++;
	}
	//printf("2222%i\n", n);
	return (322);
}
