#include <iostream>

using namespace std;

int main ()
{
	int i;
	string s;
	
	cin >> s;
	
	cout << "ola " << s << endl;
	
	for (i=0; i<10; i++)
		cout << i << endl;
	
	string nome;
	int idade;
	
	cout << "Informe o seu nome: ";
	cin >> nome;
	
	cout << "" << endl;
	
	cout << "Informe a sua idade: ";
	cin >> idade;
	
	if(idade >= 18){
		cout << "Você é maior de idade!";
	}else{
		cout << "Você é menor de idade!";
	}
		
	return 0;
}
