#pragma once
#include "stdafx.h"
#include "Stebel.h"
#include <ostream>
#include <string>

class Tsvetok :public Stebel{
	std::string name;
	std::string color;

public:
	Tsvetok();
	Tsvetok(int size, std::string name, std::string color);
	
	void print();

	~Tsvetok();
};