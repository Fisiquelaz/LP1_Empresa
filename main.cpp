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
	Empresa empresa;
	Funcionario funcionario;
	while(fim != 1){
		imprimir_menu();
		cin >> op;
		switch(op){
			case 1:
				adicionar_empresa(empresas);
				break;
			case 2:
				adicionar_funcionario(empresas);
				break;
			case 3:
				adm_listar_empresas(empresas);
				break;
			case 4:
				aumento(empresas);
				break;
			case 5:
				experiencia(empresas);
				break;
			case 6:
				calcular_media(empresa, funcionario);
				break;
			case 13:
				teste();
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