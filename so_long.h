/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:14:13 by hben-mes          #+#    #+#             */
/*   Updated: 2023/03/04 12:30:42 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "ft_printf/ft_printf.h"
# include "libft/libft.h"
# include <fcntl.h>
# include <mlx.h>
# include <stdlib.h>

typedef struct s_img
{
	void	*wall;
	void	*exit;
	void	*background;
	void	*player;
	void	*collectible;

	int		width;
	int		height;
}			t_img;

typedef struct s_logic
{
	t_img	img;
	void	*first;
	void	*mlx_win;
	char	**map;
	int		map_x;
	int		map_y;
	int		area;
	int		x;
	int		y;
	int		player;
	int		p_x;
	int		p_y;
	int		player_move;
	int		collectible;
	int		exit;
	int		collectible_path;
	int		exit_path;
	int		unknown_character;
}			t_args;

void		define_mlx(t_args *arg);
void		valid_map(char **argv, t_args *arg);
void		start(t_args *arg);
void		check_param(int argc, char **argv);
void		check_map(char *buff, t_args *arg);
void		check_characters(char *buff, t_args *arg);
char		*ft_charjoin(char *ptr, char c);
char		*read_map(int fd);
void		valid_path(int x, int y, t_args *arg);
void		check_path(t_args *arg);
void		wall_error(void);
void		x_wall(t_args *arg);
void		y_wall(t_args *arg);
void		put_wall(t_args *arg);
void		put_background(t_args *arg);
void		put_collectibles(t_args *arg);
void		put_player(t_args *arg);
void		put_exit(t_args *arg);
void		up(t_args *arg);
void		down(t_args *arg);
void		left(t_args *arg);
void		right(t_args *arg);
int			keyboard(int keycode, t_args *arg);
int			close_window(t_args *arg);
void		load_background(t_args *arg);
int			count_collectibles(t_args *arg);
void		put_stuff(t_args *arg);
void		free_array(char **ptr, int i);
void		remove_char(char *str, char **ptr, char c);
void		check_error(t_args *arg);
void		init_img(t_args *arg);

#endif