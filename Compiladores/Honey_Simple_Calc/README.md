# Honey Calc - A simple antlr calculator

Esse projeto é um exercicio de um interpretador de expressões matemáticas simples, utilizando a ferramenta ANTLR4, definimos a gramatica de um linguagem customizada e limitada.

## A linguagem

![grammar](https://github.com/ovne/UFABC-Cursos-Computacao/blob/main/Compiladores/Honey_Simple_Calc/.github/grammar.png)

## Exemplo de uso e compilação

![example-gif](https://github.com/ovne/UFABC-Cursos-Computacao/blob/main/Compiladores/Honey_Simple_Calc/.github/execute.gif)

## 1. Configuração do ambiente

### 1.1. Instalação do ANTLR4
O caminho mais simples é instalar o antlr4 tools via pip (instalação prévia do python é necessária):

```bash
pip install antlr4-tools
```

Outras formas disponiveis nas instruções do site oficial: [https://www.antlr.org/](https://www.antlr.org/)


### 1.2. Instalação ANTLR4 para Python

Para instalar o ANTLR4 para Python, execute o seguinte comando:

```bash
pip install antlr4-python3-runtime
```

### 1.3 Uso do antlr4 para gerar os componentes da linguagem
Lexer, Parser, Visitor e Listener sao gerados a partir do arquivo de gramatica HoneyCalc.g4. Alterações na gramatica devem ser seguidas de uma nova execução desse comando e conseguente recriação do código fonte.

```bash
antlr4 -Dlanguage=Python3 -visitor HoneyCalc.g4
```
### 1.4 Execução do script driver da calculadora
Finalmente, podemos fazer alguns calculos em modo interativo no terminal.
```bash
python3 honeyC.py
```

:honeybee::honeybee:





