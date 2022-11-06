/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:46:49 by moabid            #+#    #+#             */
/*   Updated: 2022/11/05 23:46:55 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	private:

	public:
		FragTrap();
		FragTrap(std::string const name);
		FragTrap(FragTrap const &src);
		~FragTrap();

	FragTrap &operator=(FragTrap const &rhs);

	void highFiveGuys(void);
};
