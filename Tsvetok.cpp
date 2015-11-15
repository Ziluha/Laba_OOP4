#include "stdafx.h"
#include "Tsvetok.h"
#include <string>
#include <iostream>


Tsvetok::Tsvetok()
{
	this->size = NULL;
	this->name = "NONAME";
	this->color = "NOCOLOR";
}

Tsvetok::Tsvetok(int size, std::string name, std::string color) :Stebel(size)
{
	this->name = name;
	this->color = color;
}

	

void Tsvetok::print(){
	std::cout << "\nНазвание " << this->name;
	std::cout << "\nЦвет " << this->color;
	std::cout << "\nРазмер стебля " << this->size;
}

Tsvetok::~Tsvetok(){}
