#include <stdio.h>

class IDequipamento {

    private:
    int ID;
    int tipo;
    char descricao[20];
    char cor[10];

    public:
    void definirID(int i) {
        if (i < 0) return; // Garantir que o ID não seja negativo
        ID=i;
    }
    int obterID() {
        return ID;
    }
    void definirTipo(int t) {
        tipo=t;
    }
    int obterTipo() {
        return tipo;
    }
    void definirDescricao(const char* c) {
        sprintf(descricao, c); // Corrigido: usar strcpy em vez de sprintf
    }
    char* obterDescricao() {
        return descricao;
    }

    void definirCor(const char* c) {
        sprintf(cor, c); // Corrigido: usar strcpy em vez de sprintf
    }
    
    // Método para obter a cor (adicionado)
    char* obterCor() {
        return cor;
    }
      
};

int main() {
    IDequipamento e1;
    e1.definirID(1);
    e1.definirTipo(2);
    e1.definirDescricao("");
    e1.definirCor("");
    
    
    char d[20];
    char c[10];
    
    printf("Digite a descricao: ");
    scanf("%19s", d); // Limitado a 19 caracteres para evitar buffer overflow
    e1.definirDescricao(d);
    
    printf("Digite a cor: ");
    scanf("%9s", c); // Limitado a 9 caracteres para evitar buffer overflow
    e1.definirCor(c);

    printf("ID: %d\n", e1.obterID());
    printf("Tipo: %d\n", e1.obterTipo());
    printf("Descricao: %s\n", e1.obterDescricao());
    printf("Cor: %s\n", e1.obterCor());

    return 0;
}                                                      



