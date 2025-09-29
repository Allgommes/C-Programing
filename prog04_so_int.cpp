#include <stdio.h>
// construir classe pacoteIP com 3 atributos privados: 
// enderecoRemetente, enderecoDestinatario 
// e payload e respectivos métodos públicos
// no main, criar, preencher e apresentar instância da classe pacoteIP

class pacoteIP { //  possui um item de dado e duas funçõesmembros
private:
	int enderecoRemetente; //----------------
	int enderecoDestinatario;//----------------
	int payload;//-------------------------------------
	int CRC;
	int length;
	


public:	
	void definirEnderecoRemetente(int);  // funcoes menbros ou metodos
	int obterEnderecoRemetente();
	void definirEnderecoDestinatario(int);
	int obterEnderecoDestinatario();
	void definirPayload(int);
	int obterPayload();
	void definirCRC(int);
	int  obterCRC();
	void definirLength(int);
	int obterLength();
};

void pacoteIP::definirEnderecoRemetente(int end)
{
enderecoRemetente=end;
}
 
int pacoteIP::obterEnderecoRemetente()
{
return enderecoRemetente;    
}
 
void pacoteIP::definirEnderecoDestinatario(int dest)
{
enderecoDestinatario=dest;
}
 
int pacoteIP::obterEnderecoDestinatario()
{
return enderecoDestinatario;    
}
 
void pacoteIP::definirPayload(int p)
{
payload=p;
}
 
int pacoteIP::obterPayload()
{
return payload;    
}
 
void pacoteIP::definirCRC(int c)
{
CRC=c;	
}
 
int pacoteIP::obterCRC()
{
return CRC;
}
 
void pacoteIP::definirLength(int l)
{
length=l;	
}
 
int pacoteIP::obterLength()
{
return length;
}
int main()
{
    pacoteIP p1; 
	printf("Indique IP remetente:");
	int eRemetente;
	scanf("%d",&eRemetente);
	p1.definirEnderecoRemetente(eRemetente); 

	printf("Indique IP destinatario:");
	int eDestinatario;
	scanf("%d",&eDestinatario);
    p1.definirEnderecoDestinatario(eDestinatario);  

  	printf("Indique payload:");
	int ePayload;
	scanf("%d",&ePayload);
    p1.definirPayload(ePayload);

    printf("Indique CRC:");
    int CRCProvisorio;
    scanf("%d",&CRCProvisorio);
    p1.definirCRC(CRCProvisorio);

	printf("Indique length:");
    int lengthProvisorio;
    scanf("%d",&lengthProvisorio);
    p1.definirLength(lengthProvisorio);
    
	printf("\n\n"); 
    printf("Endereco remetente:%d\n", p1.obterEnderecoRemetente()); 
    printf("Endereco destinatario:%d\n", p1.obterEnderecoDestinatario());
	printf("Payload:%d\n", p1.obterPayload());
	printf("CRC:%d\n",p1.obterCRC());
	printf("Length:%d\n",p1.obterLength());
    return 0;
}