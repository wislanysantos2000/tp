#include "Pessoa.h"
#ifndef BIBLIOTECARIO_H
#define BIBLIOTECARIO_H

using namespace std;

class Bibliotecario : public Pessoa { 
    
    protected:
        
        int identificador;
        string setor;
    
    public:
        
        Bibliotecario ();
        void set_identificador (int id);
        void set_setor (string s);
        
        int get_identificador ();
        string get_setor ();
        
};

Bibliotecario Cadastro4();

#endif
