#include "funcionario.h"
#include "empresa.h"
#include "funcoes.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int fim = 0, op;
	//vetor de empresas
	vector <Empresa> empresas;
	while(fim != 1){
		imprimir_menu();
		cin >> op;
		switch(op){
			case 1:
				adicionar_empresa(empresas);
				break;
			case 2:
				listar_empresas(empresas);
				break;
			case 0:
				fim = 1;
				break;
			default:
				break;
		}
	}
	return 0;
}