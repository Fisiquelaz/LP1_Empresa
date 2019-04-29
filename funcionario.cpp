#include "funcionario.h"

#include <string>
using namespace std;

Funcionario::Funcionario(){
	// setar a data de admissão para a atual
	count += 1;
}

string get_nome(){
	return nome;
}
void set_nome(string novo_nome){
	nome = novo_nome;
}
double get_salario(){
	return salario;
}
void set_salario(double novo_salario){
	salario = novo_salario;
}