/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 21:48:07 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/06 12:03:24 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_combination(int ten, int unity);
void	get_dec_unity_and_print(int number);

void		ft_print_comb2(void)
{
	int		first_number;
	int		second_number;

	first_number = 0;
	while (first_number <= 99)
	{
		second_number = first_number + 1;
		while (second_number <= 99)
		{
			get_dec_unity_and_print(first_number);
			write(1, " ", 1);
			get_dec_unity_and_print(second_number);
			if (first_number != 98)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			second_number++;
		}
		first_number++;
	}
}

void		get_dec_unity_and_print(int number)
{
	char	ten;
	char	unity;

	ten = (number / 10);
	unity = (number % 10);
	print_combination(ten, unity);
}

void		print_combination(int ten, int unity)
{
	char	char_ten;
	char	char_unity;

	char_ten = ten + '0';
	char_unity = unity + '0';
	write(1, &char_ten, 1);
	write(1, &char_unity, 1);
}
