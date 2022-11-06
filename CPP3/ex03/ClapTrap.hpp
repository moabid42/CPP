/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:47:08 by moabid            #+#    #+#             */
/*   Updated: 2022/11/05 23:47:17 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string.h>

class ClapTrap {

	protected:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;

	public:
		
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& src);
		~ClapTrap(void);

		ClapTrap& operator=(ClapTrap const &rhs);
		
		virtual std::string const	&getName() const;
		int const					&getHitPoints() const;
		int const					&getEnergyPoints() const;
		int const					&getAttackDamage() const;
		void				setName(std::string name);
		void				setHitPoints(int hitPoints);
		void				setEnergyPoints(int energyPoints);
		void				setAttackDamage(int attackDamage);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	berepaired(unsigned int amount);
};

std::ostream&	operator<<(std::ostream& lhs, ClapTrap &rhs);
