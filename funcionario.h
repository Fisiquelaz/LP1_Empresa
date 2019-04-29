#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
using namespace std;

class Funcionario {
	private:
		string nome;
		double salario;
		data data_admissao;
		static int count;
	public:
		// construtor
		Funcionario();
		// metodos
		string get_nome();
		void set_nome(string nome);
		double get_salario();
		void set_salario(double salario);	
};

#endif