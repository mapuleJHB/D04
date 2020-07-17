/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapule <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:38:42 by mapule            #+#    #+#             */
/*   Updated: 2020/07/17 10:11:22 by mapule           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_recursive_factorial(int nb);
{
	if(nb<=1)
{  
    return(1);
}
	else 

{
    return nb * ft_recursive_factorial(nb -1);
}
}


