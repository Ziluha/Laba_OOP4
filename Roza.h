#pragma once
#include "stdafx.h"
#include "Tsvetok.h"
#include <string>

class Roza : public Tsvetok{

public:
	Roza();
	Roza(int size, std::string name, std::string color);
	~Roza();

};