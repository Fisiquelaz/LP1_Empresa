#include "funcionario.h"

#include <string>
#include <iostream>
using namespace std;

int Funcionario::cont = -1;

Funcionario::Funcionario(){
	// setar a data de admissão para a atual
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
ostream& operator<< (ostream &o, Funcionario funcionario){
	o << "Nome do funcionario: " << funcionario.get_nome() << "\nCpf: " << funcionario.get_cpf() << "\nSalário: " << funcionario.get_salario() << endl;
	return o;
}