/**
* @file empresa.cpp
* @brief Métodos da classe Empresa
* @author Danilo Miranda de Medeiros Galvão, João Mendes Lopes Neto
* @since 29/04/2019
* @date 01/05/2019
*/

#include "empresa.h"

#include <string>
#include <iostream>

using namespace std;

int Empresa::cont = -1;

Empresa::Empresa(){
	cont++;
}

string Empresa::get_nome(){
	return nome;
}
void Empresa::set_nome(string novo_nome){
	nome = novo_nome;
}
int Empresa::get_cnpj(){
	return cnpj;
}
void Empresa::set_cnpj(int novo_cnpj){
	cnpj = novo_cnpj;
}
vector<Funcionario> Empresa::get_funcionarios(){
	return funcionarios;
}
void Empresa::add_funcionario(Funcionario funcionario){
	funcionarios.push_back(funcionario);
}
void Empresa::conceder_aumento(double porcento){
	double novo_salario;
	for(int i = 0; i < funcionarios.size(); i++){
		novo_salario = funcionarios[i].get_salario() * (1+(porcento/100));
		funcionarios[i].set_salario(novo_salario);
	}
}
int Empresa::get_cont(){
	return cont;
}
ostream& operator<< (ostream &o, Empresa empresa){
	o << "Nome da empresa: " << empresa.get_nome() << "\nCNPJ: " << empresa.get_cnpj() << endl;
	return o;
}