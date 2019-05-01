/**
* @file funcoes.h
* @brief Cabeçalhos das funções principais para execução do programa
* @author Danilo Miranda de Medeiros Galvão, João Mendes Lopes Neto
* @since 29/04/2019
* @date 01/05/2019
*/

#ifndef FUNCOES_H
#define FUNCOES_H

#include <string>
#include "./empresa.h"

void imprimir_menu();

void adicionar_empresa(vector<Empresa> &empresas);

/**
* @brief RECEBE CNPJ DA EMPRESA
*/
void receber_cnpj_empresa(Empresa& empresa, vector<Empresa> &empresas);

/**
* @brief CHECA SE JÁ EXISTE UMA EMPRESA COM O MESMO CNPJ
*/
int checar_cnpj_empresa(int cnpj, vector<Empresa> &empresas);

/**
* @brief LISTA EMPRESAS
* @return 1 caso haja empresas para serem listadas; 0 caso contrário
*/
int listar_empresas(vector<Empresa> &empresas);

/**
* @brief LISTA EMPRESAS E LISTA FUNCIONARIOS DA EMPRESA SELECIONADA
*/
void listar_funcionarios_empresas(vector<Empresa> &empresas);

void adicionar_funcionario(vector<Empresa> &empresas);

/**
* @brief RECEBE CPF DE UM FUNCIONÁRIO
*/
void receber_cpf_funcionario(Funcionario& funcionario, Empresa& empresa);

/**
* @brief CHECA SE JÁ EXISTE UM FUNCIONÁRIO NA MESMA EMPRESA COM O CPF RECEBIDO
*/
int checar_cpf_funcionario(int cpf, Empresa& empresa);

void criar_funcionario(Empresa& empresa);

/**
* @brief RECEBE A DATA DE ADMISSÃO DE UM FUNCIONÁRIO
*/
void receber_data_funcionario(Funcionario& funcionario);

/**
* @brief RECEBE O ANO DA DATA DE ADMISSÃO DE UM FUNCIONÁRIO
*/
int receber_data_ano_funcionario(Funcionario& funcionario);

/**
* @brief RECEBE O MES DA DATA DE ADMISSÃO DE UM FUNCIONÁRIO
*/
int receber_data_mes_funcionario(Funcionario& funcionario);

/**
* @brief RECEBE O DIA DA DATA DE ADMISSÃO DE UM FUNCIONÁRIO
*/
int receber_data_dia_funcionario(Funcionario& funcionario, int mes, int ano);

/**
* @brief RECEBE CNPJ E ALTERA O VALOR DA VARIÁVEL "posicao" PARA A POSICAO DA EMPRESA ESCOLHIDA
*/
void receber_cnpj(int& posicao, vector<Empresa> &empresas);

/**
* @brief LISTA FUNCIONÁRIOS DE UMA EMPRESA
*/
void listar_funcionarios(Empresa& empresa);

/**
* @brief SELECIONA EMPRESA PARA DAR AUMENTO AOS FUNCIONÁRIOS
*/
void aumento(vector<Empresa> &empresas);

/**
* @brief SELECIONA EMPRESA PARA LISTAR FUNCIONÁRIOS EM PERÍODO DE EXPERIÊNCIA
*/
void experiencia(vector<Empresa> &empresas);

/**
* @brief LISTA FUNCIONÁRIOS EM PERÍODO DE EXPERIÊNCIA
*/
void listar_funcionarios_em_experiencia(Empresa& empresa);

/**
* @brief CALCULA MÉDIA ENTRE FUNCIONÁRIOS E EMPRESAS
*/
void calcular_media(Empresa& empresa,Funcionario& funcionario);

#endif