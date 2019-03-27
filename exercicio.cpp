#include <iostream>
#include <string>
#include <list>
#include <iterator>

using namespace std;

struct prod_t { //Local de estrutação
	string nome;
  int codigo;
  double preco;
  int qtde_estoque;

};

list<prod_t> listprod; //Criando uma lista de Produtos

void cadastro(){ //Criando um função de cadastro de produtos
	prod_t prod;

	cout << "Nome do Produto : ";
	cin >> prod.nome; //Armazena o dado coletado

	cout << "Codigo do Produto : ";
	cin >> prod.codigo;

	cout << "Preço do Produto : ";
	cin >> prod.preco;

	cout << "Quantidade do Produto Cadastrado : ";
	cin >> prod.qtde_estoque;

	cout << "\n";
	listprod.push_back(prod); //Guardando as informações na lista
}

void imprimir (){

	list<prod_t>::iterator i;
	i = listprod.begin();

	while(i != listprod.end()){
		std::cout << "Nome Produto : " << (*i).nome << endl;
		std::cout << "Codigo Produto : " << (*i).codigo << endl;
		std::cout << "Preco do Produto : " << (*i).preco << endl;
		std::cout << "Quantidade em estoque : " << (*i).qtde_estoque << endl;

	}
}

int main ()
{
	string controle;
	int cont = 0;

	do{
		cout << "Gostaria de cadastrar mais algum Produto ? \n";
		cout << "Sim = s ou Não = 0 : ";
		cin >> controle;
		cout << "\n";
		if(controle == "s"){
			cadastro();
			cont++;
		}
	} while (controle == "s");

	if(cont > 0)
			imprimir(listprod);
	cout << "Saindo do programa ...";

	return 0;
}
