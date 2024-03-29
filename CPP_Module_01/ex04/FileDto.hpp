/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileDto.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: choiejae <choiejae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:33:01 by ejachoi           #+#    #+#             */
/*   Updated: 2023/05/12 15:43:40 by choiejae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEDTO_HPP
# define FILEDTO_HPP

# define RED    "\033[0;31m"
# define GREEN  "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE   "\033[0;34m"
# define RESET  "\033[0m"

#include <iostream>
#include <fstream>

class FileDto {

    private:
        std::ifstream	m_fin;
        std::ofstream	m_fout;

    public:
        FileDto();
        FileDto(const std::string&	fileName);
        ~FileDto();

        std::ifstream&	getFin();
        std::ofstream&	getFout();
        
        void	replaceString(std::string& buf, const std::string& s1, const std::string& s2);
        void	replaceEndString(std::string& buf, const std::string& s1, const std::string& s2);
};

#endif
