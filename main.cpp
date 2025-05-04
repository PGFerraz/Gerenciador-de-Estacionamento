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
    int resp_menu=0, resp_switch;
    string resp_vag1;
    queue<Veiculo> entrada, entcopia; // Fila de entrada de veículos
    vector<int> vagas;
    list<Veiculo> estacionados, estcopia, estorg;

    Veiculo temp;
    while(true)
    {
        system("clear");
        cout << "\n========================================== ";
        cout << "\n  #  Gerenciamento de Estacionamento  #";
        cout << "\n========================================== ";
        cout << "\n\n    <1> Inserir Veículo";
        cout << "\n    <2> Remover Veículo";
        cout << "\n    <3> Reorganizar Prioridades";
        cout << "\n    <4> Listar Veículos";
        cout << "\n    <5> Histórico\n";
        cout << "\n==========================================";
        cout << "\n #  Digite a opção desejada: ";
        cin >> resp_menu;
        switch (resp_menu)
        {
            case 1:
            {
                system("clear");
                do{
                    system("clear");
                    temp.set_dados();
                    if(vagas.size() >= 10)
                    {
                        cout << "\nSem vagas disponíveis!!";
                        cout << "\nAdicionando a fila de espera...";
                        entrada.push(temp);
                    } else
                    {
                        cout << "\nVaga no estacionamento garantida!!";
                        estacionados.push_front(temp);
                        vagas.push_back(1);
                    }
                    system("clear");
                    cout << "\nPronto, deseja inserir outro carro(1) ou voltar ao menu(2)? ";
                    cin >> resp_switch;
                }while(resp_switch==1);
                break;
            }

            case 3:
            {
                system("clear");
                do
                {
                    estorg = estacionados;
                    while(!estacionados.empty())
                    {
                        estacionados.pop_front();
                    }
                    while(!estorg.empty())
                    {
                        if(estorg.front().ret_tipo() == 2)
                        {
                            estacionados.push_front(estorg.front());
                        } else
                        {
                            estacionados.push_back(estorg.front());
                        }
                        estorg.pop_front();
                    }
                    cout << "\n========================================== ";
                    cout << "\n  #      Reorganizar Prioridades       #";
                    cout << "\n========================================== ";
                    cout << "\n\nPrioridades Organizadas!!";
                    cout << "\nPara voltar ao menu, digite '2': ";
                    cin >> resp_switch;
                }while(resp_switch==1);
                break;
            }
            case 4:
            {
                system("clear");
                do
                {    
                    entcopia = entrada;
                    estcopia = estacionados;

                    cout << "\n========================================== ";
                    cout << "\n  #          Listar Veículos           #";
                    cout << "\n========================================== ";
                    cout << "\n\nQuantidade de Vagas disponíveis : " << 10 - vagas.size();
                    cout << "ˇ\nDefinição de Prioridade : 1 = comum, 2 = Prioritário";
                    cout << "\n\nFila de Espera:";
                    while(!entrada.empty())
                    {
                        entrada.front().print_dados();
                        entrada.pop();
                    }
                    cout << "\n\nEstacionados: ";
                    while(!estacionados.empty())
                    {
                        estacionados.front().print_dados();
                        estacionados.pop_front();
                    }
                    entrada = entcopia;
                    estacionados = estcopia;

                    cout << "\n\nPara voltar ao menu, digite '2': ";
                    cin >> resp_switch;
                }while(resp_switch==1);
                break;
            }
        }
    }
    cout << "\n\n";
    return 0;
}
