/**
* @file main.cpp
* @brief Arquivo principal para execução do programa
* @author Danilo Miranda de Medeiros Galvão, João Mendes Lopes Neto
* @since 29/04/2019
* @date 01/05/2019
*/

#include "funcionario.h"
#include "empresa.h"
#include "funcoes.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int fim = 0, op;
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
				listar_funcionarios_empresas(empresas);
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
			case 0:
				fim = 1;
				break;
			default:
				break;
		}
	}
	return 0;
}