#include "data.h"

#include <iostream>
#include <string>

using namespace std;

Data::Data(){
}
Data::Data(int novo_dia, int novo_mes, int novo_ano){
	mes = novo_mes;
	dia = novo_dia;
	ano = novo_ano;
}
int Data::get_dia(){
	return dia;
}
void Data::set_dia(int novo_dia)
{
	dia = novo_dia;
}
int Data::get_mes(){
	return mes;
}
void Data::set_mes(int novo_mes){
	mes = novo_mes;
}
int Data::get_ano(){
	return ano;
}
void Data::set_ano(int novo_ano){
	ano = novo_ano;
}
int Data::operator-(Data d){
	int dias_mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int total_dias1 = 0, total_dias2 = 0;
	total_dias1 += (ano*365);
	total_dias1 += (ano/4);
	if(ano%4 == 0 && mes < 3){
		total_dias1 -= 1;
	}
	for(int i = 0; i < mes-1; i++){
		total_dias1 += dias_mes[i];
	}
	total_dias1 += dia;
	total_dias2 += (d.ano*365);
	total_dias2 += (d.ano/4);
	if(d.ano%4 == 0 && d.mes < 3){
		total_dias2 -= 1;
	}
	for(int j = 0; j < d.mes - 1; j++){
		total_dias2 += dias_mes[j];
	}
	total_dias2 += d.dia;
	return (total_dias2 - total_dias1);
}
ostream& operator<< (ostream &o, Data data){
	o << data.get_dia() << "/" << data.get_mes() << "/" << data.get_ano() << endl;
	return o;
}