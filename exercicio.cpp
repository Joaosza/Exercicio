#include <iostream>
#include <string>
#include <vector>


using namespace std;

struct prod_t {
	string nome;
  int codigo;
  double preco;
  int qtde_estoque;

};

int main ()
{
	int n, i;
	prod_t *produtos;

  cout << "A mais algum produto para adicionar ?" << endl;
  cout << "Sim = 1 ou Não = 2" << endl;
  cin >> n;

  produtos = new prod_t[n];

  while (n == 1){
    for (i=0; i<n; i++){

      cout << "Nome do Produto." << endl;
      cin >> produtos[i].nome;

      cout << "Codigo do produto." << endl;
      cin >> produtos[i].codigo;

      cout << "Preço do Produto." <<endl;
      cin >> produtos[i].preco;

      cout << "Quantidade que ficara em estoque." <<endl;
      cin >>produtos[i].qtde_estoque;

      cout << "\n";
      cout << "A mais algum produto para adicionar ?" << endl;
      cout << "Sim = 1 ou Não = 2" << endl;
    	cin >> n;
    }

  }

  for (i=0; i<n; i++) {
    cout << "Produto - " << i << produtos[i].nome << endl;
    cout << "Codigo -  " << i << produtos[i].codigo << endl;
    cout << "Produto - " << i << produtos[i].preco << endl;
    cout << "Produto - " << i << produtos[i].qtde_estoque << endl;
  }


	return 0;
}
