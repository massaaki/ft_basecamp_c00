/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 16:51:18 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/04 16:59:38 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
**  gcc -Wall -Wextra -Werror ft_print_numbers.c -o output && ./output
*/

void	ft_print_numbers(void)
{
	int		number;
	char	num_as_char;

	number = 0;
	num_as_char = '0';
	while (number < 10)
	{
		write(1,&num_as_char, 1);
		number++;
		num_as_char = number + '0';
	}
}
