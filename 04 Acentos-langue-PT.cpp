#include <iostream>
#include <locale>

using namespace std; /*espa�o de trabalho-standard: indica onde est�o as bibliotecas*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");	
	cout << "Ol�\n";
	cout << "Carmen" << endl;
	
	system("pause");
	return 0;
}
