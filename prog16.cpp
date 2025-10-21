#include <stdio.h>
// construir classe pacoteIP com 3 atributos privados: 
// enderecoRemetente, enderecoDestinatario, payload, CRC, length
// e respectivos métodos públicos
// no main, criar, preencher e apresentar instância da classe pacoteIP
 
class pacoteIP {
private:
	int enderecoRemetente; 
	int enderecoDestinatario;
	int payload;
	int CRC;
	int length;
    
public:	
	void definirEnderecoRemetente(int); // prototipos dos metodos
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
 
void pacoteIP::definirEnderecoDestinatario(int dest) //
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


// nova classe sessaoTCP com o atributo privado numeroSessao int e respectivos metodos publicos para obter e definir
class sessaoTCP {
private:
	int numeroSessao;

public:
	void DefinirNumeroSessao(int num){
		numeroSessao = num;
	}
	int ObterNumeroSessao(){
        return numeroSessao;
    }
   pacoteIP pacote[10]; 
};



int main()
{
    pacoteIP p1;
    sessaoTCP s1;

    s1.DefinirNumeroSessao(1);
	printf("Numero da Sessao: %d\n", s1.ObterNumeroSessao());
    s1.pacote[0].definirEnderecoRemetente(100);
	printf("Endereco Remetente: %d\n", s1.pacote[0].obterEnderecoRemetente());
    s1.pacote[0].definirEnderecoDestinatario(19216801);
	printf("Endereco Destinatario: %d\n", s1.pacote[0].obterEnderecoDestinatario());
    s1.pacote[0].definirPayload(500);
	printf("Payload: %d\n", s1.pacote[0].obterPayload());
    s1.pacote[0].definirCRC(99999);
	printf("CRC: %d\n", s1.pacote[0].obterCRC());
    s1.pacote[0].definirLength(0064);

	p1.definirEnderecoRemetente(19216801);
	printf("Endereco Remetente: %d\n", p1.obterEnderecoRemetente());
	p1.definirEnderecoDestinatario(19216802);
	printf("Endereco Destinatario: %d\n", p1.obterEnderecoDestinatario());
	p1.definirPayload(100);
	printf("Payload: %d\n", p1.obterPayload());
	p1.definirCRC(123456);
	printf("CRC: %d\n", p1.obterCRC());



    

    return 0;
}