/**
* @file funcionario.cpp
* @brief Métodos da classe Funcionario
* @author Danilo Miranda de Medeiros Galvão, João Mendes Lopes Neto
* @since 29/04/2019
* @date 01/05/2019
*/

#include "funcionario.h"
#include "data.h"

#include <string>
#include <ctime>
#include <iostream>

using namespace std;

int Funcionario::cont = -1;

Funcionario::Funcionario(){
	cont++;
}

string Funcionario::get_nome(){
	return nome;
}
void Funcionario::set_nome(string novo_nome){
	nome = novo_nome;
}
double Funcionario::get_salario(){
	return salario;
}
void Funcionario::set_salario(double novo_salario){
	salario = novo_salario;
}
int Funcionario::get_cpf(){
	return cpf;
}
void Funcionario::set_cpf(int novo_cpf){
	cpf = novo_cpf;
}
int Funcionario::get_cont(){
	return cont;
}
Data Funcionario::get_data_admissao(){
	return data_admissao;
}
void Funcionario::set_data_admissao(int d, int m, int a){
	data_admissao.set_dia(d);
	data_admissao.set_mes(m);
	data_admissao.set_ano(a);
}
int Funcionario::tempo_empresa(){
	time_t t = time(0); 
    struct tm * now = localtime( & t );
	Data atual((now->tm_mday), (now->tm_mon + 1), (now->tm_year + 1900));
	return (data_admissao - atual);
}
ostream& operator<< (ostream &o, Funcionario funcionario){
	o << "Nome do funcionario: " << funcionario.get_nome() << "\nCpf: " << funcionario.get_cpf() << 
	"\nSalário: " << funcionario.get_salario() << "\nData de admissão: " << funcionario.get_data_admissao() << endl;
	return o;
}