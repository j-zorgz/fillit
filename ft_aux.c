/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcamhi <jcamhi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 17:54:28 by jcamhi            #+#    #+#             */
/*   Updated: 2015/12/01 23:34:31 by jcamhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_piece(t_piece *piece)
{
	int	i;
	int	j;

	ft_putstr("Nom : ");
	ft_putchar(piece->name);
	ft_putchar('\n');
	j = 0;
	while (j < 4)
	{
		i = 0;
		while(i < 4)
		{
			ft_putchar(piece->tab[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void	modiftab(char **tab, t_piece *piece, int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (piece->tab[i][j] == '#')
				tab[i + y][j + x] = piece->name;
			j++;
		}
		i++;
	}
}

void	print_tab(char **tab, size_t size)
{
	size_t i;
	size_t j;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			ft_putchar(tab[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void	print_list(t_piece **liste)
{
	int	i;

	i = 0;
	while (liste[i] != NULL)
	{
		print_piece(liste[i]);
		i++;
	}
}

int		ft_tablen(t_piece **liste)
{
	int i;

	i = 0;
	while (liste[i] != NULL)
		i++;
	return (i);
}
