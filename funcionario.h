/**
* @file funcionario.h
* @brief Classe Funcionario
* @author Danilo Miranda de Medeiros Galvão, João Mendes Lopes Neto
* @since 29/04/2019
* @date 01/05/2019
*/

#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "data.h"

#include <string>
using namespace std;

class Funcionario {
	private:
		string nome;
		double salario;
		int cpf;
		Data data_admissao;
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
		Data get_data_admissao();
		void set_data_admissao(int d, int m, int a);
		int get_cont();
		
		/**
		* @brief CALCULA O TEMPO DO FUNCIONÁRIO NA EMPRESA
		* @return NÚMERO DE DIAS DO FUNCIONÁRIO NA EMPRESA
		*/
		int tempo_empresa();
		
		/**
		* @brief SOBRECARREGA OPERADOR DE INSERÇAO
		* @param funcionario FUNCIONÁRIO PARA SER VISUALIZADO
		* @return REFERÊNCIA PARA O OBJETO OSTREAM O
		*/
		friend ostream& operator<< (ostream &o, Funcionario funcionario);
};

#endif