/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:32:17 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/19 20:57:30 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FragTrap_HPP
#define FragTrap_HPP

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

    void attack(const std::string &target);
    void highFiveGuys();
};

std::ostream &operator<<(std::ostream &COUT, const FragTrap &FragTrap);

#endif
