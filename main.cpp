#include "funcionario.h"
#include "empresa.h"
#include "funcoes.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int fim = 0, op;
	//vetor de empresas e empresa auxiliar para criação
	vector <Empresa> empresas;
	Empresa empresa;
	string nome;
	int cnpj;
	while(fim != 1){
		imprimir_menu();
		cin >> op;
		switch(op){
			case 1:
				adicionar_empresa(&empresas);
				break;
			case 2:
				if(empresas.empty()){
					cout << "\nNão há empresas criadas\n\n";
				}
				else{
					cout << "\nEmpresas criadas: \n\n";
					for(int i = 0; i < empresas.size(); i++){
						cout << empresas[i].get_nome() << endl;
					}
					cout << endl;
				}
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