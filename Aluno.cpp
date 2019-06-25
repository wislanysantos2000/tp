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

Aluno cadastro3()        //FUNÇÃO QUE FAZ O CADASTRO. ELA CRIA UM OBJETO AUXILIAR E RETORNA ESTE PARA A MAIN, E LÁ ESSE OBJETO AUXILIAR É COLOCADO NO CONTEINER, COMPLETANDO O CADASTRO NO USUÁRIO;
{
	Aluno aux;
	string aux1, aux6;
	int aux5, aux7;
	long int aux2;             //VARIÁVEIS AUXILIARES;
	Endereco aux3;
	DataNasc aux4;


	cout << "PARA COMEÇAR, DIGITE SEU NOME: ";
	cin.ignore();
	getline(cin, aux1);
	cout << endl;
	aux.set_nome(aux1);  
	                  //FUNÇÃO DO OBJETO AUXILIAR PARA SALVAR O NOME;
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
	
	cout << "DIGITE O MÊS QUE NASCEU: ";
	cin >> aux5;
	cout << endl;
	aux4.mes =  aux5;
	
	cout << "DIGITE O ANO QUE NASCEU: ";
	cin >> aux5;
	cout << endl;
	aux4.ano = aux5;
	
	cout << "DIGITE AGORA A RUA EM QUE VOCÊ MORA: ";
	cin.ignore();
	getline(cin, aux1);
	cout << endl;
	aux3.Rua = aux1;
	
	cout << "DIGITE AGORA O BAIRRO EM QUE VOCÊ MORA: ";
	cin.ignore();
	getline(cin, aux1);
	cout << endl;
	aux3.Bairro = aux1;
	
	cout << "DIGITE AGORA A CIDADE EM QUE VOCÊ MORA: ";
	cin.ignore();
	getline(cin, aux1);
	cout << endl;
	aux3.cidade = aux1;
	
	cout << "DIGITE AGORA A NÚMERO DA CASA EM QUE VOCÊ MORA: ";
	cin >> aux5;
	cout << endl;
	aux3.numeroCasa  = aux5;
	
	cout << "DIGITE SUA MATRÍCULA: ";
	cin >> aux5;
	cout << endl;
	
	cout << "DIGITE O SEU PERÍODO ATUAL: ";
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

