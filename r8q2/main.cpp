#include <iostream>
#include "Imovel.h"
#include "Casa.h"
#include "Terreno.h"
#include "Apartamento.h"

using namespace std;

int main()
{
    Imovel *imoveis[5];
    int i;

    imoveis[0]= new Casa();
    imoveis[1]= new Casa();
    imoveis[2]= new Terreno();
    imoveis[3]= new Terreno();
    imoveis[4]= new Apartamento();

    for(i=0 ; i<5 ; i++){
       cout <<imoveis[i]->getDescricao()<< endl;
    }
    for(i=0 ; i<5 ; i++){
       delete imoveis[i];
    }

    return 0;
}
