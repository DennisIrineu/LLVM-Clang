
Projeto de Exemplo: Cobertura de Código com LLVM + Clang
Este projeto demonstra como usar o LLVM + Clang para gerar relatórios de cobertura de código em projetos escritos em C. Ele inclui exemplos de código modularizados e um Makefile para automatizar a compilação, execução e geração de relatórios.

Estrutura do Projeto
```bash  
        exemple_llvm_clang/
        ├── src/
        │   ├── main.c
        │   ├── math_operations.c
        │   ├── math_operations.h
        │   ├── string_operations.c
        │   ├── string_operations.h
        │   ├── utils.c
        │   └── utils.h
        ├── Makefile
        ├── README.md
```
Sobre o LLVM + Clang

O que é o LLVM?
O LLVM (Low-Level Virtual Machine) é um conjunto de ferramentas para a construção de compiladores e ferramentas de análise estática. Ele fornece uma infraestrutura modular para otimização e geração de código, além de ferramentas como llvm-profdata e llvm-cov para análise de cobertura de código.

O que é o Clang?
O Clang é o front-end do LLVM para as linguagens C, C++ e Objective-C. Ele é responsável por analisar o código fonte, gerar uma representação intermediária (IR) e integrar-se com as ferramentas do LLVM para otimização e geração de código.


Tutorial: Como Compilar e Usar o Projeto
Pré-requisitos
Clang: O compilador front-end do LLVM para C, C++ e Objective-C.

LLVM: O conjunto de ferramentas que inclui llvm-profdata e llvm-cov para processar dados de cobertura.

Make: Ferramenta para automatizar a compilação e execução do projeto.

Instalação no Linux (Ubuntu/Debian)
Instale o Clang e o LLVM:
```bash  
  
 
sudo apt update
sudo apt install clang llvm
```
Instale o Make:
```bash 
  
  
sudo apt install make
```
Verifique a instalação:
```bash  
  
  
clang --version
llvm-profdata --version
llvm-cov --version
```
Como Usar o Projeto
Clone o repositório:
```bash 
  
  
git clone https://github.com/seu-usuario/exemple_llvm_clang.git
cd exemple_llvm_clang
```
Compile o projeto:

  
```bash
make all
```
Execute o programa:

  
```bash
./exemple_llvm_clang
```
Gere o relatório de cobertura no terminal:

```bash
  
make coverage
```
Gere o relatório de cobertura em HTML:

```bash  
  
make coverage-html

```
Visualize o relatório HTML:

Abra o arquivo coverage_report.html no navegador:

  
```bash 
xdg-open coverage_report.html
```
Limpe os arquivos gerados:
Para remover o executável, arquivos de cobertura e relatórios, use:

  
```bash
make clean
```

Análise do instrumento
Pontos fortes
Relatórios de cobertura precisos:

Mostra exatamente quais linhas de código foram atingidas.

Integração com LLVM:

Ferramentas como llvm-profdata e llvm-cov funcionam perfeitamente com o Clang.

Automação via Makefile:

Facilita a compilação, execução e geração de relatórios.

Suporte a padrões modernos:

Compatível com os padrões mais recentes de C e C++.

Multiplataforma:

Funciona em Linux, macOS e Windows (com WSL).

Fraquezas
Curva de aprendizado:

A configuração inicial pode ser difícil para um novato.

Dependência de ferramenta externa:

Depende do llvm-cov para relatórios HTML que podem não ser intuitivos.

Documentação técnica:

A documentação é exaustiva, mas pode ser difícil de entender.

Compatibilidade com legado:

Pode exigir ajustes para funcionar com código legado.

Segue [vídeo](https://www.youtube.com/watch?v=MNp0pumkarQ) demonstrando como fazer o make e explicações
