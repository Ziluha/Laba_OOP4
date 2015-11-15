// Laba_OOP3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "Stebel.h"
#include "Tsvetok.h"
#include "Roza.h"
#include "Hrizantema.h"
#include "Upakovka.h"
#include "List.h"

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	
	List list;

	Roza *roza;
	Hrizantema *hrz;
	//Roza *sbbsb;
	//sbbsb = new Roza();
	
	roza = new Roza(12, "роза", "красный");
	list.Insert(roza);
	
	hrz = new Hrizantema(20, "хризантема", "оранжевый");
	list.Insert(hrz);
	
	//list.Insert(sbbsb);
	list.print();
	
	system("pause");
	return 0;
}

