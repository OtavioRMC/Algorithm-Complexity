# Complexidade de Algoritmos

### Introdução à complexidade de algoritmos.

# índice
  * [Introdução](#introdução)
    *   [Notação assintótica](#notação-assintótica)
  * [Análise de complexidade de tempo](#Complexidade-de-Tempo)
  

# Introdução

A complexidade computacional de um algoritmo é a medida da quantidade de recursos computacionais (tempo e espaço) quando um algoritmo particular é executado. 

Definimos a complexidade de tempo como uma função que depende de N (Tamanho do input), T(n) - Tempo versus o tamanho de entrada N, a complexidade de espaço sendo S(n) - Espaço versus o tamanho de entrada N.

Compreender a complexidade de um algoritmo é importante para avaliar  eficiência e prever o desempenho em diferentes tamanhos de entrada e escolher o algoritmo certo para um determinado problema. É fundamental para desenvolvedores de software por diversas razões:

* Ajuda a identificar problemas de perfomance.
* Possibilita otimização no código.
* Leva a melhores decisões de design de software.
* Melhora a escalabilidade.






# Notação Assintótica

Notação assintótica , é uma ferramenta matemática usada para descrever a performance de algoritmos.

É uma forma de espressar a taxa de crescimento de uma função em relação ao tamanho de entrada (N).

As principais notações na analise de complexidade são:

-  Big-O (O)
-  Omega (Ω)
-  Teta (Θ)

### Big-O
  A notação big-o é usada para definir a complexidade de tempo no pior caso (Worst Case).
### Omega Ω
   Define a compelxidade de tempo no melhor caso ( Best case ).
### Teta Θ
  Define a complexidade de tempo no caso médio ( Average case).

<br>

### Qual análise de complexidade é geralmente usada?

<br>
A complexidade do pior caso geralmente é mais fácil de calcular do que o caso médio. Descobrir como será um conjunto “médio” de entradas costuma ser um desafio. Para descobrir a complexidade do pior caso, precisamos apenas identificar aquela única entrada que resulta na execução mais lenta.


# Complexidade de Tempo

Para definir a complexidade de tempo de um algoritmo um passo a passo deve ser seguido:


1. Levar em conta apenas as repetições do código.

2. Verificar a complexidade dos métodos própios da linguagem (se utilizado).

3. Ignorar Constantes .

4. Considerar o termo de maior grau.

## Exemplos práticos 

<br>

```c
int exemplo1(int *array,int size,int value){
    for(int i = 0; i < size; i++){//
      if(array[i] == value) return i;
    }
    return -1;
}
```
No exemplo acima as operações de atribuição e declaração de variáveis são valores constantes e portanto desconsiderados. O laço for() repete "size" vezes , onde size é o tamanho do vetor de entrada, por conseguinte representa O(N) já que a quantidade de repetições depende diretamente do tamanho do vetor.

Portanto a complexidade de tempo do algoritmo "exemplo1" é *O(N)* no pior caso.

