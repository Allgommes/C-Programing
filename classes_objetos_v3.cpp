#include <iostream>
#include <string>

// 1. CLASSE: O 'modelo' para criar Contas Bancárias
class ContaBancaria {
private:
	// 2. ATRIBUTOS (DADOS)
	// São variáveis que armazenam o estado do objeto.
	// PRIVATE: Estes dados só podem ser acessados ou alterados pelos MÉTODOS
	// desta CLASSE. Isso garante o ENCAPSULAMENTO e a segurança dos dados.
	std::string titular;
	double saldo;

public:
	// 3. MÉTODOS (FUNÇÕES)
	// São as ações que o objeto pode executar.
	// PUBLIC: Estes métodos são a 'interface' da classe e podem ser chamados
	// pelo código externo (como a função main()).

	// Construtor: Um método especial usado para inicializar o objeto quando ele
	// é criado.
	ContaBancaria(std::string nomeTitular, double saldoInicial) {
		titular = nomeTitular;
		saldo = saldoInicial;
		std::cout << "Nova conta criada para " << titular
				  << " com saldo inicial de " << saldo << "€.\n";
	}

	// Método para DEPOSITAR (modifica um atributo privado)
	void depositar(double valor) {
		if (valor > 0) {
			saldo += valor; // Acesso direto ao atributo 'saldo' porque estamos
							// DENTRO da classe.
			std::cout << "Depósito de " << valor << "€ efetuado.\n";
		}
	}

	// Método para LEVANTAR (modifica um atributo privado)
	void levantar(double valor) {
		if (valor > 0 && valor <= saldo) {
			saldo -= valor;
			std::cout << "Levantamento de " << valor << "€ efetuado.\n";
		} else {
			std::cout << "Erro: Saldo insuficiente ou valor inválido.\n";
		}
	}

	// Método para obter o SALDO (lê um atributo privado e o retorna)
	double obterSaldo() {
		return saldo; // Fornece uma forma CONTROLADA de ler o atributo privado.
	}

	// Método para exibir informações
	void exibirDetalhes() {
		std::cout << "\n--- Detalhes da Conta ---\n";
		std::cout << "Titular: " << titular << "\n";
		std::cout << "Saldo Atual: " << saldo << "€\n";
	}
};

// --- Função Principal ---
int main() {
	// 4. OBJETOS (INSTÂNCIAS)
	// 'contaJoao' e 'contaMaria' são OBJETOS, instâncias concretas da CLASSE
	// ContaBancaria. Eles existem na memória e possuem seus próprios valores
	// (atributos).

	ContaBancaria contaJoao("João Silva", 1500.00);
	ContaBancaria contaMaria("Maria Santos", 500.00);

	// INTERAÇÃO COM OS OBJETOS (Acesso aos métodos PUBLIC)

	std::cout << "\n--- Operações de João ---\n";
	contaJoao.depositar(
		200.00);			   // Chama o método 'depositar' do objeto contaJoao
	contaJoao.levantar(50.00); // Chama o método 'levantar' do objeto contaJoao

	std::cout << "\nSaldo da Maria antes: " << contaMaria.obterSaldo() << "€\n";
	contaMaria.levantar(600.00); // Tentativa de levantamento falhada.
	contaMaria.depositar(100.00);

	// Tentativa de acesso DIRETO ao atributo privado: Isto causaria um ERRO de
	// compilação! contaJoao.saldo = 99999.00;

	// Exibindo os resultados finais usando o método público
	contaJoao.exibirDetalhes();
	contaMaria.exibirDetalhes();

	return 0;
}