/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:25:05 by dmarceli          #+#    #+#             */
/*   Updated: 2021/10/25 20:10:47 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char *s2;

	s2 = (char *) s;
	i = ft_strlen(s2);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *) & s[i]);
		i--;
	}
	return (0);
}