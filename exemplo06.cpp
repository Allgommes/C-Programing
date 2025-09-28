#include <stdio.h>

// construir classe pacoteIP com 3 atributos privados: 

// enderecoRemetente, enderecoDestinatario 

// e payload e respectivos m�todos p�blicos

// no main, criar, preencher e apresentar inst�ncia da classe pacoteIP
 
class pacoteIP {

private:

	char enderecoRemetente[16];
	char enderecoDestinatario[16];
	char payload[100];

public:

	void definirEnderecoRemetente(char*);
	char* obterEnderecoRemetente();

	void definirEnderecoDestinatario(char*);
	char* obterEnderecoDestinatario();

	void definirPayload(char*);
	char* obterPayload();

};
 
void pacoteIP::definirEnderecoRemetente(char* end)
{
sprintf(enderecoRemetente,end);
}
char* pacoteIP::obterEnderecoRemetente()
{
return enderecoRemetente;    
}
void pacoteIP::definirEnderecoDestinatario(char* dest)
{
sprintf(enderecoDestinatario,dest);
}
char* pacoteIP::obterEnderecoDestinatario()
{
return enderecoDestinatario;    
}
void pacoteIP::definirPayload(char* p)
{
sprintf(payload,p);
}
char* pacoteIP::obterPayload()
{
return payload;    
}

int main()

{
    pacoteIP p1;    
	printf("Indique IP remetente:");
	char eRemetente[16];
	scanf(" %s",eRemetente);//192.168.1.2
	
	p1.definirEnderecoRemetente(eRemetente); 
	printf("Indique IP destinatario:");
	char eDestinatario[16];
	scanf(" %s",eDestinatario);

    p1.definirEnderecoDestinatario(eDestinatario);  
  	printf("Indique payload:");
	char ePayload[100];
	scanf(" %[^\n]",ePayload);

    p1.definirPayload(ePayload);  
    printf("Endereco remetente:%s\n", p1.obterEnderecoRemetente()); 
    printf("Endereco destinatario:%s\n", p1.obterEnderecoDestinatario());
	printf("Payload:%s\n", p1.obterPayload());

    return 0;

}
 
