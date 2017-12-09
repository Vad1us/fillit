/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   figures.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 13:32:35 by ekruhliu          #+#    #+#             */
/*   Updated: 2017/12/07 13:32:37 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static t_pack	varible(void)
{
	t_pack		pack;

	pack.n = 0;
	pack.h = 0;
	return (pack);
}

t_cordinate		**ft_figure_part_1(char **file, t_cordinate **s_a, int sizer)
{
	t_pack		pack;
	t_cordinate **cordinate;

	pack = varible();
	cordinate = s_a;
	//printf("TRUE SIZER %i\n",sizer );
	while (file[pack.n])
	{
		if (ft_ispalka(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_ispalka(&file[pack.n], sizer, pack.n);
		if (ft_is_h_palka(&file[pack.n], pack.n))
			cordinate[pack.h] = ft_is_h_palka(&file[pack.n], pack.n);
		if (ft_isfuck_sleva(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_isfuck_sleva(&file[pack.n], sizer, pack.n);
		if (ft_isfuck_snizu(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_isfuck_snizu(&file[pack.n], sizer, pack.n);
		if (ft_isfuck_sprava(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_isfuck_sprava(&file[pack.n], sizer, pack.n);
		if (ft_isfuck_sverhy(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_isfuck_sverhy(&file[pack.n], sizer, pack.n);
		if (ft_istopor_syda(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_istopor_syda(&file[pack.n], sizer, pack.n);
		pack.h++;
		pack.n++;
	}
	return (cordinate);
}

t_cordinate		**ft_figure_part_2(char **file, t_cordinate **s_a, int sizer)
{
	t_pack		pack;
	t_cordinate **cordinate;

	pack = varible();
	cordinate = s_a;
	while (file[pack.n])
	{
		if (ft_iskorobka(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_iskorobka(&file[pack.n], sizer, pack.n);
		if (ft_ismolnia_syda(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_ismolnia_syda(&file[pack.n], sizer, pack.n);
		if (ft_ismolnia_tyda(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_ismolnia_tyda(&file[pack.n], sizer, pack.n);
		if (ft_iskrovat_l(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_iskrovat_l(&file[pack.n], sizer, pack.n);
		if (ft_iskrovat_r(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_iskrovat_r(&file[pack.n], sizer, pack.n);
		if (ft_ispistolet_l(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_ispistolet_l(&file[pack.n], sizer, pack.n);
		if (ft_ispistolet_r(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_ispistolet_r(&file[pack.n], sizer, pack.n);
		pack.h++;
		pack.n++;
	}
	return (cordinate);
}

t_cordinate		**ft_figure_part_3(char **file, t_cordinate **s_a, int sizer)
{
	t_pack		pack;
	t_cordinate **cordinate;

	pack = varible();
	cordinate = s_a;
	while (file[pack.n])
	{
		if (ft_iszmeika_syda(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_iszmeika_syda(&file[pack.n], sizer, pack.n);
		if (ft_iszmeika_tyda(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_iszmeika_tyda(&file[pack.n], sizer, pack.n);
		if (ft_styl_syda(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_styl_syda(&file[pack.n], sizer, pack.n);
		if (ft_styl_tyda(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_styl_tyda(&file[pack.n], sizer, pack.n);
		if (ft_istopor_tyda(&file[pack.n], sizer, pack.n))
			cordinate[pack.h] = ft_istopor_tyda(&file[pack.n], sizer, pack.n);
		pack.h++;
		pack.n++;
	}
	return (cordinate);
}
