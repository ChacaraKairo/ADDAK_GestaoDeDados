//____________Bibliotecas_______________//
/////////////////////////////////////////
#include <mysql.h>
#include <mysqld_error.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include "Funcoes.h"

//__________Fun��es________________//
////////////////////////////////////

//___________________
using namespace std;//evita o uso de std: em todas as fun��es padr�es do iostream
//___________________



//___________ Vari�veis globais___________//
///////////////////////////////////////////
char HOST[] = "localhost";
char USER[] = "Kairo";
char PASS[] = "";


//_____________int main_____________//
/////////////////////////////////////

int main(){

	//____Conex�o com o banco de dados______//
	//////////////////////////////////////////

	MYSQL* obj = mysql_init(0);
	
	char* consult; // Declara um ponteiro para armazenar a consulta SQL
    const char* sentence; // Declara uma constante para armazenar a senten�a SQL
    string sentence_aux; // Declara uma string para armazenar a consulta SQL como uma string

    // Inicializa o objeto MySQL
    if (!(obj = mysql_init(0))) {
        cout << "ERRO: O objeto MySQL n�o p�de ser criado." << endl;
        return 1;
    }

    // Tenta conectar ao banco de dados MySQL
    if (!mysql_real_connect(obj, HOST, USER, PASS, "addak", 3306, NULL, 0)) {
        cout << "ERRO: Algumas informa��es do banco de dados est�o erradas ou n�o existem." << endl;
        cout << mysql_error(obj) << endl;
        return 1;
    }
   
     //Cadastro(obj);
    Tela_ADDAK();

	//______________Final da conex�o com o banco de dados_____________//
	Fim_do_Programa();
	return 0; 
}
