/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 03:39:31 by moabid            #+#    #+#             */
/*   Updated: 2022/11/09 03:46:45 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

static bool	is_invalid_literal(std::string &s)
{
	return (s == "nan" || s == "nanf" || s == "+inf" || s == "inf"
		|| s == "-inf" || s == "+inff" || s == "inff" || s == "-inff");
}

static void	convert_to_char(std::string &str)
{
	if (is_invalid_literal(str))
	{
		std::cout << "Impossible" << std::endl;
		return ;
	}
	char c = static_cast<char>(atoi(str.c_str()));
	if (c < 32 || c > 126)
	{
		std::cout << "Non displayable" << std::endl;
		return ;
	}
	std::cout << "\'" << c << "\'" << std::endl;
}

static void	convert_to_int(std::string &str)
{
	if (is_invalid_literal(str))
	{
		std::cout << "Impossible" << std::endl;
		return;
	}
	std::cout << std::atoi(str.c_str()) << std::endl;
}

static void	convert_to_float(std::string &str)
{
	float number = std::strtof(str.c_str(), nullptr);
	if (number - static_cast<int>(number) == 0)
	{
		std::cout << number << ".0f" << std::endl;
		return ;
	}
	std::cout << number << "f" << std::endl;
}


static void	convert_to_double(std::string &str)
{
	double number = std::strtod(str.c_str(), nullptr);
	if (number - static_cast<int>(number) == 0)
	{
		std::cout << number << ".0" << std::endl;
		return ;
	}
	std::cout << number << std::endl;
}

static void	conversion_of_scalar_types(std::string str)
{
	std::cout << std::right << std::setw(10) << "Char : ", convert_to_char(str);
	std::cout << std::right << std::setw(10) << "Int : ", convert_to_int(str);
	std::cout << std::right << std::setw(10) << "Float : ", convert_to_float(str);
	std::cout << std::right << std::setw(10) << "Double : ", convert_to_double(str);
}

static bool	is_valid(std::string &str)
{
	size_t	i;
	char	c;

	if (is_invalid_literal(str))
		return (true);
	if (str.length() == 1 && isalpha(str[0])){
		str = std::to_string(static_cast<int>(str[0]));
		return (true);
	}
	for (i = 0; i < str.size(); i++)
	{
		c = str[i];
		if (!isdigit(c) && c != '-' && c != '+' && c != 'f'
			&& c != '.')
			return (false);
	}
	return (true);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Bad number of args" << std::endl;
		return (0);
	}
	std::string str = (std::string)av[1];
	if (is_valid(str)){
		conversion_of_scalar_types(str);
	}
	else
		std::cerr << "Invalid" << std::endl;
}
