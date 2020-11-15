// aula26.cpp
// As funções recursivas não usam as instruções de repetição
// FATORIAL E FIBONACCI COM FUNÇÕES RECURSIVAS
// FATORIAL: n!
// Exemplo: 3! = 3x2x1=6
// FIBONACCI: 1 1 2 3 5 8 13 21...

int fatorial(int n);
int fibonacci(int n);

#include <iostream>
using namespace std;

#define TAM 10
#define NUM1 5
const int NUM2 = 6;

int main()
{
	int n = 1;
	cout << "Fatorial \n";
	cout << NUM1 << "! = " << fatorial(NUM1) << "\n";

	cout << NUM2 << "! = " << fatorial(NUM2) << "\n";

	cout << "\nFibonacci \n";
	for (int i = 1; i <= TAM; i++)
	{
		cout << i << ")";
		cout << fibonacci(n) << " ";
		
		n++;
	}
	cout << "\n";

	return 0;
}

//FUNÇÕES RECURSIVAS
int fatorial(int n)
{
	int f = n;
	n--;

	if (n > 0) 
		f = f * fatorial(n);
	
	return f;
}

int fibonacci(int n)
{
	if (n == 0 || n == 1)
		return n;
	else 
		return (fibonacci(n-1) + fibonacci(n-2));
}