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
        string getDescricao();
        string getPosicao();
        double getValorDoCondominio();
        int getNumeroDeVagasNaGaragem();
        void setPosicao();
        void setValorDoCondominio();
        void setNumeroDeVagasNaGaragem();
        virtual ~Apartamento();
};

#endif // APARTAMENTO_H
