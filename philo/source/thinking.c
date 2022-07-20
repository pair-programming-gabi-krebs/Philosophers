/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thinking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 02:21:07 by gcosta-d          #+#    #+#             */
/*   Updated: 2022/07/20 04:29:46 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philosophers.h"

int	philo_is_thinking(t_list *philo)
{
	print_philo(philo, THINK);
	usleep(300);
	return (1);
}
