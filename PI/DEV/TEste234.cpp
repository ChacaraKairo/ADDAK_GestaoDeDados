#include <iostream> // Inclui a biblioteca de entrada/saída padrão em C++
#include <mysql.h>  // Inclui a biblioteca MySQL C API
#include <mysqld_error.h> // Biblioteca que parece ser um erro de digitação, não é padrão
#include <string> // Inclui a biblioteca para usar strings
#include <stdio.h> // Inclui a biblioteca para funções de entrada/saída em C
#include <stdlib.h>
#include <locale.h>


//telas
void Tela_ADDAK(int &seguir);
int Fim_do_Programa();
void cadastro_teste(MYSQL* obj);
using namespace std;
// Variáveis globais
char HOST[] = "localhost";
char USER[] = "Kairo";
char PASS[] = "@Kepc1234";

int main() {
    MYSQL* obj;

    if (!(obj = mysql_init(0))) {
        cout << "ERRO: O objeto MySQL não pôde ser criado." << endl;
        return 1;
    }

    if (!mysql_real_connect(obj, HOST, USER, PASS, "teste", 3306, NULL, 0)) {
        cout << "ERRO: Algumas informações do banco de dados estão erradas ou não existem." << endl;
        cout << mysql_error(obj) << endl;
        return 1;
    }

    int seguir = 1; // Inicializa seguir
    while (seguir) {
        Tela_ADDAK(seguir);

        if (seguir == 0) {
            cadastro_teste(obj);
        }
    }

    Fim_do_Programa();
    return 0;
}
// TEla inicial
/*Precisa das bibliotecas 
<locale.h>
<stdio.h>
<stdlib.h>
*/
void Tela_ADDAK(int &seguir){
	int senha;
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
//fim
int  Fim_do_Programa(){
	char* consult;
		cout << "Programa Finalizado!" << endl;

    delete[] consult; // Libera a memória alocada para a 
    return 0;
}
//cadastro
void cadastro_teste(MYSQL* obj){
	
    int Id_pessoa; // Declara uma variável para armazenar o ID da pessoa
    char nome[15]; // Declara um array de caracteres para armazenar o nome da pessoa
    string nascimento; // Usar string para armazenar a data de nascimento
    char sexo; // Declara uma variável para armazenar o sexo da pessoa
char opcao;//variavel para escolher opção no menu 1
    bool ProgramIsOpened = true; // Declara uma variável booleana para controlar o programa
    int answer; // Declara uma variável para armazenar a resposta do usuário
int seguir;//liga com a função Tela_ADDAK
    char* consult; // Declara um ponteiro para armazenar a consulta SQL
    const char* sentence; // Declara uma constante para armazenar a sentença SQL
    string sentence_aux; // Declara uma string para armazenar a consulta SQL como uma string

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
            } }
