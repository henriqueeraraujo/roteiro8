#ifndef ENDERECO_H
#define ENDERECO_H
#include <iostream>
#include <string>

using namespace std;


class Endereco
{
    protected:
        string cep, cidade, bairro, logradouro;
        int numero;


    public:
        Endereco();
        string getCep();
        string getCidade();
        string getBairro();
        string getLogradouro();
        int getNumero();
        void setCep();
        void setCidade();
        void setBairro();
        void setLogradouro();
        void setNumero();
        virtual ~Endereco();
};

#endif // ENDERECO_H
