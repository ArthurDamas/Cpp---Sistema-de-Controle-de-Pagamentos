#include "Pagamento.h"

Pagamento::Pagamento()
{
    valorDoPagamento = 0;
}

std::string Pagamento::getNomeDoFuncionario()
{
    return nomeDoFuncionario;
}

int Pagamento::getValorDoPagamento()
{
    return valorDoPagamento;
}

void Pagamento::setNomeDoFuncionario(std::string nomeDoFuncionario)
{
    this->nomeDoFuncionario = nomeDoFuncionario;
}

void Pagamento::setValorDoPagamento(int valorDoPagamento)
{
    this->valorDoPagamento = valorDoPagamento;
}




