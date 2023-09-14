#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct produto{
    int codigo;
    string nome;
    int quantidade;
    double precoUnitario;
};

int main(){
    vector<produto> estoque;
    int opcao;
    bool sair = false;
    do
    {
        cout<<"Menu"<<endl;
        cout<<"Opcao 1: Adicionar produto"<<endl;
        cout<<"Opcao 2: Atualizar estoque"<<endl;
        cout<<"Opcao 3: Calcular Total"<<endl;
        cout<<"Opcao 4: Listar"<<endl;
        cout<<"Opcao 5: Venda"<<endl;
        cout<<"Opcao 0: Sair"<<endl;
        cin>>opcao;
        switch (opcao)
        {
            case (1):
                /* Adicionar produto Natalie */
                break;

            case (2):
                /* Atualizar estoque Lorena*/
                break;

            case (3):
                /* Calcular Total Leo*/
                break;

            case (4):
                /* Listar Daniel */
                break;

            case (5):
                /* Venda Carlos */
                break;

            case (0):
                sair = true;
                break;

            default:
                cout<<"Opção invalida. Tente novamente."<<endl;
                break;
}    
    } while (!sair);
    
}