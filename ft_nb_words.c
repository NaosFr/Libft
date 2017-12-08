/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:15:35 by ncella            #+#    #+#             */
/*   Updated: 2017/11/13 18:15:38 by ncella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nb_words(char const *str, char c)
{
	int i;
	int n;
	int tmp;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		while (str[i] != c && str[i] != '\0')
		{
			i++;
			tmp = 1;
		}
		if (str[i] == c || str[i] == '\0')
		{
			if (tmp == 1)
				n++;
			if (str[i] != '\0')
				i++;
			tmp = 0;
		}
	}
	return (n);
}