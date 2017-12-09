/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zapolnyator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 16:17:32 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/11/29 16:17:33 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_zapolnyator(t_cordinate **s_fig, char *s_map, int map_i, int fig_i)
{
	int n;

	n = ft_proverko(s_map, s_fig, fig_i, map_i);
	if (n == 322)
		return (0);
	//printf("nn %i\n",n );
	s_map[n] = s_fig[fig_i]->bykovka;
	//printf("bykva %c\n", s_fig[fig_i]->bykovka);
	s_map[n + s_fig[fig_i]->second] = s_fig[fig_i]->bykovka;
	//printf("2nd %i\n", s_fig[fig_i]->second);
	s_map[n + s_fig[fig_i]->third] = s_fig[fig_i]->bykovka;
	//printf("3rd %i\n",s_fig[fig_i]->third );
	s_map[n + s_fig[fig_i]->fourth] = s_fig[fig_i]->bykovka;
	//printf("4th %i\n", s_fig[fig_i]->fourth);
	return (1);
}
