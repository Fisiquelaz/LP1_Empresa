/**
* @file empresa.h
* @brief Classe Empresa
* @author Danilo Miranda de Medeiros Galvão, João Mendes Lopes Neto
* @since 29/04/2019
* @date 01/05/2019
*/

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
		int get_cont();
		
		/**
		* @brief ADICIONA UM FUNCIONÁRIO À LISTA DE FUNCIONÁRIOS
		*/
		void add_funcionario(Funcionario funcionario);
		
		/**
		* @brief DÁ AUMENTO A TODOS OS FUNCIONÁRIOS DA EMPRESA
		* @param porcento PORCENTAGEM DE AUMENTO A SER DADA
		*/
		void conceder_aumento(double porcento);
		
		/**
		* @brief SOBRECARREGA OPERADOR DE INSERÇAO
		* @param empresa EMPRESA PARA SER VISUALIZADA
		* @return REFERÊNCIA PARA O OBJETO OSTREAM O
		*/
		friend ostream& operator<< (ostream &o, Empresa empresa);
};

#endif