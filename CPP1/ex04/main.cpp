/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabid <moabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:42:17 by jfreitas          #+#    #+#             */
/*   Updated: 2022/10/31 13:34:08 by moabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"


void	copyReplace(std::fstream &newFile, std::string line, std::string s1, std::string s2) {
	size_t	linePos = 0;
	size_t	i = 0;

	if (line.find(s1, linePos) == std::string::npos) { // npos = no position (s1 was not found in line)
		newFile << line;
		return ;
	}
	while ((linePos = line.find(s1, i)) != std::string::npos) {
		while (i < linePos) {
			newFile << line[i];
			i++;
		}
		for (size_t j = 0; j < s2.size(); j++) {
			newFile << s2[j];
		}
		i = i + s1.size();
	}
	while (i < line.size()) {
		newFile << line[i];
		i++;
	}
}

void	openReadCopyReplaceFile(std::string fileName, std::string s1, std::string s2) {
	std::string		newFileName;
	std::fstream	file;
	std::fstream	newFile;
	std::string		line;

	file.open(fileName, std::fstream::in);
	if (file.is_open()) {
		newFileName = fileName + ".replace";
		newFile.open(newFileName, std::fstream::out);
		if (newFile.is_open()) {
			while (std::getline(file, line)) {
				copyReplace(newFile, line, s1, s2);
				newFile << std::endl;
			}
			newFile.close();
		}
		file.close();
	} else {
		std::cout << YELLOW << "File " << fileName << " does not exist... Try again!" << std::endl << RESET;
	}
}

bool	errorRandling(std::string fileName, std::string s1, std::string s2) {
	if (s1.empty() || s2.empty() || fileName.empty()) {
		std::cout << "strings can not be empty! Please try again" << std::endl;
		return true;
	}
	return false;
}

int		main(int argc, char **argv) {
	if (argc == 4) {
		if (errorRandling(argv[1], argv[2], argv[3])) {
			return -1;
		}
		openReadCopyReplaceFile(argv[1], argv[2], argv[3]);
	} else {
    	std::cout << "[-] syntax error :<filename> <s1> <s2> " << std::endl;
    }
	return 0;
}