/**
* @file data.h
* @brief Classe Data
* @author Danilo Miranda de Medeiros Galvão, João Mendes Lopes Neto
* @since 29/04/2019
* @date 01/05/2019
*/

#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <string>
using namespace std;

class Data
{
	private:
		int dia, mes, ano;
	public:
		//Construtores
		Data();
		Data(int novo_mes, int novo_dia, int novo_ano);
		//Métodos
		int get_dia();
		void set_dia(int novo_dia);
		
		int get_mes();
		void set_mes(int novo_mes);
		
		int get_ano();
		void set_ano(int novo_ano);
		
		/**
		* @brief SOBRECARREGA OPERADOR DE SUBTRAÇÃO
		* @param d DATA A SER DIMINUIDA DA DATA ORIGINAL
		* @return NÚMERO DE DIAS ENTRE AS DATAS
		*/
		int operator-(Data d);
		
		/**
		* @brief SOBRECARREGA OPERADOR DE INSERÇAO
		* @param data DATA PARA SER VISUALIZADA NO FORMATO DD/MM/AAAA
		* @return REFERÊNCIA PARA O OBJETO OSTREAM O
		*/
		friend ostream& operator<< (ostream &o, Data data);
};

#endif