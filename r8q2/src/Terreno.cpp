#include "Terreno.h"

Terreno::Terreno() : Imovel()
{
    descricao="Terreno";
}
string Terreno::getDescricao(){
    return descricao;
}
double Terreno::getArea(){
    return area;
}
void Terreno::setArea(){
    cout<<"Digite a area do terreno: ";
    cin>>area;
}
Terreno::~Terreno()
{
    //dtor
}
