#include <iostream>
#include <string>
#include "Veiculos.h"

using namespace std;

Veiculo::Veiculo()
    {
        placa = "Não informado";
        tipo_do_veiculo = 0;
    }
Veiculo::~Veiculo(){}
void Veiculo::set_dados()
    {
        cout << "\nDigite a placa do veículo: ";
        getline(cin>>ws,placa);
        cout << "\nDigite se o veículo é \"comum (1)\" ou \"prioritário (2)\": ";
        cin >> tipo_do_veiculo;
    }
void Veiculo::print_dados()
    {
        cout << "\nPlaca: " << placa << "\tPrioridade: " << tipo_do_veiculo;
    }
int Veiculo::ret_tipo()
    {
        return tipo_do_veiculo;
    }
string Veiculo::ret_placa()
        {
            return placa;
        }
