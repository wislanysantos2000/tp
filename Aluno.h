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
	void set_matrPeri(int y, int x); //MÉTODO PARA SETAR MATRÍCULA E PERÍODO;
	void set_cursoTurno(string u, string i); //MÉTODO PARA SETAR O CURSO E O TURNO;
//	void valorMultas //

	int get_matricula();
	int get_periodo();
	string get_curso();       //MÉTODOS GET
	string get_turno();
	
//	float get_Multas(); //
	
};

Aluno cadastro3();
#endif
