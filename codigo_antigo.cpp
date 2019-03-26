#include <iostream>
#include <string>
#include <list>
#include <iterator>

using namespace std;

struct prod_t {
	string nome;
  int codigo;
  double preco;
  int qtde_estoque;

};

list<prod_t> listprod;

void cadastrar(){

	prod_t *produtos;
	produtos = new prod_t[n];

			cout << "Nome do Produto." << endl;
			cin >> produtos.nome;

			cout << "Codigo do produto." << endl;
			cin >> produtos.codigo;

			cout << "Preço do Produto." <<endl;
			cin >> produtos.preco;

			cout << "Quantidade que ficara em estoque." <<endl;
			cin >>produtos.qtde_estoque;

	}



int main ()
{


  for (i=0; i<n; i++) {
    cout << "Produto - " << i << produtos[i].nome << endl;
    cout << "Codigo -  " << i << produtos[i].codigo << endl;
    cout << "Produto - " << i << produtos[i].preco << endl;
    cout << "Produto - " << i << produtos[i].qtde_estoque << endl;
  }


	return 0;
}
