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
        
};
