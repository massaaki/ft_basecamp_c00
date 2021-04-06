/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 19:28:29 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/06 11:47:46 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_combination(int hundred, int ten, int unity);

void	ft_print_comb(void)
{
	int hundred;
	int ten;
	int unity;

	hundred = 0;
	while (hundred <= 9)
	{
		ten = hundred + 1;
		while (ten <= 9)
		{
			unity = ten + 1;
			while (unity <= 9)
			{
				print_combination(hundred, ten, unity);
				unity++;
			}
			ten++;
		}
		hundred++;
	}
}

void	print_combination(int hundred, int ten, int unity)
{
	char char_hundred;
	char char_ten;
	char char_unity;

	char_hundred = hundred + '0';
	char_ten = ten + '0';
	char_unity = unity + '0';
	write(1, &char_hundred, 1);
	write(1, &char_ten, 1);
	write(1, &char_unity, 1);
	write(1, ",", 1);
	write(1, " ", 1);
}
