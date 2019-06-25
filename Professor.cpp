#include "Professor.h"
#include "Pessoa.h"

void Professor :: set_matricula(long int x)
{
	matricula = x;
}

void Professor :: set_departamento(string y)        //PROCESSO DE DESENVOLVIMENTO DAS FUNÇÕES DECLARADAS DA CLASSE
{
	departamento = y;
}

int Professor :: get_matricula()
{
	return matricula;
}

string Professor :: get_departamento()
{
	return departamento;
}

Professor :: Professor()
{
	matricula = 0;  //PERGUNTAR AO MONITOR COMO FAZ ESSA INICIALIZAÇÃO, VISTO QUE, TEM UMA  MANEIRA PARA QUE OS MÉTODOS HERDADO JÁ VENHAM INICIALIZADOS TAMBÉM;
}

Professor cadastro2()        //FUNÇÃO QUE FAZ O CADASTRO. ELA CRIA UM OBJETO AUXILIAR E RETORNA ESTE PARA A MAIN, E LÁ ESSE OBJETO AUXILIAR É COLOCADO NO CONTEINER, COMPLETANDO O CADASTRO NO USUÁRIO;
{
	Professor aux;
	string aux1;
	int aux5;
	long int aux2;             //VARIÁVEIS AUXILIARES;
	Endereco aux3;
	DataNasc aux4;

	//AS IMPLEMENTAÇÕES DE LEITURA ESTÃO POSICIONADAS DE FORMA QUE A LEITURA SE DÊ AO LADO DE CADA CHAMADA DE COUT;
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
	aux.set_matricula(aux5);
	
	cout << "DIGITE O SEU DEPARTAMENTO: ";
	cin.ignore();
	getline(cin, aux1);
	cout << endl;
	aux.set_departamento(aux1);
	
	aux.set_dataNNasc(aux4);                      //SETANDO A AUXILIAR PARA JOGAR NO CONTEINER DE PROFESSORES;
	aux.set_Endereco(aux3);

	return (aux);

}
