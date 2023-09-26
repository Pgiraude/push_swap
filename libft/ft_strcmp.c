/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiraude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:56:04 by pgiraude          #+#    #+#             */
/*   Updated: 2023/03/17 12:57:47 by pgiraude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char *str_1, char *str_2)
{
	int	i;

	i = 0;
	while (str_1[i] || str_2[i])
	{
		if ((int)str_1[i] < (int)str_2[i])
			return ((int)str_1[i] - (int)str_2[i]);
		if (str_1[i] > str_2[i])
			return ((int)str_1[i] - (int)str_2[i]);
		i++;
	}
	return (0);
}
