#include "funcoes.h"

#include <iostream>
#include <string>

using namespace std;

//MENU
void imprimir_menu(){
	cout << "Escolha a opção desejada\n";
	cout << "1 - Criar empresa\n";
	cout << "2 - Listar funcionarios de uma empresa\n";
	cout << "3 - Conceder aumento aos funcionarios de uma empresa\n";
	cout << "4 - Listar funcionários em período de experiência em uma empresa\n";
	cout << "13 - teste\n";
	cout << "0 - Sair\n";
}
//FIM DO MENU
void teste(){
	Funcionario funcionario;
	cout << "eae " << funcionario.get_cont() << endl;
}
//MANIPULAÇÃO DAS EMPRESAS
void adicionar_empresa(vector<Empresa> &empresas){
	Empresa empresa;
	string nome;
	int cnpj, qtd_f;
	//não seria melhor a gente fazer um construtor?
	cout << "\nInsira o nome da empresa\n";
	cin >> nome;
	empresa.set_nome(nome);
	cout << "\nInsira o cnpj da empresa\n";
	cin >> cnpj;
	empresa.set_cnpj(cnpj);
	cout << "\nInsira a quantidade de funcionarios a ser inserida\n";
	cin >> qtd_f;
	for(int i = 0; i < qtd_f; i++){
		criar_funcionario(qtd_f, i, empresa);
	}
	empresas.push_back(empresa);
	cout << "\nEmpresa adicionada com sucesso\n\n";
}
int listar_empresas(vector<Empresa> &empresas){
	if(empresas.empty()){
		cout << "\nNão há empresas criadas\n\n";
		return 0;
	}
	else{
		cout << "\nEmpresas criadas: \n\n";
		for(int i = 0; i < empresas.size(); i++){
			cout << empresas[i] << endl;
		}
		cout << endl;
	}
	return 1;
}
void adm_listar_empresas(vector<Empresa> &empresas){
	int posicao;
	int listar = listar_empresas(empresas);
	if(listar == 1){
		receber_cnpj(posicao, empresas);
		listar_funcionarios(empresas[posicao]);
	}
}
//FIM DA MANIPULAÇÃO DAS EMPRESAS
void receber_cnpj(int& posicao, vector<Empresa> &empresas){
	int fim = 0, cnpj;
	while(fim != 1){
		cout << "\nInsira o cnpj da empresa que deseja listar\n";
		cin >> cnpj;
		for(int i = 0; i < empresas.size(); i++){
			if(empresas[i].get_cnpj() == cnpj){
				posicao = i;
				fim = 1;
				break;
			}
		}
		if(fim != 1){
			cout << "Cnpj inválido ou não existe" << endl;
		}
	}
}
void listar_funcionarios(Empresa& empresa){
	cout << endl;
	for(int i = 0; i < empresa.get_funcionarios().size(); i++){
		cout << empresa.get_funcionarios()[i] << endl;
	}
	cout << endl;
}

void criar_funcionario(int qtd_f, int i, Empresa& empresa){
	Funcionario funcionario;
	double salario;
	string nome;
	cout << "\n" << (i+1) << "º funcionario\n\n";
	receber_cpf_funcionario(funcionario, empresa);
	cout << "\nInsira o nome do funcionario\n";
	cin >> nome;
	funcionario.set_nome(nome);
	cout << "\nInsira o salario do funcionario\n";
	cin >> salario;
	funcionario.set_salario(salario);
	empresa.add_funcionario(funcionario);
}

void receber_cpf_funcionario(Funcionario& funcionario, Empresa& empresa){
	int fim = 0, cpf;
	while(fim != 1){
		cout << "\nInsira o cpf do funcionario\n";
		cin >> cpf;
		if(checar_cpf_funcionario(cpf, empresa) == 1){
			fim = 1;
			funcionario.set_cpf(cpf);
		}
		else{
			cout << "\nJá existe um funcionário com esse cpf nesta empresa\n";
		}
	}
}
int checar_cpf_funcionario(int cpf, Empresa& empresa){
	for(int i = 0; i < empresa.get_funcionarios().size(); i++){
		if(cpf == empresa.get_funcionarios()[i].get_cpf()){
			return 0;
		}
	}
	return 1;
}
void aumento(vector<Empresa> &empresas){
	double porcento;
	int posicao;
	int listar = listar_empresas(empresas);
	if(listar == 1){
		receber_cnpj(posicao, empresas);
		cout << "Insira a porcentagem do aumento que deseja dar:" << endl;
		cin >> porcento;
		empresas[posicao].conceder_aumento(porcento);
	}
}
void experiencia(vector<Empresa> &empresas){
	int posicao;
	int listar = listar_empresas(empresas);
	if(listar == 1){
		receber_cnpj(posicao, empresas);
		cout << "não tá pronto" << endl;
	}
}