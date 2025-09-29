#include <stdio.h>   

// ENCAPSULAMENTO E MODIFICADORES DE ACESSO
// construir uma lasse pacoteID com os atributos ID, enderecoRemetente, enderecoDestinatario e payload
// criar os metodos set e get para cada atributo
class pacoteID {
private:
    int ID;                        // Identificador do pacote
    int enderecoRemetente[16];     // Endereço do remetente
    int enderecoDestinatario[16];  // Endereço do destinatário
    int payload[100];              // Conteúdo ou carga útil do pacote
    int CRC;
    
// metodo publico
public:
    void definirID(int i) {
        if (i < 0) return;
        ID = i;
    }
    int obterID() {
        return ID;
    }

    void definirEnderecoRemetente(const int* rem) {
        for (int i = 0; i < 16; ++i) {
            enderecoRemetente[i] = rem[i];
        }
    }
    const int* obterEnderecoRemetente() {
        return enderecoRemetente;
    }

    void definirEnderecoDestinatario(const int* dest) {
        for (int i = 0; i < 16; ++i) {
            enderecoDestinatario[i] = dest[i];
        }
    }
    const int* obterEnderecoDestinatario() {
        return enderecoDestinatario;
    }

    void definirPayload(const int* pay) {
        for (int i = 0; i < 100; ++i) {
            payload[i] = pay[i];
        }
    }
    const int* obterPayload() {
        return payload;
    }

    void definirCRC(int cr) {
        CRC = cr;
    }
    int obterCRC() {
        return CRC;
    }
    
}; 

int main() {
    pacoteID p1;
    p1.definirID(0);
    p1.obterID();
    int rem[16] = {0};
    int dest[16] = {0};
    int pay[100] = {0};
    int cr = 0;

    printf("Digite 16 inteiros para o endereco do remetente:\n");
    for (int i = 0; i < 16; ++i) {
        scanf("%d", &rem[i]);
    }
    p1.definirEnderecoRemetente(rem);

    printf("Digite 16 inteiros para o endereco do destinatario:\n");
    for (int i = 0; i < 16; ++i) {
        scanf("%d", &dest[i]);
    }
    p1.definirEnderecoDestinatario(dest);

    printf("Digite 100 inteiros para o payload:\n");
    for (int i = 0; i < 100; ++i) {
        scanf("%d", &pay[i]);
    }
    p1.definirPayload(pay);

    printf("Digite o CRC: ");
    scanf("%d", &cr);
    p1.definirCRC(cr);

    printf("ID: %d\n", p1.obterID());
    printf("Primeiro inteiro do Endereco Remetente: %d\n", p1.obterEnderecoRemetente()[0]);
    printf("Primeiro inteiro do Endereco Destinatario: %d\n", p1.obterEnderecoDestinatario()[0]);
    printf("Primeiro inteiro do Payload: %d\n", p1.obterPayload()[0]);
    printf("CRC: %d\n", p1.obterCRC());

    return 0;
}