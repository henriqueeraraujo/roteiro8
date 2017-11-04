#ifndef TERRENO_H
#define TERRENO_H
#include "Imovel.h"

class Terreno: public Imovel
{
    protected:
        double area;


    public:
        Terreno();
        string getDescricao();
        double getArea();
        void setArea();
        virtual ~Terreno();
};

#endif // TERRENO_H
