/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:32:33 by anikoyan          #+#    #+#             */
/*   Updated: 2025/03/17 17:37:30 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

bool	ft_isprime(int number)
{
	size_t	i;

	if (number <= 1 || number % 2 == 0 || number % 3 == 0)
		return (false);
	else if (number <= 3)
		return (true);
	while ((float)i < ft_sqrt(number))
	{
		if (number % i == 0 && number % (number + 2) == 0)
			return (false);
		i += 6;
	}
	return (true);
}
