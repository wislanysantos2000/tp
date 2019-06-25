#include "Aluno.h"

void Aluno :: set_matrPeri(int y, int x)
{
	matricula = y;
	periodo = x;
}

void Aluno :: set_cursoTurno(string u, string i)
{
	curso = u;
	turno = i;
}

Aluno :: Aluno()
{
	matricula = periodo = 0;
}

Aluno cadastro3()        //FUN��O QUE FAZ O CADASTRO. ELA CRIA UM OBJETO AUXILIAR E RETORNA ESTE PARA A MAIN, E L� ESSE OBJETO AUXILIAR � COLOCADO NO CONTEINER, COMPLETANDO O CADASTRO NO USU�RIO;
{
	Aluno aux;
	string aux1, aux6;
	int aux5, aux7;
	long int aux2;             //VARI�VEIS AUXILIARES;
	Endereco aux3;
	DataNasc aux4;


	cout << "PARA COME�AR, DIGITE SEU NOME: ";
	cin.ignore();
	getline(cin, aux1);
	cout << endl;
	aux.set_nome(aux1);  
	                  //FUN��O DO OBJETO AUXILIAR PARA SALVAR O NOME;
	cout << "DIGITE SEU SEXO: ";
	cin.ignore();
	getline(cin, aux1);
	cout << endl;
	aux.set_sexo(aux1);
	
	cout << "DIGITE E-MAIL: ";
	cin.ignore();
	getline(cin, aux1);
	cout << endl;
	aux.set_email(aux1);
	
	cout << "DIGITE SEU CPF: ";
	cin >> aux2;
	cout << endl;
	aux.set_CPF(aux2);
	
	cout << "DIGITE SEU TELEFONE:";
	cin >> aux2;
	cout << endl;
	aux.set_telefone(aux2);
	
	cout << "DIGITE O DIA QUE NASCEU: ";
	cin >> aux5;
	cout << endl;        //ARMAZENAMENTO NAS STRUCTS AUXILIARES PARA QUE SEJAM ATRIBUIDOS OS VALORES DOS ATRIBUTOS;
	aux4.dia = aux5;
	
	cout << "DIGITE O M�S QUE NASCEU: ";
	cin >> aux5;
	cout << endl;
	aux4.mes =  aux5;
	
	cout << "DIGITE O ANO QUE NASCEU: ";
	cin >> aux5;
	cout << endl;
	aux4.ano = aux5;
	
	cout << "DIGITE AGORA A RUA EM QUE VOC� MORA: ";
	cin.ignore();
	getline(cin, aux1);
	cout << endl;
	aux3.Rua = aux1;
	
	cout << "DIGITE AGORA O BAIRRO EM QUE VOC� MORA: ";
	cin.ignore();
	getline(cin, aux1);
	cout << endl;
	aux3.Bairro = aux1;
	
	cout << "DIGITE AGORA A CIDADE EM QUE VOC� MORA: ";
	cin.ignore();
	getline(cin, aux1);
	cout << endl;
	aux3.cidade = aux1;
	
	cout << "DIGITE AGORA A N�MERO DA CASA EM QUE VOC� MORA: ";
	cin >> aux5;
	cout << endl;
	aux3.numeroCasa  = aux5;
	
	cout << "DIGITE SUA MATR�CULA: ";
	cin >> aux5;
	cout << endl;
	
	cout << "DIGITE O SEU PER�ODO ATUAL: ";
	cin >> aux7;
	cout << endl;
	
	cout << "DIGITE SEU CURSO: ";
	cin.ignore();
	getline(cin, aux1);
	cout << endl;
	
	cout << "DIGITE SEU TURNO: ";
	cin.ignore();
	getline(cin, aux6);
	cout << endl;

	aux.set_matrPeri(aux5, aux7);
	aux.set_cursoTurno(aux1, aux6);              //SETANDO O OBJETO AUXILIAR PARA JOGAR NO CONTEINER DE ALUNOS;
	aux.set_dataNNasc(aux4);
	aux.set_Endereco(aux3);

	return (aux);

}

