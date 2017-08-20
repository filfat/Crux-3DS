// Crux-3DS
// © 2014-2017 Filiph Sandström

#pragma once
#include <iostream>
#include <vector>

struct Package {
	std::string id;
	std::string name;
	std::string description;
	std::string author;
	std::string category;

	std::vector<std::string> platforms;
	std::vector<std::string> icons;
	std::vector<std::string> binaries;
};