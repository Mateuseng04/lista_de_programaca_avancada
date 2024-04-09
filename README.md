# **lista_de_programaca_avancada**

Repositório com os arquivos da lista de Programação avançada (DCA0803) da primeira unidade

Componentes: Mateus de Oliveira Souza

Matrícula: 20230023030


##Questão 1:

Seja enunciado o seguinte código:

int i=3, j=5;
int *p,*q;
p = &i;
q = &j;

E tendo em mente as propriedades dos ponteiros em C, é possível responder as seguintes afirmações:

(I): p == &i é uma afirmação verdadeira, pois a variável p assume quaisquer valores que i possa assumir, tornando a expressão sempre válida.

(II): *p - *q: O operador * retorna ao valor armazenado pelas variáveis cujo os endereços de memória estão sendo armazenados nos ponteiros. Desta forma, a operação supracitada nada mais é que i - j => 3 - 5 = 2.

(III):**&p: O ponteiro para ponteiro p irá apontar para o endereço final da variável p, enquanto p apontará para um valor intermediário.

(IV) 3 - *p/(*q) - 7: O quarto item recai no mesmo princípio do item II. Se a expressão fosse p/q, o compilador não completaria a execução, por se tratar de uma operação proibida


##Questão 2:
Seja enunciado o seguinte código

main(){
  int i=5, *p;
  p = &i;
  printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);
1
}

O programa irá imprimir os seguintes resultados:
<endereço>, <endereço>, 7 , 5, 15, 9.

##Questão 3:
Dadas as seguintes atribuições:

(i) p = &i; -> legal
(ii) *q = &j; -> ilegal
(iii) p = &*&i; -> ilegal
(iv) i = (*&)j; -> legal
(v) i = *&j; -> legal
(vi) i = *&*&j; -> ilegal
(vii) q = *p; -> legal
(viii) i = (*p)++ + *q; -> legal

##Questão 4: 



##Questão 5:


##Questão 6:
Dado que a variável pulo representa o elemento número zero da array, isto é, o primeiro elemento na contagem da linguagem C, o terceiro elemento será representado da seguinte forma:

*pulo = elemento 0;
*(pulo + 2) =  terceiro elemento da array.

#Questão 7:
Devido a sintaxe dos ponteiros, as três primeiras sentenças são válidas. Ao declar p = mat, a variável p assume o valor do primeiro elemento da array e permite a contagem de outros elementos, tornando p = p + 1 também verdadeiro. x = (*mat) também é verdadeiro.

##Questão 8:



##Questão 9:


##Questão 10:
O código não será compilado, exibindo uma mensagem de erro pelo compilador. Isso ocorre pois não é possível incrementar variáveis constantes.
#Questão 11:

##Questão 12:
(i): aloha[2] = value é um comando válido. O programa irá imprimir o valor 2.20000;
(ii): scanf("%f", &aloha) é um comando válido. O sistema irá escrever um valor float na variável aloha[0];
(iii): "aloha = "value"" é um comando inválido, pois aloha não pode guardar strings, devido a seu tipo ser float.
(iv): printf("%f", aloha) é um comando válido. Irá imprimir qualquer valor dado a aloha[0];
(v): coisas[4][4] = aloha é um comando válido;
(vi): coisas[5] = aloha é um comando inválido;
(vii): pf = value é um comando válido;
(viii) pf = aloha é um comando válido.

##Questão 13: 
Um vazamento de memória decorre quando um programa não libera uma memória que foi alocada dinamicamente, levando a um consumo cada vez maior da memória da máquina. O vazamento costuma levar a uma performace pior do sistema e, em alguns casos, a um crash do programa.
As funções que costuman causar o vazamento de memória são o malloc() e o calloc(). Ele ocorre quando estas funções alocam memória para o programa, mas não a libera após ser utilizada. Outro caso que pode causar este fenômeno é o uso de ponteiros: quando um ponteiro está fora do escopo da função a ser executada ou recebe um endereço antes de seu primeiro endereço ser liberado.

Exemplos: 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int ptr = (int)malloc(sizeof(int));
    ptr = (int*)malloc(sizeof(int));

return 0;
}
Exemplo 2:
#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int a = 12, b = 24; 
    {
        int *sum = (int*)malloc(sizeof(int));
        *sum = a + b;
    }
   
    printf("%d\n", *sum);
    return 0;
}
Exemplo 3: 
#include <stdlib.h>
void teste(){
 char *p;
 p = (char *)malloc(100*sizeof(char));
 /* processa operação */
 ...
}
int main(){
 int i = 0;
 while (i < 100) {
 teste();
 i++;
 }
 return 0;
}

##Questão 14:
Em C, ponteiros são variáveis que armazenam endereços de memória de outras variáveis. Em funções, utiliza-se ponteiros para definir qual função será executada sem a necessidade de escrever o nome completo da função.
Um ponteiro para função tem a seguinte declaração:
tipo_de_retorno(*nome_do_ponteiro)();
ou: tipo_de_retorno(*nome_do_ponteiro)(declaração_de_parâmetros)
Como exemplo, temos o seguinte programa:

#include <stdio.h>
#include <stdlib.h>

float area (float a, float b) {
// Declaração da função área, cujos parâmetros a e b são do tipo float
    float c;
// Declaração do resultado c, também do tipo float
    return (c = a * b);
// Retorno da funcção
}

int main(void) {
    // Declaração do ponteiro px, que aponta para a função já definida
    float (*px)(float, float) = &area; 
    // Valores a serem cálculados pela função
    printf ("A area e igual a: %f\n", px(3.5, 4.6));

}

##Questão 15:
Código em arquivo separado.
##Questão 16:
Código em arquivo separado.
#Questão 17:
Código em arquivo separado.
##Questão 18:
Para medir o tempo que uma função leva para ser implementada em C, utiliza-se a função clock(). É a função mais generalista, podendo ser utilizada em qualquer sistema; é invocada com a biblioteca <time.h> e, junto com ela, vêm também as funcionalidades CLOCKS_PER_SEC e clock_gettime, permitindo saber o tempo gasto em milissegundos. Para sistemas Unix, existe o comando $ time./.a.out. Também é possível utilizar a função clock_gettime no Linux, para conseguir a hora do sistema.

#$Questão 19:
 

##Questão 20:

##Questão 21:
O código E libera a variável m duas vezes, ação que pode ocasionar um vazamento de memória e não é permitido em linguagem C. O double free, como é chamado, pode levar o programa a se comportar de formas instáveis e aleatórias, podendo corromper os blocos já existentes no programa ou alocar a mesma memória múltiplas vezes, chamando a função malloc novamente, por exemplo.
##Questão 22:
A

##Questão 23:



##Questão 24:


#$Questão 25: