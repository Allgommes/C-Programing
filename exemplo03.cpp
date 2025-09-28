#include <stdio.h>   

// ENCAPSULAMENTO E MODIFICADORES DE ACESSO
// construir uma lasse pacoteID com os atributos ID, enderecoRemetente, enderecoDestinatario e payload
// criar os metodos set e get para cada atributo
class pacoteID {
private:
    int ID;                        // Identificador do pacote
    char enderecoRemetente[12];    // Endereço do remetente
    char enderecoDestinatario[12]; // Endereço do destinatário
    char payload[13];              // Conteúdo ou carga útil do pacote
    
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
        sprintf(obterEnderecoRemetente(), "%s", rem);
    }
    char* obterEnderecoRemetente() {
        return enderecoRemetente;
    }
    void definirEnderecoDestinatario(const char* dest) {
        sprintf(obterEnderecoDestinatario(), "%s", dest);
    }
    char* obterEnderecoDestinatario() {
        return enderecoDestinatario;
    }
    void definirPayload(const char* pay) {
        sprintf(obterPayload(), "%s", pay);
    }
    char* obterPayload() {
        return payload;
    }
    
}; 

int main() {
    pacoteID p1;
    p1.definirID(0);
    p1.definirEnderecoRemetente("");
    p1.definirEnderecoDestinatario("");
    p1.definirPayload("");

    char rem[12];
    char dest[12];
    char pay[13];
  
    printf("Digite o endereco do remetente: ");
    scanf("%12s", rem); // Limitado a 12 caracteres para evitar buffer overflow
    p1.definirEnderecoRemetente(rem);

    printf("Digite o endereco do destinatario: ");
    scanf("%12s", dest); // Limitado a 12 caracteres para evitar buffer overflow
    p1.definirEnderecoDestinatario(dest);

    printf("Payload: ");
    scanf("%13s", pay); // Limitado a 13 caracteres para evitar buffer overflow
    p1.definirPayload(pay);

    printf("ID: %d\n", p1.obterID());
    printf("Endereco Remetente: %s\n", p1.obterEnderecoRemetente());
    printf("Endereco Destinatario: %s\n", p1.obterEnderecoDestinatario());
    printf("Payload: %s\n", p1.obterPayload());

    return 0;
}
