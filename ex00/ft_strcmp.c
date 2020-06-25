/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariem <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 10:56:41 by mkariem           #+#    #+#             */
/*   Updated: 2020/06/25 16:15:59 by mkariem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
	int z;
	z = 0;
	while(s1[z] != '\0' && s2[z] != '\0' && s1[z] ==s2[z])
		++z;
	return(s1[z] - s2[z]);
			}