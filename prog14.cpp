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


        C++ Encapsulation Example
        https://www.programiz.com/cpp-programming/examples/encapsulation
*/

#include <stdio.h>

class pacoteIP {
    
    private:
        char enderecoDestinatario[20];
    

    public:
        void setEnderecoDestinatario(char*);
        char* getEnderecoDestinatario();



};

void pacoteIP::setEnderecoDestinatario(char* d){
    sprintf(enderecoDestinatario, d);
}
char* pacoteIP::getEnderecoDestinatario(){
    return enderecoDestinatario;
}

int main(){

    pacoteIP p1;
    printf("IP do Destinatario: ");
    char eDestinatario[20];
    scanf("%s", eDestinatario);
    p1.setEnderecoDestinatario(eDestinatario);

}