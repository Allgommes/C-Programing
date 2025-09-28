#include <stdio.h>   

// ENCAPSULAMENTO E MODIFICADORES DE ACESSO
// construir uma lasse pacoteID com os atributos ID, enderecoRemetente, enderecoDestinatario e payload
// criar os metodos set e get para cada atributo

class pacoteID {
private:
    int ID;                        // Identificador do pacote
    char enderecoRemetente[16];    // Endereço do remetente
    char enderecoDestinatario[16]; // Endereço do destinatário
    char payload[100];              // Conteúdo ou carga útil do pacote
    int CRC;
    int TCP;
    int length;
    
    
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
    void definirCRC(int cr) {
        CRC = cr;
    }
    int obterCRC() {
        return CRC;
    }
    void definirLength(int l) {
    	length=l;
	}
	int obterLength() {
		return length;
	}
    
    
}; 

int main() {
    pacoteID p1;
    p1.definirID(0);
    p1.definirEnderecoRemetente("");
    p1.definirEnderecoDestinatario("");
    p1.definirPayload("");
    p1.definirCRC(0);
    p1.definirLength(0);
    
    char rem[16];
    char dest[16];
    char pay[100];
    int cr;
    int length;
    
  
    printf("Digite IP do remetente: ");
    scanf("%12s", rem); // Limitado a 12 caracteres para evitar buffer overflow
    p1.definirEnderecoRemetente(rem);

    printf("Digite IP do destinatario: ");
    scanf("%12s", dest); // Limitado a 12 caracteres para evitar buffer overflow
    p1.definirEnderecoDestinatario(dest);

    printf("Indique Payload: ");
    scanf("%13s", pay); // Limitado a 13 caracteres para evitar buffer overflow
    p1.definirPayload(pay);

    printf("CRC: ");
    scanf("%10d", &cr); // scanf("%d",&cr)
    p1.definirCRC(cr);
    
    printf("Length: ");
    scanf("%d", &length);
    p1.definirLength(length);

    printf("ID: %d\n", p1.obterID());
    printf("Endereco Remetente: %s\n", p1.obterEnderecoRemetente());
    printf("Endereco Destinatario: %s\n", p1.obterEnderecoDestinatario());
    printf("Payload: %s\n", p1.obterPayload());
    printf("CRC: %d\n", p1.obterCRC());
    printf("Length: %d\n", p1.obterLength());
   
    

     

    return 0;
}
