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
		int operator-(Data d);
		friend ostream& operator<< (ostream &o, Data data);
};

#endif