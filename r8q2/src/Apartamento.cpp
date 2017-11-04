#include "Apartamento.h"

Apartamento::Apartamento(): Imovel()
{
    descricao="Apartamento";
}
string Apartamento::getDescricao(){
    return descricao;
}
string Apartamento::getPosicao(){
    return posicao;
}
double Apartamento::getValorDoCondominio(){
    return valorDoCondominio;
}
int Apartamento::getNumeroDeVagasNaGaragem(){
    return numeroDeVagasNaGaragem;
}
void Apartamento::setPosicao(){
    cout<<"Digite a posicao: ";
    getline(cin, posicao);
}
void Apartamento::setValorDoCondominio(){
    cout<<"Digite o valor do condominio: ";
    cin>>valorDoCondominio;
}
void Apartamento::setNumeroDeVagasNaGaragem(){
    cout<<"Digite o Numero de vagas na garagem: ";
    cin>>numeroDeVagasNaGaragem;
}
Apartamento::~Apartamento()
{
    //dtor
}
