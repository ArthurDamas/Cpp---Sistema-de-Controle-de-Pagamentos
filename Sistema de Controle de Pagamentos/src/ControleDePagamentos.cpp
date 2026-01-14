#include "ControleDePagamentos.h"

ControleDePagamentos::ControleDePagamentos()
{
    //ctor
}

void ControleDePagamentos::setPagamento(Pagamento p, int index)
{
    this->pagamentos[index] = p;
    nPagamentos++;
}

Pagamento ControleDePagamentos::getPagamento(int pos)
{
    return pagamentos[pos];
}

float ControleDePagamentos::calculaTotalDePagamentos()
{
    int i;
    float total = 0;
    for(i = 0; i < nPagamentos; i++){
        total += pagamentos[i].getValorDoPagamento();
    }

    return total;

}

int ControleDePagamentos::getIndexFuncionario(std::string nomeFuncionario){
    bool achou = false;
    int i;

    for(i = 0; i < nPagamentos; i++){
        if(pagamentos[i].getNomeDoFuncionario().find(nomeFuncionario) != std::string::npos){
            achou = true;
            break;
        }
    }

    if(achou){
        return i;
    }else{
        return -1;
    }
}



