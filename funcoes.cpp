#include "funcoes.h"

#include <iostream>
#include <string>

using namespace std;

//MENU
void imprimir_menu(){
	cout << "Escolha a opção desejada\n";
	cout << "1 - Criar empresa\n";
	cout << "2 - Adicionar funcionario a uma empresa\n";
	cout << "3 - Listar funcionarios de uma empresa\n";
	cout << "4 - Conceder aumento aos funcionarios de uma empresa\n";
	cout << "5 - Listar funcionários em período de experiência em uma empresa\n";
	cout << "6 - Obter média entre empresas e funcionários\n";
	cout << "0 - Sair\n";
}
//FIM DO MENU
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
		cout << "\n" << (i+1) << "º funcionario\n";
		criar_funcionario(empresa);
	}
	empresas.push_back(empresa);
	cout << "\nEmpresa adicionada com sucesso\n\n";
}
void receber_cnpj_empresa(Empresa& empresa, vector<Empresa> &empresas){
	int fim = 0, cnpj;
	while(fim != 1){
		cout << "\nInsira o cnpj da empresa\n";
		cin >> cnpj;
		if(checar_cnpj_empresa(cnpj, empresas) == 1){
			fim = 1;
			empresa.set_cnpj(cnpj);
		}
		else{
			cout << "\nJá existe uma empresa com esse cnpj\n";
		}
	}
}
int checar_cnpj_empresa(int cnpj, vector<Empresa> &empresas){
	for(int i = 0; i < empresas.size(); i++){
		if(cnpj == empresas[i].get_cnpj()){
			return 0;
		}
	}
	return 1;
}
void adicionar_funcionario(vector<Empresa> &empresas){
	int posicao;
	int listar = listar_empresas(empresas);
	if(listar == 1){
		receber_cnpj(posicao, empresas);
		criar_funcionario(empresas[posicao]);
	}
	cout << endl;
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
		cout << "Insira o cnpj da empresa desejada\n";
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
}

void criar_funcionario(Empresa& empresa){
	Funcionario funcionario;
	double salario;
	string nome;
	receber_cpf_funcionario(funcionario, empresa);
	cout << "\nInsira o nome do funcionario\n";
	cin >> nome;
	funcionario.set_nome(nome);
	cout << "\nInsira o salario do funcionario\n";
	cin >> salario;
	funcionario.set_salario(salario);
	//data
	cout << "\nInsira a data de admissão do funcionario\n";
	receber_data_funcionario(funcionario);
	empresa.add_funcionario(funcionario);
}

void receber_data_funcionario(Funcionario& funcionario){
	int ano = receber_data_ano_funcionario(funcionario);
	int mes = receber_data_mes_funcionario(funcionario);
	int dia = receber_data_dia_funcionario(funcionario, mes, ano);
	funcionario.set_data_admissao(dia, mes, ano);
}

int receber_data_ano_funcionario(Funcionario& funcionario){
	int fim = 0, ano;
	while(fim != 1){
		cout << "\nAno:\n";
		cin >> ano;
		if(ano > 1989 && ano < 2031){
			fim = 1;
		}
		else{
			cout << "\nInsira um número entre 1990 e 2030\n";
		}
	}
	return ano;
}

int receber_data_mes_funcionario(Funcionario& funcionario){
	int fim = 0, mes;
	while(fim != 1){
		cout << "\nMes:\n";
		cin >> mes;
		if(mes > 0 && mes < 13){
			fim = 1;
		}
		else{
			cout << "\nInsira um número entre 1 e 12\n";
		}
	}
	return mes;
}

int receber_data_dia_funcionario(Funcionario& funcionario, int mes, int ano){
	int fim = 0, dia;
	while(fim != 1){
		cout << "\nDia:\n";
		cin >> dia;
		if(mes ==  1 || mes ==  3 || mes ==  5 || mes ==  7 || mes ==  8 || mes ==  10 || mes ==  12){
			if(dia > 0 && dia < 32){
				fim = 1;
			}
			else{
				cout << "\nInsira um número entre 1 e 31\n";
			}
		}
		if(mes ==  4 || mes ==  6 || mes ==  9 || mes ==  11){
			if(dia > 0 && dia < 31){
				fim = 1;
			}
			else{
				cout << "\nInsira um número entre 1 e 30\n";
			}
		}
		if(mes == 2){
			if(ano%4 == 0){
				if(dia > 0 && dia < 30){
					fim = 1;
				}
				else{
					cout << "\nInsira um número entre 1 e 29\n";
				}
			}
			else{
				if(dia > 0 && dia < 29){
					fim = 1;
				}
				else{
					cout << "\nInsira um número entre 1 e 28\n";
				}
			}
		}
	}
	return dia;
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
		listar_funcionarios_experientes(empresas[posicao]);
	}
}
void listar_funcionarios_experientes(Empresa& empresa){
	cout << endl;
	for(int i = 0; i < empresa.get_funcionarios().size(); i++){
		if(empresa.get_funcionarios()[i].tempo_empresa() < 90){
			cout << empresa.get_funcionarios()[i] << endl;
		}
	}
}
void calcular_media(Empresa& empresa,Funcionario& funcionario){
	if(funcionario.get_cont() > 0 && empresa.get_cont() > 0){
		double media = (double)funcionario.get_cont()/(double)empresa.get_cont();
		cout << "\nMedia: " << media << " funcionários por empresa\n" << endl;
	}
	else{
		cout << "\nNão há funcionários e/ou empresas\n" << endl;
	}
}