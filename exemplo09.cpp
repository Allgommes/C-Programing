#include <stdio.h>


class sessaoTCP {
private:
    int portaOrigem;
    int portaDestino;
    int numeroSequencia;
    int numeroConfirmacao;
    int dados;

public:
    void definirPortaOrigem(int);
    int obterPortaOrigem();
    void definirPortaDestino(int);
    int obterPortaDestino();
    void definirNumeroSequencia(int);
    int obterNumeroSequencia();
    void definirNumeroConfirmacao(int);
    int obterNumeroConfirmacao();
    void definirDados(int);
    int obterDados();
};



void sessaoTCP::definirPortaOrigem(int po) {
    portaOrigem = po;
}
int sessaoTCP::obterPortaOrigem() {
    return portaOrigem;
}
void sessaoTCP::definirPortaDestino(int pd) {
    portaDestino = pd;
}
int sessaoTCP::obterPortaDestino() {
    return portaDestino;
}
void sessaoTCP::definirNumeroSequencia(int ns) {
    numeroSequencia = ns;
}
int sessaoTCP::obterNumeroSequencia() {
    return numeroSequencia;
}
void sessaoTCP::definirNumeroConfirmacao(int nc) {
    numeroConfirmacao = nc;
}
int sessaoTCP::obterNumeroConfirmacao() {
    return numeroConfirmacao;
}
void sessaoTCP::definirDados(int d) {
    dados = d;
}
int sessaoTCP::obterDados() {
    return dados;
}

int main()
{
    sessaoTCP s1;
    s1.definirPortaOrigem(80);
    s1.definirPortaDestino(1000);
    s1.definirNumeroSequencia(12345);
    s1.definirNumeroConfirmacao(54321);
    s1.definirDados(99999);

    printf("Porta Origem: %d\n", s1.obterPortaOrigem());
    printf("Porta Destino: %d\n", s1.obterPortaDestino());
    printf("Numero Sequencia: %d\n", s1.obterNumeroSequencia());
    printf("Numero Confirmacao: %d\n", s1.obterNumeroConfirmacao());
    printf("Dados: %d\n", s1.obterDados());

    return 0;
}