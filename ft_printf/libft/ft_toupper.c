/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkramer <dkramer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 11:26:48 by dkramer       #+#    #+#                 */
/*   Updated: 2020/11/15 10:50:08 by dkramer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int c)
{
	int		d;

	d = c;
	if (c >= 97 && c <= 122)
		d = c - 32;
	return (d);
}
