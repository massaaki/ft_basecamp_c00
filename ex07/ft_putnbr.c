/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 22:22:52 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/06 11:50:56 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void				ft_putnbr(int nb)
{
	int				ref;
	int				left_zero;
	char			current_unity;
	unsigned int	number_to_convert;

	number_to_convert = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		number_to_convert = nb * -1;
	}
	left_zero = 1;
	ref = 1000000000;
	while (ref > 0)
	{
		current_unity = ((number_to_convert / ref) % 10) + '0';
		if (current_unity != '0')
			left_zero = 0;
		if (!left_zero)
			write(1, &current_unity, 1);
		ref = ref / 10;
	}
}
