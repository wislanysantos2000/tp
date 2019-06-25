#include "Pessoa.h"

void Pessoa :: set_nome(string x)
{
	nome = x;
}

void Pessoa :: set_sexo(string y)
{
	sexo = y;
}

void Pessoa :: set_email(string k)
{
	email = k;
}

void Pessoa :: set_CPF(long int x)
{
	CPF = x;
}

void Pessoa :: set_telefone(long int y)
{
	telefone = y;
}

void Pessoa :: set_Endereco(Endereco u)
{
	EnderecoUsuario.Rua = u.Rua;
	EnderecoUsuario.Bairro = u.Bairro;        //PASSANDO A STRUCT NA SET DE MANEIRA MENOS DIRETA;
	EnderecoUsuario.cidade = u.cidade;
	EnderecoUsuario.numeroCasa = u.numeroCasa;
	
}

void Pessoa :: set_dataNNasc(DataNasc i)
{
	Datanasc.mes = i.mes;
	Datanasc.dia = i.dia;
	Datanasc.ano = i.ano;
}

string Pessoa :: get_nome()
{
	return nome;
}

string Pessoa :: get_sexo()
{
	return sexo;
}

string Pessoa ::  get_email()
{
	return email;
}

long int Pessoa :: get_CPF()
{
	return CPF;
}

long int Pessoa :: get_telefone()
{
	return telefone;
}

Pessoa :: Pessoa ()
{
	CPF = telefone = senha = 0; 
	Datanasc.dia = 0;				///////////////////////////////
	Datanasc.mes = 0;              //INICIALIZA STRUCT ASSIM????//
	Datanasc.ano = 0;			  ///////////////////////////////
	EnderecoUsuario.numeroCasa = 0;
}
///////////////////////////////////////////////////////
//PROCURAR SABER COMO FAZ O RETORNO DA DATA DE NASC;//
/////////////////////////////////////////////////////
//PROCURAR COMO FAZ O RETORNO DO ENDEREÇO;//////////
///////////////////////////////////////////////////