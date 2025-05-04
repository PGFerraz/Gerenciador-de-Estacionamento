#ifndef VEICULOS_H
#define VEICULOS_H
#include <iostream>
#include <string>

using namespace std;

class Veiculo
{
    private:
        string placa;
        int tipo_do_veiculo;
    public:
        Veiculo();
        ~Veiculo();
        void set_dados();
        void print_dados();
        int ret_tipo();
        string ret_placa();
};
#endif // VEICULOS_H
