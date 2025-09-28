#include <stdio.h> 

class IDequipamento {  // classe que representa o identificador do equipamento
    
public:    // membros publicos da classe
    int ID; // identificador do equipamento
    int tipo; // tipo do equipamento
    char descricao[20]; // descricao do equipamento

};

int main() {  // int devolve um valor inteiro ao sistema operacional o valor 0 indica que o programa terminou corretamente
    IDequipamento e1; // instancia um objeto da classe IDequipamento
    e1.ID = 1; // atribui valor ao ID
    e1.tipo = 2; // atribui valor ao tipo
    sprintf(e1.descricao, "router"); // atribui valor a descricao da instancia e1 como "router"

    printf("ID: %d\n", e1.ID); // imprime o ID do equipamento
    printf("Tipo: %d\n", e1.tipo); // imprime o tipo do equipamento
    printf("Descricao: %s\n", e1.descricao); // imprime a descricao do equipamento


    IDequipamento e2; // instancia um objeto da classe IDequipamento
    e2.ID = 2; // atribui valor ao ID
    e2.tipo = 3; // atribui valor ao tipo
    sprintf(e2.descricao, "switch"); // atribui valor a descricao da instancia e2 como "switch"

    printf("ID:%d\n", e2.ID); // imprime o ID do equipamento
    printf("Tipo:%d\n", e2.tipo); // imprime o tipo do equipamento
    printf("Descricao:%s\n", e2.descricao); // imprime a descricao do equipamento
    printf("\n");
    
    IDequipamento e3;
    e3.ID=3;
    e3.tipo=4;
    sprintf(e3.descricao, "modem");

    printf("ID:%d\n", e3.ID);
    printf("Tipo:%d\n", e3.tipo);
    printf("Descricao:%s\n", e3.descricao);
    printf("\n");


     //while(1) // loop infinito
   

    return 0;


}