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

//Fun��es de telas
void Tela_ADDAK();//OK
void Tela_Selecao();//OK
void Campo_Cliente();//OK
void Campo_Produto();//OK
void Campo_Pedido();//OK
void Fim_do_Programa();//OK
//Fun��es de cadastro
void Cadastro_Produto();//OK
void Cadastro_Cliente();//OK
void NovoPedido();//OK
//Fun��es de visualiza��o de DB
void DB_Cliente();//OK
void DB_Produto();//OK
//Fun��es de busca
void Busca_Cliente();//OK
void PedidosRegistrados();//OK
//fun��es de Modifica��o
void Modificar_Produto();//OK
void Modificar_Cliente();//OK
//Fun��es de Delete
void Delete_Cliente();//OK
//Fun��es avulsas
void Exibir_Detalhes_Produto(MYSQL* obj, int id);//Ok
void fecharMySQL(MYSQL* obj);//OK

char Validacao_De_Usuario();
#endif 
