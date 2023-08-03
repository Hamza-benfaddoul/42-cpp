/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenfadd <hbenfadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:16:05 by hbenfadd          #+#    #+#             */
/*   Updated: 2023/08/03 16:34:53 by hbenfadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
# include <iostream>

class Brain
{
    public:
        Brain();
        Brain(Brain const &other);
        Brain &operator=(const Brain &other);
        ~Brain();
        std::string getIdea(int i) const;
        void setIdea(int i, std::string idea);
    private:
        std::string ideas[100];
};

#endif
