#include <iostream> // Inclui a biblioteca de entrada/saída padrão em C++
#include <mysql.h>  // Inclui a biblioteca MySQL C API
#include <mysqld_error.h> // Biblioteca que parece ser um erro de digitação, não é padrão
#include <string> // Inclui a biblioteca para usar strings
#include <stdio.h> // Inclui a biblioteca para funções de entrada/saída em C
#include <stdlib.h>
#include <locale.h>


//telas
void Tela_ADDAK();
int Fim_do_Programa();

using namespace std;

// Variáveis para configuração do banco de dados MySQL
char HOST[] = "localhost"; // Endereço do servidor MySQL
char USER[] = "Kairo";     // Nome de usuário do MySQL
char PASS[] = "@Kepc1234"; // Senha do usuário do MySQL

int main() {
	
    MYSQL* obj; // Declara um ponteiro para a estrutura MYSQL (usado para se conectar ao MySQL)
    int Id_pessoa; // Declara uma variável para armazenar o ID da pessoa
    char nome[15]; // Declara um array de caracteres para armazenar o nome da pessoa
    string nascimento; // Usar string para armazenar a data de nascimento
    char sexo; // Declara uma variável para armazenar o sexo da pessoa
char opcao;//variavel para escolher opção no menu 1
int seguir;
    bool ProgramIsOpened = true; // Declara uma variável booleana para controlar o programa
    int answer; // Declara uma variável para armazenar a resposta do usuário
    char* consult; // Declara um ponteiro para armazenar a consulta SQL
    const char* sentence; // Declara uma constante para armazenar a sentença SQL
    string sentence_aux; // Declara uma string para armazenar a consulta SQL como uma string

    // Inicializa o objeto MySQL
    if (!(obj = mysql_init(0))) {
        cout << "ERRO: O objeto MySQL não pôde ser criado." << endl; // Se a inicialização do objeto MySQL falhar
    } else {
        // Tenta conectar ao banco de dados MySQL
        if (!mysql_real_connect(obj, HOST, USER, PASS, "teste", 3306, NULL, 0)) {
            cout << "ERRO: Algumas informações do banco de dados estão erradas ou não existem." << endl; // Se a conexão ao banco de dados falhar
            cout << mysql_error(obj) << endl; // Exibe uma mensagem de erro do MySQL
        }else  //Parte Visivel para o usuario
		{
        	////////////////       Tela Inicial ADDAK    /////////////////////////
Tela_ADDAK();
//confimação de senha
if(seguir == 0){
        	printf("Qual acao sera executada?\n");
        	printf("[c] Cadastro\n");
        	printf("Opcao: ");
        	scanf(" %c", &opcao);
        	system("cls");
        	
            /*cout << "Logado." << endl << endl;*/ // Conexão bem-sucedida ao MySQL
switch (opcao){
	case 'c':
            while (ProgramIsOpened) {
                /*cout << "Declare 0 em ID" << endl;
                cout << "Id_pessoa: ";
                cin >> Id_pessoa;*/
                setlocale(LC_ALL,"Portuguese");
                cin.ignore(100, '\n');
                cout << endl;
                Id_pessoa = 0;

                cout << "Nome: ";
                cin.getline(nome, 15, '\n');
                cout << endl;

                cout << "Data de Nascimento: (Modelo: AAAA-MM-DD)" << endl;
                cin >> nascimento;
                cin.ignore(100, '\n');
                cout << endl;

                cout << "Sexo: ";
                cin >> sexo;
                cout << endl;

                sentence_aux = "INSERT INTO pessoa(Id_pessoa, nome, nascimento, sexo) VALUES(%d, '%s', '%s', '%c')";
                sentence = sentence_aux.c_str(); // Converte a consulta SQL para const char*

                consult = new char[sentence_aux.length() + 50];
                // Formata a consulta SQL com os valores inseridos
                sprintf(consult, sentence, Id_pessoa, nome, nascimento.c_str(), sexo);

                // Verifica se é possível conectar ao MySQL
                if (mysql_ping(obj)) {
                    cout << "ERRO: Impossível conectar." << endl;
                    cout << mysql_error(obj) << endl; // Exibe uma mensagem de erro do MySQL
                }

                // Executa a consulta SQL
                if (mysql_query(obj, consult)) {
                    cout << "ERRO: " << mysql_error(obj) << endl; // Se a consulta SQL falhar, exibe o erro
                    cin.ignore(100, '\n');
                    getchar();
                } else {
                    cout << "Informações adicionadas corretamente." << endl; // Se a inserção for bem-sucedida
                }

                mysql_store_result(obj); // Armazena o resultado da consulta (se houver)
                cout << endl << "Adicionar novo cadastro?" << endl;
                cout << "[1]: Sim" << endl;
                cout << "[0]: Não" << endl;
                cout << "Resposta: ";
                system("pause");
system("cls");
                cin >> answer;
                cout << endl;

                if (answer == 0) {
                    ProgramIsOpened = false; // Define a variável para encerrar o programa
                }
            } break;//case c
            
            default: printf("Esta opção é inválida");
        }
    }
    	}
	//FIM
	int  Fim_do_Programa();
}
}
// TEla inicial
/*Precisa das bibliotecas 
<locale.h>
<stdio.h>
<stdlib.h>
*/
void Tela_ADDAK(){
	int senha, seguir;
const int senha_Kairo = 123;
const int senha_Diogo = 123;
const int senha_Diego = 123;
const int senha_Adriano = 123;
do {
	setlocale(LC_ALL,NULL);
/*1*/printf("\xDB\xDB\xDF\xDF\xDF\xDB\xDC \xDB\xDF\xDF\xDF\xDF\xDC  \xDB\xDF\xDF\xDF\xDF\xDC  \xDB\xDB\xDF\xDF\xDF\xDB\xDC \xDB    \xDC\xDF\n");
/*2*/printf("\xDB     \xDB \xDB     \xDB \xDB     \xDB \xDB     \xDB \xDB   \xDC\xDF\n");
/*3*/printf("\xDB     \xDB \xDB     \xDB \xDB     \xDB \xDB     \xDB \xDB \xDC\xDF\n");
/*4*/printf("\xDB\xDC\xDC\xDC\xDC\xDC\xDB \xDB     \xDB \xDB     \xDB \xDB\xDC\xDC\xDC\xDC\xDC\xDB \xDB\xDC\xDF\n");
/*5*/printf("\xDB     \xDB \xDB     \xDB \xDB     \xDB \xDB     \xDB \xDB \xDF\xDC\n");
/*6*/printf("\xDB     \xDB \xDB     \xDB \xDB     \xDB \xDB     \xDB \xDB  \xDF\xDC\n");
/*7*/printf("\xDB     \xDB \xDB\xDC\xDC\xDC\xDC\xDF  \xDB\xDC\xDC\xDC\xDC\xDF  \xDB     \xDB \xDB   \xDF\xDC\n");
setlocale(LC_ALL,"Portuguese");
printf("ACREDITAMOS NO DESENVOLVIMENTO SUSTENTÁVEL");
printf("\n");
printf("\n");
printf("\n");
printf("Senha: \n");
scanf(" %d", &senha);
system("pause");
system("cls");
}while(senha != senha_Adriano && senha != senha_Diego && senha != senha_Diogo && senha != senha_Kairo );
if( senha == senha_Adriano || senha == senha_Diego || senha == senha_Diogo || senha == senha_Kairo){
seguir = 0;	
} else seguir = 1;
}
//Fim
int  Fim_do_Programa(){
	char* consult;
		cout << "Programa Finalizado!" << endl;

    delete[] consult; // Libera a memória alocada para a 
    return 0;
}
