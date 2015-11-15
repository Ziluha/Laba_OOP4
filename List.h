#pragma once
#include "stdafx.h"
#include "Stebel.h" 


class List 
{ 
public:   
	List() { begin = 0; }   
	~List();   
	void Insert(Stebel *);   
	void print(); 
private:   
	Stebel *begin; 
};