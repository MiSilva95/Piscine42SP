/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mida-sil <mida-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:56:04 by mida-sil          #+#    #+#             */
/*   Updated: 2024/08/01 16:43:05 by mida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int main()
{
    printf("%i", ft_recursive_factorial(6));
    return 0;
}*/
