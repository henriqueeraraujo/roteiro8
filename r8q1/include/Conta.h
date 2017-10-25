#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
#include <iostream>

using namespace std;

class Conta : public IConta
{
    protected:
        string nomeCliente, numeroConta;
        double salarioMensal, saldo, limite;



    public:
        Conta();
        Conta(string nomeCliente, double salarioMensal, double saldo, string numeroConta);

        string getnomeCliente();
        void setnomeCliente(string nomeCliente);

        double getsalarioMensal();
        void setsalarioMensal(double salarioMensal);

        double getsaldo();
        void setsaldo(double saldo);

        double getlimite();
        void setlimite(double limite);

        string getnumeroConta();
        void setnumeroConta(string);

        virtual void definirLimite();

        void sacar(double valor);
        void depositar(double valor);


        virtual ~Conta();
};

#endif // CONTA_H
