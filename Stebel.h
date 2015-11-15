#pragma once
#include <string>

class Stebel{
protected:
	int size;
	static Stebel* head;

public:
	Stebel *next;
	Stebel();
	Stebel(int size);

	virtual void print(void) = 0;

	~Stebel();
	
	friend class List;
};
