#include "Pessoa.h"
#ifndef ALUNO_H
#define ALUNO_H

using namespace std;

class Aluno : public Pessoa
{
	
protected:
	
	int matricula, periodo;
	string curso, turno;
	float valorMultas;          //PRECISA VER COMO VAI FAZER COM ESSE ATRIBUTO;
	
public:
	
	Aluno();
	void set_matrPeri(int y, int x); //M�TODO PARA SETAR MATR�CULA E PER�ODO;
	void set_cursoTurno(string u, string i); //M�TODO PARA SETAR O CURSO E O TURNO;
//	void valorMultas //

	int get_matricula();
	int get_periodo();
	string get_curso();       //M�TODOS GET
	string get_turno();
	
//	float get_Multas(); //
	
};

Aluno cadastro3();
#endif
