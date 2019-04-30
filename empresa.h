#ifndef EMPRESA_H
#define EMPRESA_H

#include <string>
#include <vector>
#include "./funcionario.h"
using namespace std;

class Empresa{
	private:
		string nome;
		int cnpj;
		vector <Funcionario> funcionarios;
	public:
		//Construtor
		Empresa();
		// metodos
		string get_nome();
		void set_nome(string nome);
		int get_cnpj();
		void set_cnpj(int cnpj);
		friend ostream& operator<< (ostream &o, Empresa empresa);
};

#endif