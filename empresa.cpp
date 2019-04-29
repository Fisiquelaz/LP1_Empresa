#include "empresa.h"

#include <string>
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