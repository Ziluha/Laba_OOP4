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
	std::cout << "\n�������� " << this->name;
	std::cout << "\n���� " << this->color;
	std::cout << "\n������ ������ " << this->size;
}

Tsvetok::~Tsvetok(){}
