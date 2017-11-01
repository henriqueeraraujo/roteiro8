#ifndef IMOVEL_H
#define IMOVEL_H
#include "Endereco.h"




class Imovel
{
    protected:
        string descricao;
        Endereco endereco;

    public:
        Imovel();
        virtual string getDescricao()=0;
        virtual void setDescricao()=0;
        Endereco getEndereco();
        virtual ~Imovel();


};

#endif // IMOVEL_H
