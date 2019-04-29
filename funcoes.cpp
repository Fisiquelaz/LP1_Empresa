#include "funcoes.h"

#include <iostream>
#include <string>

using namespace std;

void imprimir_menu(){
	cout << "Escolha a opção desejada\n";
	cout << "1 - Criar empresa\n";
	cout << "2 - Listar empresas\n";
	cout << "0 - Sair\n";
}

void adicionar_empresa(vector<Empresa> *empresas){
	Empresa empresa;
	string nome;
	int cnpj;
	cout << "\nInsira o nome da empresa\n";
	cin >> nome;
	empresa.set_nome(nome);
	cout << "\nInsira o cnpj da empresa\n";
	cin >> cnpj;
	empresa.set_cnpj(cnpj);
	empresas->push_back(empresa);
	cout << "\nEmpresa adicionada com sucesso\n\n";
}