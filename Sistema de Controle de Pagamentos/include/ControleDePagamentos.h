#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include <string>
#include "Pagamento.h"


class ControleDePagamentos
{
    public:
        ControleDePagamentos();
        void setPagamento(Pagamento p, int index);
        Pagamento getPagamento(int pos);
        float calculaTotalDePagamentos();
        int getIndexFuncionario(std::string nomeDoFuncionario);



    protected:

    private:
        Pagamento pagamentos [100];
        int nPagamentos;
};

#endif // CONTROLEDEPAGAMENTOS_H
