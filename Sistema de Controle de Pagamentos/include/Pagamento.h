#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <string>


class Pagamento
{
    public:
        Pagamento();
        std::string getNomeDoFuncionario();
        int getValorDoPagamento();
        void setNomeDoFuncionario(std::string nomeDoFuncionario);
        void setValorDoPagamento(int valorDoPagamento);

    protected:

    private:
        std::string nomeDoFuncionario;
        int valorDoPagamento;

};

#endif // PAGAMENTO_H
