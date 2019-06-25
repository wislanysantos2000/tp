#include <stdlib.h>
#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include <vector>
#include "Pessoa.h"
#include "Professor.h"
#include "Aluno.h"
#include "Bibliotecario.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int tipo;
	long int senha;
	vector <Aluno> Alunos;           //CRIA��O DE UM CONTEINER DO TIPO VECTOR PARA ALOCA��O DIN�MICA;
	vector <Aluno>:: iterator p;
	vector <Professor> Professores;           //CRIA��O DE UM CONTEINER DO TIPO VECTOR PARA ALOCA��O DIN�MICA;
	vector <Professor>:: iterator pp;
	vector <Bibliotecario> Bibliotecarios;           //CRIA��O DE UM CONTEINER DO TIPO VECTOR PARA ALOCA��O DIN�MICA;
	vector <Bibliotecario>:: iterator ppp;


	cout << " ************************************************************************************************" << endl;
	cout << " *                            BEM VINDO AO SISTEMA BIBLIOTEC�RIO" << "                                *" << endl;
	cout << " *                                                                                              *" << endl;
//	cout << " ***********************************************************************************************" << endl;

	cout << " * DIGITE QUE TIPO DE USU�RIO F�SICO VOC� � OU, SE AINDA N�O � CADASTRADO, DIGITE ESTA OP��O:" << "   *" << endl;
	cout << " *                       (1) ALUNO  (2) PROFESSOR  (3) BIBLIOTEC�RIO (4) CADASTRO" << "               *" << endl;
	cout << " *                                                                                              *" << endl;
	cout << " ************************************************************************************************" << endl;

	cin >> tipo;

	system("cls");
	for(int i = 0; i < 15; i++ )
	{
		cout << "                                               CARREGANDO";
		cout << ".";
		Sleep(100);
		cout << ".";
		Sleep(100);
		cout << ".";
		system("cls");

	}

	switch(tipo)
	{
	case(1):

		cout << "                     BEM VINDO, ALUNO. POR FAVOR, PARA COMPLETAR SEU ACESSO PREENCHA O CAMPO DE LOGIN:" << endl;
		cout << "          *********************************************************************************************************" << endl;
		cout << "                                                  MATR�CULA: ";
		cin >> senha; //PROCESSO DE LOGINS
		cout << "                                                  SENHA: ";
		cin >> senha;

		break;

	case(2):

		cout << "                     BEM VINDO, PROFESSOR. POR FAVOR, PARA COMPLETAR SEU ACESSO PREENCHA O CAMPO DE LOGIN:" << endl;
		cout << "          *********************************************************************************************************" << endl;
		cout << "                                                  MATR�CULA: ";
		cin >> senha;
		cout << "                                                  SENHA: ";
		cin >> senha;

		break;

	case(3):

		cout << "                     BEM VINDO, BIBLIOTEC�RIO. POR FAVOR, PARA COMPLETAR SEU ACESSO PREENCHA O CAMPO DE LOGIN:" << endl;
		cout << "          *********************************************************************************************************" << endl;
		cout << "                                                  MATR�CULA: ";
		cin >> senha;
		cout << "                                                  SENHA: ";
		cin >> senha;

		break;

	case(4):           //PROCESSO DE CADASTRO
		cout << "*********************************************************************************************************" << endl;
		cout << "OL�, CARO(A) USU�RIO, POR FAVOR NOS INFORME QUAL SEU PERFIL NO SISTEMA:" << endl;
		cout << "*********************************************************************************************************" << endl;
		cout << "                (1) PROFESSOR  (2) ALUNO    (3) BIBLIOTEC�RIO " << endl;
		cin >> tipo;

		switch (tipo)
		{

		case(1):
			system("cls");
			
			for(int i = 0; i < 15; i++ )
			{
				cout << "                                               CARREGANDO";
				cout << ".";
				Sleep(100);
				cout << ".";
				Sleep(100);
				cout << ".";
				system("cls");

			}

			Professores.push_back(cadastro2());                   //CONVOCA��O DA FUN��O CADASTRO PARA PROFESSORES
			
			break;
		
		case(2):
			
			system("cls");
			
			for(int i = 0; i < 15; i++ )
			{
				cout << "                                               CARREGANDO";
				cout << ".";
				Sleep(100);
				cout << ".";
				Sleep(100);
				cout << ".";
				system("cls");

			}

			Alunos.push_back(cadastro3());
			
		   	break;
		   
	  case(3):
			
			system("cls");
			
			for(int i = 0; i < 15; i++ )
			{
				cout << "                                               CARREGANDO";
				cout << ".";
				Sleep(100);
				cout << ".";
				Sleep(100);
				cout << ".";
				system("cls");

			}

			Bibliotecarios.push_back(Cadastro4());
			
		   	break;	
		
		}
		
	
	}


}
