#include <iostream>
#include <queue>
#include <deque>
#include <list>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class Veiculo
{
    private:
        string placa;
        int tipo_do_veiculo;
    public:
        Veiculo()
        {
            placa = "Não informado";
            tipo_do_veiculo = 0;
        }
        ~Veiculo(){}
        void set_dados()
        {
            cout << "\nDigite a placa do veículo: ";
            getline(cin>>ws,placa);
            cout << "\nDigite se o veículo é \"comum (1)\" ou \"prioritário (2)\": ";
            cin >> tipo_do_veiculo;
        }
        void print_dados()
        {
            cout << "\nPlaca: " << placa << "\tPrioridade: " << tipo_do_veiculo;
        }
        int ret_tipo()
        {
            return tipo_do_veiculo;
        }
        
};
