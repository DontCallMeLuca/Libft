/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_seekdir.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoddijn <lgoddijn@student.codam.nl >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 00:42:00 by lgoddijn          #+#    #+#             */
/*   Updated: 2024/10/16 15:40:08 by lgoddijn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_dirent.h"

void	ft_seekdir(t_dir *dir, long off)
{
	dir->tell = ft_lseek(dir->fd, off, SEEK_SET);
	dir->buf_end = 0;
	dir->buf_pos = dir->buf_end;
}
