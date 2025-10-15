/*Escreva um programa em C++ que cria uma classe chamada Conta
(conta-corrente bancária), a qual possui apenas um item de dado: saldo. Além disso, a classe
Conta tem duas funções: creditar(x), que faz um crédito de x na conta referenciada, getSaldo(), que retorna o saldo da conta referenciada. Para elaborar esse programa, você deve criar
uma classe que atenda a esses requisitos e criar dois objetos Conta (c1 e c2). Você deve ter
um construtor Conta() {saldo = 0;} para inicializar os saldos das duas contas com valor 0. Em
seguida, por exemplo, chame a função creditar(x) para fazer depósitos nas duas contas, exiba
os saldos atualizados e, por fi m, solicite que o usuário informe a quana que ele deseja creditar
na conta c2. Note que você deve criar essas funções-membros e chamá-las a parr da função
main() juntamente com a criação de objetos da classe Conta. */

#include <stdio.h>

class Conta {
    private:
        double saldo;
        public:
        void creditar(double quantia) {
            saldo += quantia;
        }

        double getSaldo() {
            return saldo;
        }
};

int main() {

    double quantiaDeposito;
    printf("Digite a quantia que deseja depositar na conta 2: ");
    scanf("%lf", &quantiaDeposito);


    Conta c1, c2;
    c1.creditar(777.99);
    c2.creditar(255.00);
    printf("Saldo da conta 1: %.2f\n", c1.getSaldo());
    printf("Saldo da conta 2: %.2f\n", c2.getSaldo());

    c2.creditar(quantiaDeposito);
    printf("Saldo atualizado da conta 2: %.2f\n", c2.getSaldo());

    return 0;

}