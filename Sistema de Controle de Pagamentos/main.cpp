#include <iostream>
#include <string>
#include <Pagamento.h>
#include <ControleDePagamentos.h>

using namespace std;

int main()
{

     int i, nPagamentos;
    Pagamento p;
    ControleDePagamentos controle;
    string nome;
    float valorPagamento;

    cin >> nPagamentos;
    getchar();

    for(i = 0; i < nPagamentos; i++){
        cin >> valorPagamento;
        getchar();
        getline(cin, nome);
        p.setValorDoPagamento(valorPagamento);
        p.setNomeDoFuncionario(nome);

        controle.setPagamento(p, i);
    }

    getline(cin, nome);

    if(controle.getIndexFuncionario(nome) != -1){
        i = controle.getIndexFuncionario(nome);
        p = controle.getPagamento(i);

        cout << p.getNomeDoFuncionario() << ": R$ " << p.getValorDoPagamento() << endl;
    }else{
        cout << nome << " não encontrado(a)." << endl;
    }

    cout << "Total: R$ " << controle.calculaTotalDePagamentos() << endl;

    return 0;
}
