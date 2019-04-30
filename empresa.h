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
		static int cont;
	public:
		//Construtor
		Empresa();
		// metodos
		string get_nome();
		void set_nome(string nome);
		int get_cnpj();
		void set_cnpj(int cnpj);
		vector<Funcionario> get_funcionarios();
		void add_funcionario(Funcionario funcionario);
		void conceder_aumento(double porcento);
		int get_cont();
		friend ostream& operator<< (ostream &o, Empresa empresa);
};

#endif