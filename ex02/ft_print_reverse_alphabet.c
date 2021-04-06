/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 16:46:04 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/06 11:55:07 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
**  gcc -Wall -Wextra -Werror ft_print_reverse_alphabet.c -o output && ./output
*/

void	ft_print_reverse_alphabet(void)
{
	int letter;
	int letter_remaning;

	letter = 'z';
	letter_remaning = 26;
	while (letter_remaning--)
	{
		write(1, &letter, 1);
		letter--;
	}
}
