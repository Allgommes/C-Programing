#include <cstdio> // Inclui as funções de I/O estilo C (printf, scanf, sprintf, strcpy)
#include <cstring> // Necessário para a função strcpy

// ENCAPSULAMENTO E MODIFICADORES DE ACESSO
// A CLASSE é o molde do objeto.
class pacoteID {
private:
	// ATRIBUTOS (DADOS) - Variáveis de estado do objeto.
	// PRIVATE: Aplicando o Encapsulamento. Estes dados SÓ podem ser acessados
	// ou modificados pelos métodos públicos da própria classe (os Setters).
	int ID;
	char enderecoRemetente[16];
	char enderecoDestinatario[16];
	char payload[100];
	int CRC;

public:
	// MÉTODOS (FUNÇÕES) - A interface PUBLIC do objeto.
	// São a forma CONTROLADA de interagir com os atributos PRIVATE.

	// -----------------------------------------------------
	// MÉTODOS PARA ID (INT)
	// -----------------------------------------------------

	// Setter (Mutator): Define o valor de ID com validação
	void definirID(int i) {
		if (i < 0)
			return; // Regra de negócio: ID não pode ser negativo
		ID = i;
	}

	// Getter (Accessor): Retorna o valor de ID
	int obterID() { return ID; }

	// -----------------------------------------------------
	// MÉTODOS PARA ENDERECO REMETENTE (STRING/char*)
	// -----------------------------------------------------

	// Setter (Mutator) para strings:
	// Usa strncpy para copiar o conteúdo da string 'rem' para o atributo
	// privado. strncpy é mais seguro pois limita o número de caracteres
	// copiados (15 + \0).
	void definirEnderecoRemetente(const char *rem) {
		// Correção: strncpy para cópia segura, pois 'rem' é a origem
		std::strncpy(enderecoRemetente, rem, sizeof(enderecoRemetente) - 1);
		enderecoRemetente[sizeof(enderecoRemetente) - 1] =
			'\0'; // Garantir terminação
	}

	// Getter (Accessor) para strings: Retorna o endereço (ponteiro) do atributo
	// privado
	char *obterEnderecoRemetente() { return enderecoRemetente; }

	// -----------------------------------------------------
	// MÉTODOS PARA ENDERECO DESTINATARIO (STRING/char*)
	// -----------------------------------------------------

	void definirEnderecoDestinatario(const char *dest) {
		// strncpy garante que não se escreva mais que 15 caracteres + '\0'
		std::strncpy(enderecoDestinatario, dest,
					 sizeof(enderecoDestinatario) - 1);
		enderecoDestinatario[sizeof(enderecoDestinatario) - 1] = '\0';
	}

	// O getter não precisa de 'pacoteID::' prefixado quando está dentro da
	// definição da classe.
	char *obterEnderecoDestinatario() { return enderecoDestinatario; }

	// -----------------------------------------------------
	// MÉTODOS PARA PAYLOAD (STRING/char*)
	// -----------------------------------------------------

	void definirPayload(const char *pay) {
		// strncpy com limite do tamanho do payload
		std::strncpy(payload, pay, sizeof(payload) - 1);
		payload[sizeof(payload) - 1] = '\0';
	}

	char *obterPayload() { return payload; }

	// -----------------------------------------------------
	// MÉTODOS PARA CRC (INT)
	// -----------------------------------------------------

	void definirCRC(int cr) { CRC = cr; }

	int obterCRC() { return CRC; }
};

int main() {
	// OBJETO: 'p1' é uma instância concreta da classe 'pacoteID'.
	// Agora, p1 existe na memória e tem seus próprios atributos (ID,
	// enderecoRemetente, etc.).
	pacoteID p1;

	// Inicialização do objeto (Boa prática, embora desnecessário se o
	// construtor for usado)
	p1.definirID(0);
	p1.definirEnderecoRemetente("");
	p1.definirEnderecoDestinatario("");
	p1.definirPayload("");
	p1.definirCRC(0);

	// Variáveis auxiliares para a leitura de I/O estilo C (scanf)
	char rem[16];
	char dest[16];
	char pay[100];
	int cr; // Variável do tipo INT para o CRC

	// Leitura e Chamada dos SETTERS

	std::printf("Digite o endereco do remetente (max 15 chars): ");
	// Correção de segurança no scanf para garantir que o input não exceda o
	// tamanho
	std::scanf("%15s", rem);
	p1.definirEnderecoRemetente(rem); // Chama o método setter PUBLICO

	std::printf("Digite o endereco do destinatario (max 15 chars): ");
	std::scanf("%15s", dest);
	p1.definirEnderecoDestinatario(dest);

	std::printf("Payload (max 99 chars): ");
	std::scanf("%99s", pay);
	p1.definirPayload(pay);

	std::printf("CRC (numero inteiro): ");
	// CORREÇÃO ESSENCIAL: %d é para inteiros, e precisa do '&' para ler na
	// variável. A chamada 'scanf("%10s", cr);' estava errada.
	std::scanf("%d", &cr);
	p1.definirCRC(cr);

	// Chamada dos GETTERS e Saída
	std::printf("\n--- Dados do Pacote P1 ---\n");
	std::printf("ID: %d\n", p1.obterID());
	std::printf("Endereco Remetente: %s\n",
				p1.obterEnderecoRemetente()); // Chama o getter
	std::printf("Endereco Destinatario: %s\n",
				p1.obterEnderecoDestinatario());	 // Chama o getter
	std::printf("Payload: %s\n", p1.obterPayload()); // Chama o getter
	std::printf("CRC: %d\n", p1.obterCRC());		 // Chama o getter

	return 0;
}