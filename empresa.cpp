#include "empresa.h"

#include <string>
#include <iostream>
using namespace std;

Empresa::Empresa(){
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
ostream& operator<< (ostream &o, Empresa empresa){
	o << "Nome da empresa: " << empresa.get_nome() << "\nCNPJ: " << empresa.get_cnpj() << endl;
	return o;
}