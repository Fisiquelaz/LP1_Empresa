#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
using namespace std;

class Funcionario {
	private:
		string nome;
		double salario;
		int cpf;
		int data_admissao;
		static int cont;
	public:
		// construtor
		Funcionario();
		// metodos
		string get_nome();
		void set_nome(string nome);
		double get_salario();
		void set_salario(double salario);
		int get_cpf();
		void set_cpf(int cpf);
		int get_cont();
		friend ostream& operator<< (ostream &o, Funcionario funcionario);
};

#endif