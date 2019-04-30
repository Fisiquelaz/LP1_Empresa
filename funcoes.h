#ifndef FUNCOES_H
#define FUNCOES_H

#include <string>
#include "./empresa.h"

void imprimir_menu();
void adicionar_empresa(vector<Empresa> &empresas);
void receber_cnpj_empresa(Empresa& empresa, vector<Empresa> &empresas);
int checar_cnpj_empresa(int cnpj, vector<Empresa> &empresas);
int listar_empresas(vector<Empresa> &empresas);
void adm_listar_empresas(vector<Empresa> &empresas);
void adicionar_funcionario(vector<Empresa> &empresas);
void receber_cpf_funcionario(Funcionario& funcionario, Empresa& empresa);
int checar_cpf_funcionario(int cpf, Empresa& empresa);
void criar_funcionario(Empresa& empresa);
void receber_data_funcionario(Funcionario& funcionario);
int receber_data_ano_funcionario(Funcionario& funcionario);
int receber_data_mes_funcionario(Funcionario& funcionario);
int receber_data_dia_funcionario(Funcionario& funcionario, int mes, int ano);
void receber_cnpj(int& posicao, vector<Empresa> &empresas);
void listar_funcionarios(Empresa& empresa);
void aumento(vector<Empresa> &empresas);
void experiencia(vector<Empresa> &empresas);
void listar_funcionarios_experientes(Empresa& empresa);
void calcular_media(Empresa& empresa,Funcionario& funcionario);
void teste();

#endif