/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_firstp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mida-sil <mida-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:10:06 by mida-sil          #+#    #+#             */
/*   Updated: 2024/07/31 14:16:16 by mida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{    
    if (ac > 1)
    {
        while (*av[1])
            write (1, av[1]++, 1);
    }
    write (1, "\n", 1);
    return 0;
}