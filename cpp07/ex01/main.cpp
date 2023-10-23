/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:52:03 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/10/23 15:07:00 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main()
{
  int tab[] = {0, 1, 2, 3, 4};

  iter<int>(tab, 5, show<int>);
  iter<int>(tab, 5, show<int const>);
  return 0;
}
