#include "Casa.h"

Casa::Casa() : Imovel()
{
    //ctor
}
string Imovel::getDescricao(){
    return descricao;
}
int Casa::getNumeroDePavimentos(){
    return numeroDePavimentos;
}
int Casa::getNumeroDeQuartos(){
    return numeroDeQuartos;
}
double Casa::getAreaDoTerreno(){
    return areaDoTerreno;
}
double Casa::getAreaConstruida(){
    return areaConstruida;
}
void Imovel::setDescricao(){
    cout<<"Digite a descricao: ";
    getline(cin, descricao);
}
void Casa::setNumeroDePavimentos(){
    cout<<"Digite o Numero de pavimentos: ";
    cin>>numeroDePavimentos;
}
void Casa::setNumeroDeQuartos(){
    cout<<"Digite o numero de quartos: ";
    cin>>numeroDeQuartos;
}
void Casa::setAreaDoTerreno(){
    cout<<"Digite a area do terreno: ";
    cin>>areaDoTerreno;
}
void Casa::setAreaConstruida(){
    cout<<"Digite a area construida: ";
    cin>>areaConstruida;
}
Casa::~Casa()
{
    //dtor
}
