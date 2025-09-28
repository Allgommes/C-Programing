#include <stdio.h>
 
class IDEquipamento {
private:
	int ID;//atributo ID inteiro e privado
	int tipo;//atributo tipo inteiro e privado
    int descricao;//atributo descricao inteiro e privado
    int cor;

public:
	void definirID(int i)
	{
	ID=i;
	}
	int obterID()
	{
	return ID;
	}	
	void definirTipo(int t)
	{
	tipo=t;
	}
	int obterTipo()
	{
	return tipo;
	}
	void definirDescricao(int c)
	{
	descricao=c;
	}
	int obterDescricao()
	{
	return descricao;
	}
    void definirCor(int co)
	{
	cor=co;
	}
	int obterCor()
	{
	return cor;
	}
 
};

int main()
{
IDEquipamento e1;
 
e1.definirID(1);
e1.definirTipo(2);
e1.definirCor(27);
e1.definirDescricao(43);

printf("ID:%d\n",e1.obterID());
printf("tipo:%d\n",e1.obterTipo());
printf("descricao:%d\n",e1.obterDescricao());
printf("Cor:%d\n", e1.obterCor());
 
while (1);
return 0;
}
    
   
