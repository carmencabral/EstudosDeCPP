#pragma once
//Carmen Cabral
// aula48.cpp : 10/01/2021

#include <iostream>
using namespace std;

class Base1
{
	public:
		void impBase1();
};

void Base1::impBase1()
{
	cout << "Imp classe Base1" << endl << endl;
}

class Base2
{
	public:
		void impBase2();
};

void Base2::impBase2()
{
	cout << "Imp classe Base2" << endl << endl;
}

//HERAN�A M�LTIPLA
class CFB :public Base1, public Base2
{
};