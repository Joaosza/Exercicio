#include <iostream>
#include <string>

using namespace std;

struct bixo_t {
	string nome;
	int idade;
};

int main ()
{
	int n, i;
	bixo_t *bixos;
	
	cout << "qtos?" << endl;
	cin >> n;
	
	bixos = new bixo_t[n];
	
	for (i=0; i<n; i++) {
		cout << "nome do bixo " << i << endl;
		cin >> bixos[i].nome;
	}
	
	for (i=0; i<n; i++) {
		cout << "o bixo " << i << " chama-se " << bixos[i].nome << endl;
	}

	return 0;
}
