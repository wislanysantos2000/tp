#include "Pessoa.h"
#ifndef PROFESSOR_H
#define PROFESSOR_H

class Professor : public Pessoa //PROCESO ONDE OCORRE A HERANÇA DA CLASSE PAI PARA A FILHO;
{
	
protected:
	
	int matricula;
	string departamento;
	
public:
	
	Professor();
	void set_matricula(long int x);
	void set_departamento(string y);
	
	int get_matricula();
	string get_departamento();
};

Professor cadastro2();

#endif