#include "stdafx.h"
#include "List.h"
#include <iostream>

List::~List()
{
	Stebel *r;
	while (begin)
	{
		r = begin;
		begin = begin->next;
		delete r;
	}
}
void List::Insert(Stebel *p)
{
	Stebel *r;
	r = begin;
	begin = p;
	p->next = r;
}

void List::print()
{
	Stebel *r;
	r = begin;
	while (r)
	{
		r->print();
		std::cout << "\n____________________" << std::endl;
		r = r->next;
	}
}