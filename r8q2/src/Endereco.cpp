#include "Endereco.h"

Endereco::Endereco()
{
    //ctor
}
string Endereco::getCep(){
    return cep;
}
string Endereco::getCidade(){
    return cidade;
}
string Endereco::getBairro(){
    return bairro;
}
string Endereco::getLogradouro(){
    return logradouro;
}
int Endereco::getNumero(){
    return numero;
}
void Endereco::setCep(){
    cout<<"Digite o Cep: ";
    getline(cin, cep);
}
void Endereco::setCidade(){
    cout<<"Digite a Cidade: ";
    getline(cin, cidade);
}
void Endereco::setBairro(){
    cout<<"Digite o bairro: ";
    getline(cin, bairro);
}
void Endereco::setLogradouro(){
    cout<<"Digite o logradouro: ";
    getline(cin, logradouro);
}
void Endereco::setNumero(){
    cout<<"Digite o numero: ";
    cin>>numero;
}
Endereco::~Endereco()
{
    //dtor
}
