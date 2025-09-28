#include <stdio.h>
// construir classe pacoteIP com 3 atributos privados:
// enderecoRemetente, enderecoDestinatario
// e payload e respectivos métodos públicos
// no main, criar, preencher e apresentar instância da classe pacoteIP

/*
    Classe pacoteIP

    Representa um pacote IP simplificado, contendo informações sobre o endereço do remetente,
    endereço do destinatário e o payload (dados transportados).

    Membros privados:
        - enderecoRemetente[16]: Armazena o endereço IP do remetente como uma string de até 15 caracteres + '\0'.
        - enderecoDestinatario[16]: Armazena o endereço IP do destinatário como uma string de até 15 caracteres + '\0'.
        - payload[100]: Armazena os dados do pacote (payload) como uma string de até 99 caracteres + '\0'.

    Métodos públicos:
        - void definirEnderecoRemetente(char*):
            Define o endereço IP do remetente a partir de uma string fornecida.

        - char* obterEnderecoRemetente():
            Retorna o endereço IP do remetente como uma string.

        - void definirEnderecoDestinatario(char*):
            Define o endereço IP do destinatário a partir de uma string fornecida.

        - char* obterEnderecoDestinatario():
            Retorna o endereço IP do destinatário como uma string.

        - void definirPayload(char*):
            Define o payload (dados) do pacote a partir de uma string fornecida.

        - char* obterPayload():
            Retorna o payload (dados) do pacote como uma string.
*/
class pacoteIP { 
    
    private:
    char enderecoRemetente[16];
    char enderecoDestinatario[16];
    char payload[100];
    char length[10];

    public:
    void definirEnderecoRemetente(char*);
    char* obterEnderecoRemetente();
    void definirEnderecoDestinatario(char*);
    char* obterEnderecoDestinatario();
    void definirPayload(char*);
    char* obterPayload();
    void definirLength(char*);
    char* obterLength();
};

char* pacoteIP::obterEnderecoRemetente(){  // getters 
    return enderecoRemetente;
}
void pacoteIP::definirEnderecoDestinatario(char* dest){  // setters
    sprintf(enderecoDestinatario, dest);
}
char* pacoteIP::obterEnderecoDestinatario(){
    return enderecoDestinatario;
}
void pacoteIP::definirPayload(char* pay){
    sprintf(payload, pay);
}
char* pacoteIP::obterPayload(){
    return payload;
}

void pacoteIP::definirLength(char* l){
    sprintf(length, l);
}
char* pacoteIP::obterLength(){
    return length;
}

    

int main()  {

pacoteIP p1;
printf("Indique IP Remetente: ");
char eRemetente[16];
scanf("%s", eRemetente);
p1.definirEnderecoRemetente(eRemetente);

pacoteIP p1;
printf("Indique IP Destinatario: ");
char eDestinatario[16];
scanf("%s", eDestinatario);
p1.definirEnderecoDestinatario(eDestinatario);

pacoteIP p1;
printf("Indique Payload: ");
char ePayload[16];
scanf("%s", ePayload);
p1.definirPayload(ePayload);

return 0;

}