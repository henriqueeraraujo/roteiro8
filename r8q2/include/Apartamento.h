#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.h"

class Apartamento : public Imovel
{
    protected:
        string posicao;
        double valorDoCondominio;
        int numeroDeVagasNaGaragem;

    public:
        Apartamento();
        string getPosicao();
        double getValorDoCondominio();
        int getNumeroDeVagasNaGaragem();
        virtual ~Apartamento();
};

#endif // APARTAMENTO_H
