/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lerp_v3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoddijn <lgoddijn@student.codam.nl >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:40:08 by lgoddijn          #+#    #+#             */
/*   Updated: 2023/10/28 17:21:18 by lgoddijn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_vector3	ft_lerp_v3(t_vector3 a, t_vector3 b, float t)
{
	return (ft_lerp_unclamped_v3(a, b, ft_clampf_0_1(t)));
}
