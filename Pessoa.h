#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>

using namespace std;

struct Endereco                   //STRUCT QUE RECEBE O ENDEREÇO
{
	string Rua, Bairro, cidade;
	int numeroCasa;
};

struct DataNasc
{
	int dia, mes, ano;                    //STRUCT QUE RECEBE A DATA DE NASCIMENTO
};

class Pessoa //CLASSE PAI, ONDE ESTÃO OS DADOS MAIS INTERNOS DE CADA USUÁRIO;
{
	
protected:
	
	string nome, sexo, email;
	int senha;         
	long int CPF, telefone;                 //MEMBROS INTERNOS DE CADA USUÁRIO;
	Endereco EnderecoUsuario;
	DataNasc Datanasc;
	
public:
	
	Pessoa();                             //CONSTRUTOR INICIALIZADOR DA CLASSE
	void set_nome(string x);
	void set_sexo(string y);             // FUNÇÕES SET PARA CADA ATRIBUTO;
	void set_email(string k);
	void set_CPF(long int x);
	void set_telefone(long int y);
	void set_Endereco(Endereco u);
	void set_dataNNasc(DataNasc i);
	
	string get_nome();
	string get_sexo();                      //MÉTODOS GET PARA CADA ATRIBUTO;
	string get_email();
	long int get_CPF();
	long int get_telefone();
	Endereco get_Endereco();
	DataNasc get_dataNasc();
	
};

#endif