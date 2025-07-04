# Desafio Lógica Super Trunfo

Este repositório contém os códigos referentes ao Desafio Lógica Super Trunfo, que é uma continuação do desafio de cadastro de cartas no Super Trunfo.

---

## Estrutura do projeto

- **desafio4-nivel-basico.c**:  
  Implementação do nível **Novato** (Desafio 1), que compara duas cartas pré-definidas utilizando estruturas de decisão simples (`if` e `if-else`).

- **desafio5-nivel-intermediario.c**:  
  Implementação do nível **Aventureiro** (Desafio 2), que adiciona um menu interativo via `switch` para o jogador escolher o atributo a ser comparado entre duas cartas cadastradas.

- **desafio6-nivel-avancado.c**:  
  Implementação do nível **Mestre** (Desafio 3), que permite ao jogador escolher dois atributos diferentes para comparar as cartas. Utiliza lógica com estruturas de decisão aninhadas e cálculo aprimorado do "Super Poder" para determinar o vencedor geral.

---

Nível Novato (Desafio 1)
Compara dois países com base em um atributo numérico fixo definido no código.

Sem interação do usuário para escolha do atributo.

Foco em estruturas if e if-else para comparação.

---

Nível Aventureiro (Desafio 2)
Adiciona um menu interativo para o usuário escolher o atributo de comparação.

Utiliza switch para seleção do atributo.

Lógica de comparação com regras específicas para cada atributo.

---

Nível Mestre (Desafio 3)
Permite escolher dois atributos diferentes para comparação.

Utiliza estruturas de decisão aninhadas e operador ternário.

Calcula um "Super Poder" ponderado para definir o vencedor geral.

Trata empates e apresenta resultados detalhados.

---

Observações
Os códigos contemplam entrada via terminal para cadastro das cartas.

As cartas possuem os seguintes atributos: estado, código, nome, população, área, PIB, pontos turísticos, densidade populacional e PIB per capita.

O "Super Poder" é uma métrica composta que ajuda a definir a carta vencedora no nível avançado.

---