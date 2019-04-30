#ifndef FUNCOES_H
#define FUNCOES_H

#include <string>
#include "./empresa.h"

void imprimir_menu();
void adicionar_empresa(vector<Empresa> &empresas);
int listar_empresas(vector<Empresa> &empresas);
void adm_listar_empresas(vector<Empresa> &empresas);
void receber_cpf_funcionario(Funcionario& funcionario, Empresa& empresa);
int checar_cpf_funcionario(int cpf, Empresa& empresa);
void criar_funcionario(int qtd_f, int i, Empresa& empresa);
void receber_cnpj(int& posicao, vector<Empresa> &empresas);
void listar_funcionarios(Empresa& empresa);
void aumento(vector<Empresa> &empresas);
void experiencia(vector<Empresa> &empresas);
void teste();

#endif