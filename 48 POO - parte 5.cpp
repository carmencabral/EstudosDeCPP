//Carmen Cabral
// aula48.cpp : 10/01/2021
//Herança Múltipla
//Quando uma classe herda características de mais de uma classe

#include "classes.h"
#include <iostream>
using namespace std;

int main()
{
	Base1* obj1 = new Base1();
	Base2* obj2 = new Base2();
	CFB* obj3 = new CFB();

	cout << "OBJ1" << endl;
	obj1->impBase1();
	cout << "OBJ2" << endl;
	obj2->impBase2();
	cout << "OBJ3 COM HERANCA MULTIPLA" << endl;
	obj3->impBase1();
	obj3->impBase2();
}