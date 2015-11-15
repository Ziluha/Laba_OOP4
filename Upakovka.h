#pragma once
#include <string>

class Upakovka{
	std::string material;
public:
	Upakovka();
	void setMaterial(std::string material);
	void getMaterial();
	~Upakovka();
};