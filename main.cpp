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

int main()
{
    int resp_menu, resp_switch;
    queue<Carro> entrada; // Fila de entrada de veículos    
    Carro veiculo;
    while(true)
    {
        cout << "\n========================================== ";
        cout << "\n  #  Gerenciamento de Estacionamento  #";
        cout << "\n========================================== ";
        cout << "\n\n    <1> Inserir Veículo";
        cout << "\n    <2> Remover Veículo";
        cout << "\n    <3> Mover Veículo";
        cout << "\n    <4> Listar Veículos";
        cout << "\n    <5> Histórico\n";
        cout << "\n==========================================";
        cout << "\n #  Digite a opção desejada: ";
        cin >> resp_menu;
        switch (resp_menu)
            case 1:
                system("clear");
                do{
                    system("clear");
                    veiculo.set_dados();
                    entrada.push(veiculo);
                    system("clear");
                    cout << "\nPronto, deseja inserir outro carro(1) ou voltar ao menu(2)? ";
                    cin >> resp_switch;
                    if(resp_switch==2)
                        break;
                }while(resp_switch==1);

    }
    return 0;
}
