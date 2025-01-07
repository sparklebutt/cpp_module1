/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::	  */
/*	 main.cpp											:+:		 :+:	:+:	  */
/*													  +:+ +:+		  +:+	  */
/*	 By: araveala <araveala@student.42.fr>			+#+	 +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/12/04 14:25:22 by araveala		   #+#	  #+#			  */
//   Updated: 2024/12/04 15:01:00 by araveala                                 //
/*																			  */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>


bool openFile(std::fstream& fd, const std::string& filename, std::ios_base::openmode mode)
{ 
    fd.open(filename, mode); 
    if (!fd.is_open()) 
    { 
        std::cerr << "Unable to open file: " << filename << std::endl; 
        return false; 
    } 
    return true;
}

std::string& replaceLoop(std::string& content, std::string str1, std::string str2)
{
	size_t index = 0, i = 0, str1length = 0, str2length = 0;
    std::string replace;
    str1length = str1.length();
    str2length = str2.length();
	while ((index = content.find(str1, index)) != std::string::npos)
	{
        for (i = 0; i < index; i++)
            replace += content[i];
        for (i = 0; i < str2length; i++)
            replace += str2[i];
        for (i = index + str1length; i < content.length(); i++)
            replace += content[i];
        content = replace;
        replace.clear();
        index += str2length;
	}
    return content;
}

int findReplace(std::string filename,  std::string str1, std::string str2)
{
	std::fstream fd;
    openFile(fd, filename, std::ios::in);
    std::stringstream buffer;
	buffer << fd.rdbuf();
	std::string content = buffer.str();
    fd.close();
    replaceLoop(content, str1, str2);
    openFile(fd, filename, std::ios::out | std::ios::trunc);
	fd << content;
    fd.close();
    return 0;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr<<"3 argumenst required, filename, string to find, string to replace"<<std::endl;
		return 1;
	}
	findReplace(argv[1], argv[2], argv[3]);
	return 0;
}
