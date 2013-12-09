/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheron <cheron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 16:44:16 by cheron            #+#    #+#             */
/*   Updated: 2013/11/30 18:02:25 by cheron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		{
			s1++;
			s2++;
		}
	return (*((unsigned char*)s1) - *((unsigned char *)s2));
}

