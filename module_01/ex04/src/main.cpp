/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 22:41:42 by jemustaj          #+#    #+#             */
/*   Updated: 2026/09/13 11:55:26 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

std::string replace_s1(const std::string &file_content, const std::string &s1, const std::string &s2);

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Error: invalid amount of arguments" << "\n";
		return (1);
	}

	std::string	filename(av[1]);
	std::string	s1(av[2]);
	std::string s2(av[3]);

	if (s1.empty())
	{
		std::cerr << "Error: av[2] must not be empty" << "\n";
		return (1);
	}

	std::ifstream	file_open(filename.c_str());
	if (!file_open.is_open())
	{
		std::cerr << "Error: not able to open the file" << "\n";
		return (1);
	}

	std::stringstream	buffer;
	buffer << file_open.rdbuf();
	std::string	file_content(buffer.str());
	file_open.close();

	std::string	res = replace_s1(file_content, s1, s2);

	std::string	new_filename(filename + ".replace");
	std::ofstream	new_file(new_filename.c_str());
	if (!new_file.is_open())
	{
		std::cout << "Error: not able to create a new file" << "\n";
		return (1);
	}
	new_file << res;
	new_file.close();

	return (0);
}

std::string replace_s1(const std::string &file_content, const std::string &s1, const std::string &s2)
{
    std::string res;
    size_t		pos = 0;

    while (true)
    {
        size_t found = file_content.find(s1, pos);
        if (found == std::string::npos)
        {
            res += file_content.substr(pos);
            break;
        }
        res += file_content.substr(pos, found - pos);
        res += s2;
        pos = found + s1.length();
    }
    return (res);
}
