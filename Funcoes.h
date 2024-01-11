// Funcoes.h
#ifndef FUNCOES_H
#define FUNCOES_H
#include <string.h>
#include <string>
#include <cstring>
#include <locale.h>
#include <iostream>
#include <mysql.h>
#include <limits> 
#include <ctime>
#include <locale.h>
#include <conio.h> 
#include <windows.h>
#include <sstream>
#include <string>
#include <ctime>

using namespace std; // Declara uma string para armazenar a consulta SQL como uma string

//Funções de telas
void Tela_ADDAK();//OK
void Tela_Selecao();//OK
void Campo_Cliente();//OK
void Campo_Produto();//OK
void Campo_Pedido();//OK
void Fim_do_Programa();//OK
//Funções de cadastro
void Cadastro_Produto();//OK
void Cadastro_Cliente();//OK
void NovoPedido();//OK
//Funções de visualização de DB
void DB_Cliente();//OK
void DB_Produto();//OK
//Funções de busca
void Busca_Cliente();//OK
void PedidosRegistrados();//OK
//funções de Modificação
void Modificar_Produto();//OK
void Modificar_Cliente();//OK
//Funções de Delete
void Delete_Cliente();//OK
//Funções avulsas
void Exibir_Detalhes_Produto(MYSQL* obj, int id);//Ok
void fecharMySQL(MYSQL* obj);//OK

char Validacao_De_Usuario();
#endif 
