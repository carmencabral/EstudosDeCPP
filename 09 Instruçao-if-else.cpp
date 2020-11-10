// aula09.cpp
// Instrução if-else

#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	cout << "num1: ";
	cin >> num1;
	
	cout << "num2: ";
	cin >> num2;
	cout << "\n";

	//operadores lógicos: ==; !=; >; >=; <; <=
	cout << "Resultado:" << "\n";

	if (num1 < num2 && num1 != num2) //teste lógico
	{
		cout << num1 << " < " << num2 << "\n";
	}
	else 
		if (num1 > num2 && num1 != num2) //teste lógico
		{
			cout << num1 << " > " << num2 << "\n";
		}
		else
			if (num1 == num2)
			{
				cout << num1 << " = " << num2 << "\n";
			}

	return 0;

}