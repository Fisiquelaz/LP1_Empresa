#include "funcoes.h"

#include <iostream>
#include <string>

using namespace std;

//MENU
void imprimir_menu(){
	cout << "Escolha a opção desejada\n";
	cout << "1 - Criar empresa\n";
	cout << "2 - Listar empresas\n";
	cout << "0 - Sair\n";
}
//FIM DO MENU

//MANIPULAÇÃO DAS EMPRESAS
void adicionar_empresa(vector<Empresa> &empresas){
	Empresa empresa;
	string nome;
	int cnpj;
	//não seria melhor a gente fazer um construtor?
	cout << "\nInsira o nome da empresa\n";
	cin >> nome;
	empresa.set_nome(nome);
	cout << "\nInsira o cnpj da empresa\n";
	cin >> cnpj;
	empresa.set_cnpj(cnpj);
	empresas.push_back(empresa);
	cout << "\nEmpresa adicionada com sucesso\n\n";
}

void listar_empresas(vector<Empresa> &empresas){
	if(empresas.empty()){
		cout << "\nNão há empresas criadas\n\n";
	}
	else{
		cout << "\nEmpresas criadas: \n\n";
		for(int i = 0; i < empresas.size(); i++){
			cout << empresas[i] << endl;
		}
		cout << endl;
	}
}
//FIM DA MANIPULAÇÃO DAS EMPRESAS