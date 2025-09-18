# Ambiente de desenvolvimento em C para Operações de Matrizes e Cálculo de Integrais

Desenvolvida em C, esta biblioteca oferece ferramentas para operações de matrizes e a integração de funções pelo método de Riemann.

## Estrutura do Projeto

A estrutura de diretórios do projeto está organizada da seguinte forma:

```
.
├── gitignore.txt
├── Makefile
├── inc
│   ├── integral.h
│   └── matrix.h
└── src
    ├── integral.c
    ├── main.c
    └── matrix.c
```

  * **`inc/`**: Contém os arquivos de cabeçalho (`.h`) para as bibliotecas.
  * **`src/`**: Contém os arquivos de implementação (`.c`) e o arquivo principal (`main.c`).



## Funcionalidades da Biblioteca

### Operações com Matrizes (`matrix.h`, `matrix.c`)

A biblioteca de matrizes oferece as seguintes funcionalidades:

  * **Criação e Destruição**:

      * `create_matrix(rows, cols)`: Cria uma nova matriz com o número de linhas e colunas especificado, inicializando todos os elementos com zero.
      * `destroy_matrix(mat)`: Libera a memória alocada para a matriz.

  * **Operações Aritméticas**:

      * `add_matrix(a, b)`: Soma duas matrizes (`A + B`).
      * `sub_matrix(a, b)`: Subtrai duas matrizes (`A - B`).
      * `mul_matrix(a, b)`: Multiplica duas matrizes (`A * B`).

  * **Operações com Escalares**:

      * `add_scalar_matrix(a, scalar)`: Adiciona um escalar a todos os elementos da matriz.
      * `sub_scalar_matrix(a, scalar)`: Subtrai um escalar de todos os elementos da matriz.
      * `mul_scalar_matrix(a, scalar)`: Multiplica a matriz por um escalar.

  * **Outras Operações**:

      * `transpose_matrix(a)`: Calcula a transposta de uma matriz.
      * `determinant_matrix(a)`: Calcula o determinante de uma matriz quadrada.
      * `inverse_matrix(a)`: Calcula a inversa de uma matriz quadrada.

### Cálculo Numérico (`integral.h`, `integral.c`)

A biblioteca de cálculo numérico, focada na integração, inclui:

  * **Integração de Riemann**:
      * `riemann_integral(f, ctx, a, b, n)`: Calcula a integral de uma função `f` no intervalo `[a, b]` usando o método da soma de Riemann com `n` divisões. A função de integração (`f`) recebe um ponteiro de contexto (`ctx`) para permitir o uso de dados adicionais, como os coeficientes de um polinômio.



## Como compilar e executar

O projeto pode ser compilado e executado facilmente usando o `Makefile` fornecido.

1.  Abra o terminal na pasta raiz do projeto.
2.  Use o comando `make` para compilar o código e gerar o executável. 
3. O Makefile foi configurado para compilar os arquivos `.c` do diretório `src` e criar os arquivos `.o` na pasta `obj`. Após a compilação, o programa será executado automaticamente, exibindo os resultados dos testes de matrizes e integrais definidos no arquivo `main.c`.
    ```bash
    make
    ```

## Limpando o Projeto

Se precisar limpar os arquivos compilados (executável e objetos), use o comando `make clean`. Isso removerá a pasta de objetos (`obj`) e o executável final.

```bash
make clean
```