/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 12:29:53 by rastle            #+#    #+#             */
/*   Updated: 2018/04/18 12:31:20 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char * ft_strmapi(char const *s, char (*f)(unsigned int, char));
{
	char *s_out;
	unsigned int i;

	i = 0;
	s_out = (char *)malloc(sizeof(*s));
	while (s[i])
	{
		s_out[i] = f(i, s[i]);
		i++;
	}
	s_out[i] = '\0';
	return (s_out);
}
