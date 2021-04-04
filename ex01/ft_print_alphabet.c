/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 16:25:55 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/04 16:44:57 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;
	int		letter_remaning;

	letter = 'a';
	letter_remaning = 26;
	while (letter_remaning--)
	{
		write(1, &letter, 1);
		letter += 1;
	}
}
