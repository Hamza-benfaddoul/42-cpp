/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:43:07 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/06/16 16:13:18 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed{
	public:
		Fixed();
		~Fixed();
		Fixed&	operator=(const Fixed& other);
		void	setRawBits(int const rew);
		Fixed& operator<<(const Fixed& other);
		Fixed& operator>>(const Fixed& other);
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
};






#endif /* FIXED_HPP */