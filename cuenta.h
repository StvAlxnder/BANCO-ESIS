#ifndef CUENTA_H
#define CUENTA_H

#include <iostream>
#include <string>
using namespace std;

struct cuenta{
    int ncuenta;
    float saldo;
    string DNI;
};

void crearc_bancaria(cuenta cuentas[], int &totCuentas, string DNI);
void mostrarc_bancaria(cuenta cuentas[], int totCuentas, string DNI);
int buscarCuenta(cuenta cuentas[], int totCuentas, int numeroCuenta, string DNI);
#endif
