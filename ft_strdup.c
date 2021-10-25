/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 18:26:45 by dmarceli          #+#    #+#             */
/*   Updated: 2021/10/25 20:02:10 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		p;
	char	*str2;
	char	*too;

	too = (char *)str;
	str2 = (char *)malloc(ft_strlen(too) * sizeof(char));
	p = 0;
	while (str[p])
	{
		str2[p] = str[p];
		p++;
	}
	str2[p] = '\0';
	return (str2);
}