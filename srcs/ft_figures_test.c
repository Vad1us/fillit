/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figures_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:31:07 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/12/08 13:31:08 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static	t_f	variable(void)
{
	t_f		f;

	f.n = 0;
	f.result = 0;
	f.figure = 0;
	f.res = 0;
	return (f);
}

int			ft_figures_test(char **file)
{
	t_f		f;

	f = variable();
	while (file[f.n])
	{
		if (ft_ispalka(file, 0, 0) || ft_is_h_palka(file, 0)
		|| ft_iskorobka(file, 0, 0) || ft_isfuck_sleva(file, 0, 0)
		|| ft_isfuck_snizu(file, 0, 0) || ft_isfuck_sprava(file, 0, 0)
		|| ft_isfuck_sverhy(file, 0, 0) || ft_iskrovat_l(file, 0, 0)
		|| ft_iskrovat_r(file, 0, 0) || ft_ismolnia_syda(file, 0, 0)
		|| ft_ismolnia_tyda(file, 0, 0) || ft_ispistolet_l(file, 0, 0)
		|| ft_ispistolet_r(file, 0, 0) || ft_istopor_syda(file, 0, 0)
		|| ft_istopor_tyda(file, 0, 0) || ft_iszmeika_syda(file, 0, 0)
		|| ft_iszmeika_tyda(file, 0, 0) || ft_styl_syda(file, 0, 0)
		|| ft_styl_tyda(file, 0, 0))
			f.figure++;
		if (f.figure == 1)
		{
			f.result++;
			f.figure = 0;
		}
		f.n++;
	}
	(f.result == f.n ? f.res = 1 : 0);
	return (f.res);
}
