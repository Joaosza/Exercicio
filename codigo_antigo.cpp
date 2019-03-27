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
			listprod.push_back(produtos);
	}
}

void imprimir (){

	list<prod_t>::iterator i;
	i = listprod.begin();

	while(i != listprod.end()){
	    cout << "Produto - " << i << produtos[i].nome << endl;
	    cout << "Codigo -  " << i << produtos[i].codigo << endl;
	    cout << "Produto - " << i << produtos[i].preco << endl;
	    cout << "Produto - " << i << produtos[i].qtde_estoque << endl;
}
}


int main ()
{
	string controle;
	int cont = 0;

	do{
		std::cout << "Gostaria de adicionar mais algum Produto ?" << '\n';
		cout << "Sim = s ou Não = 0 : ";
		cin >> controle;

		if(controle == "s"){
			cadastrar();
			cont++;
		}
	}while (controle == "s");

	if(cont > 0)
		imprimir(listprod);
	cout << "Saindo do programa ....";

	return 0;
}
