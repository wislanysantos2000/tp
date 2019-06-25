#include "Bibliotecario.h"
#include "Pessoa.h"
void Bibliotecario :: set_identificador (int id) {
    
    identificador = id;

}

void Bibliotecario :: set_setor (string s) {
    
    setor = s;
    
}

int Bibliotecario :: get_identificador () {
    
    return identificador;
    
}

string Bibliotecario :: get_setor () {
    
    return setor;

}

Bibliotecario :: Bibliotecario () { 
    
    identificador = 0;
    
}

Bibliotecario Cadastro4() {
    
    Bibliotecario auxBibli;
    string auxString;
    int auxInt;
    long int auxLong;
    DataNasc auxData;
    
    cout << "PARA COMEÇAR, DIGITE SEU NOME:";
	cin.ignore();
	getline(cin, auxString);
	cout << endl;
	auxBibli.set_nome(auxString);
	
	cout << "DIGITE SEU SEXO: ";
	cin.ignore();
	getline(cin, auxString);
	cout << endl;
	auxBibli.set_sexo(auxString);
	
	cout << "DIGITE E-MAIL:";
	cin.ignore();
	getline(cin, auxString);
	cout << endl;
	auxBibli.set_email(auxString);
	
	cout << "CPF:";
	cin >> auxLong;
	cout << endl;
	auxBibli.set_CPF(auxLong);
	
	cout << "DIGITE SEU TELEFONE:";
	cin >> auxLong;
	cout << endl;
	auxBibli.set_telefone(auxLong);
	
	cout << "DIGITE O DIA QUE NASCEU: ";
	cin >> auxInt;
	cout << endl;
	auxData.dia = auxInt;
	
	cout << "DIGITE O MÊS QUE NASCEU: ";
	cin >> auxInt;
	cout << endl;
	auxData.mes =  auxInt;
	
	cout << "DIGITE O ANO QUE NASCEU: ";
	cin >> auxInt;
	cout << endl;
	auxData.ano = auxInt;
	
	cout << "ID";
	cin >> auxInt;
	cout << endl;
	auxBibli.set_identificador(auxInt);
	
	cout << "SETOR:";
	cin.ignore();
	getline(cin, auxString);
	cout << endl;
	auxBibli.set_setor(auxString);
	
	auxBibli.set_dataNNasc(auxData);
	
	return (auxBibli);
	
}