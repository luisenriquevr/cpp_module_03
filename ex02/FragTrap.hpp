/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:32:17 by lvarela           #+#    #+#             */
/*   Updated: 2023/03/13 20:32:19 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    private:

    public:
        FragTrap();
        FragTrap(const std::string name);
        FragTrap(const FragTrap &toCopy);
        FragTrap &operator=(const FragTrap &toCopy);
        ~FragTrap();

        void highFiveGuys(void);
};

std::ostream &operator<<(std::ostream &COUT, const FragTrap &fragTrap);

#endif