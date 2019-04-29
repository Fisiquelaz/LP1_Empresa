#include "funcionario.h"

#include <string>
using namespace std;

Funcionario::Funcionario(){
	// setar a data de admissão para a atual
	//count += 1;
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