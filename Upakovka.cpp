#include "stdafx.h"
#include "Upakovka.h"
#include <string>
#include <iostream>


Upakovka::Upakovka(){}
void Upakovka::setMaterial(std::string material){
	this->material = material;
}
void Upakovka::getMaterial(){
	std::cout << "\n�������� �������� " << this->material << std::endl;
}
Upakovka::~Upakovka(){}
