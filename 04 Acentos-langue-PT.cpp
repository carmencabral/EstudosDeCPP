#include <iostream>
#include <locale>

using namespace std; /*espaço de trabalho-standard: indica onde estão as bibliotecas*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");	
	cout << "Olá\n";
	cout << "Carmen" << endl;
	
	system("pause");
	return 0;
}
