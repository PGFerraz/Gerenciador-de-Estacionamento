# Gerenciador de Estacionamento
Este projeto é um protótipo de um sistema para organizar e controlar o fluxo de entrada e saída de veículos em um estacionamento inteligente de uma cidade universitária.

## Tecnologias Utilizadas
Linguagem: C++

Estruturas de Dados:

vector para controle das vagas disponíveis

queue (fila simples) para veículos na fila de entrada

deque (fila dupla) para saída de veículos

list (lista ligada) para organização dos veículos estacionados

Arquivos (fstream) para registro de histórico

## Funcionalidades
O sistema permite:

Inserir veículos com tipo (comum ou prioritário)

Alocar veículos automaticamente em vagas comuns ou prioritárias

Adicionar à fila de espera caso não haja vaga

Remover veículos do estacionamento e escolher saída pela frente ou fundo

Reorganizar a lista de veículos para priorizar os prioritários

Listar veículos na fila de espera e no estacionamento

Visualizar o histórico de saída dos veículos

Interface de menu interativo via terminal

## Tipos de Veículo
1 - Comum

2 - Prioritário

(Obs.: A estrutura permite expansão para incluir tipos como emergência ou serviço.)

## Estrutura do Projeto
main.cpp         // Código principal com o menu e lógica de controle

Veiculos.cpp     // Implementação da classe Veiculo

Veiculos.h       // Declaração da classe Veiculo

historico.txt    // Arquivo gerado automaticamente para registro das saídas

## Exemplo de Uso
Inicie o programa e selecione Inserir Veículo

Informe a placa e o tipo

O sistema aloca o carro automaticamente ou coloca na fila

Você pode listar os carros, removê-los e reorganizar a prioridade

O histórico é gravado em historico.txt

## Objetivos Didáticos
Aplicar estruturas de dados lineares em C++

Simular operações reais de controle de estacionamento

Desenvolver lógica e modularização

Trabalhar com filas, listas e arquivos em C++

## Observações
Capacidade máxima de 10 vagas, sendo 2 reservadas para prioritários

Pode ser expandido para tratar veículos de emergência e de serviço

