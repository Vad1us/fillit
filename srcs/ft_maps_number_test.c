/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maps_number_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:28:37 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/12/08 13:28:38 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int		ft_maps_number_test(char **file)
{
	int			maps;
	int			result;

	maps = 0;
	result = 1;
	while (file[maps])
		maps++;
	if (maps > 25)
		result = 0;
	return (result);
}
