#include "Imovel.h"

Imovel::Imovel()
{
    endereco = Endereco();
}
Endereco Imovel::getEndereco(){
    return endereco;
}
Imovel::~Imovel()
{
    //dtor
}
