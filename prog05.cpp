#include <iostream>
#include <string.h>
#include <stdio.h>

// ENCAPSULAMENTO E MODIFICADORES DE ACESSO
// construir uma classe pacoteID com os atributos ID, enderecoRemetente, enderecoDestinatario e payload
// criar os metodos setters e getters para cada atributo
class pacoteID {
private:
    int ID;                        // Identificador do pacote
    char enderecoRemetente[16];    // Endereço do remetente
    char enderecoDestinatario[16]; // Endereço do destinatário
    char payload[100];              // Conteúdo ou carga útil do pacote
    int CRC;
    int prioridade; // Adicionado atributo prioridade

// metodo publico
 public:
    void definirID(int i) {
        if (i < 0) return; // Garantir que o ID não seja negativo
        ID=i;
    }
    int obterID() {
        return ID;
    }
// criar, preencher e apresentar os metodos set e get para os atributos enderecoDestinatario e payload
    void definirEnderecoRemetente(const char* rem) {
        sprintf(enderecoRemetente, "%s", rem);
    }
    char* obterEnderecoRemetente() {
        return enderecoRemetente;
    }
    void definirEnderecoDestinatario(const char* dest) {
        sprintf(enderecoDestinatario, "%s", dest);
    }
    char* obterEnderecoDestinatario() {
        return enderecoDestinatario;
    }
    void definirPayload(const char* pay) {
        sprintf(payload, "%s", pay);
    }
    char* obterPayload() {
        return payload;
    }
     void definirCRC(int cr) {
        CRC = cr;
    }
    int obterCRC() {
        return CRC;
    }
    // Métodos set e get para o atributo prioridade
    void definirPrioridade(int p) {
        prioridade = p;
    }
    int obterPrioridade() {
        return prioridade;
    }
}; 

int main() {
    pacoteID p1;
    p1.definirID(0);
    p1.definirEnderecoRemetente("");
    p1.definirEnderecoDestinatario("");
    p1.definirPayload("");
    p1.definirCRC(0);
    p1.definirPrioridade(0); // Inicializa a prioridade

    char rem[16];
    char dest[16];
    char pay[100];
    int cr;
    int prioridade; // Variável para a prioridade

    printf("Digite o endereco do remetente: ");
    scanf("%15s", rem); 
    p1.definirEnderecoRemetente(rem);

    printf("Digite o endereco do destinatario: ");
    scanf("%15s", dest); 
    p1.definirEnderecoDestinatario(dest);

    printf("Payload: ");
    scanf("%99s", pay); 
    p1.definirPayload(pay);

    printf("CRC: ");
    scanf("%d", &cr);
    p1.definirCRC(cr);

    printf("Prioridade: ");
    scanf("%d", &prioridade);
    p1.definirPrioridade(prioridade);

    printf("ID: %d\n", p1.obterID());
    printf("Endereco Remetente: %s\n", p1.obterEnderecoRemetente());
    printf("Endereco Destinatario: %s\n", p1.obterEnderecoDestinatario());
    printf("Payload: %s\n", p1.obterPayload());
    printf("CRC: %d\n", p1.obterCRC());
    printf("Prioridade: %d\n", p1.obterPrioridade()); 

    return 0;
}