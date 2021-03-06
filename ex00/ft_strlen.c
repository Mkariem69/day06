/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariem <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 11:25:12 by mkariem           #+#    #+#             */
/*   Updated: 2020/06/25 16:10:17 by mkariem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int blast;
	blast = 0;
	while(*str != '\0')
	{
		++blast;
		++str;
	}
	return(blast);
}
