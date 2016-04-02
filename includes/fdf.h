/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <mmouhssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 22:33:01 by mmouhssi          #+#    #+#             */
/*   Updated: 2016/04/02 22:20:17 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "../libft/libft.h"
# include "../minilibx_macos/mlx.h"
# define WHITE 0xFFFFFF
# define H 800
# define W 800
# define X  2 //11 2
# define Y  1 //5  1

typedef struct		s_line
{
	int		height;
	int		color;
	struct s_line	*next;
}			t_line;

typedef struct		s_map
{
	t_line		*line;
	int		length;
	struct s_map	*next;
}			t_map;

typedef struct		s_2pos
{
	t_pos		init;
	t_pos		fin;
}			t_2pos;

typedef struct		s_env
{
	void		**p;
	t_map		*map;
	t_pos		*init;
	int		*zoom;
}			t_env;

t_map			*read_map(int fd/*, t_pos *pos, int *b_color*/);
void			line(void **param, t_2pos p, t_line *l1, t_line *l2);
void			win_map(void **p, t_map *map, t_pos init);

#endif
