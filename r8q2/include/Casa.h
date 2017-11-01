#ifndef CASA_H
#define CASA_H
#include "Imovel.h"

class Casa : public Imovel
{
    protected:
        int numeroDePavimentos, numeroDeQuartos;
        double areaDoTerreno, areaConstruida;

    public:
        Casa();
        string getDescricao();
        int getNumeroDePavimentos();
        int getNumeroDeQuartos();
        double getAreaDoTerreno();
        double getAreaConstruida();
        void setDescricao();
        void setNumeroDePavimentos();
        void setNumeroDeQuartos();
        void setAreaDoTerreno();
        void setAreaConstruida();
        virtual ~Casa();

};

#endif // CASA_H
