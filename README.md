# **lista_de_programaca_avancada**

Repositório com os arquivos da lista de Programação avançada (DCA0803) da primeira unidade

Componentes: Mateus de Oliveira Souza

Matrícula: 20230023030


#Questão 1

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


#Questão 2:
Seja enunciado o seguinte código

main(){
  int i=5, *p;
  p = &i;
  printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);
1
}

O programa irá imprimir os seguintes resultados:
<endereço>, <endereço>, 7 , 5, 15, 9.

#Questão 3:
Dadas as seguintes atribuições:

(i) p = &i; -> legal
(ii) *q = &j; -> ilegal
(iii) p = &*&i; -> ilegal
(iv) i = (*&)j; -> legal
(v) i = *&j; -> legal
(vi) i = *&*&j; -> ilegal
(vii) q = *p; -> legal
(viii) i = (*p)++ + *q; -> legal

#Questão 4: 



#Questão 5:


#Questão 6:
Dado que a variável pulo representa o elemento número zero da array, isto é, o primeiro elemento na contagem da linguagem C, o terceiro elemento será representado da seguinte forma:

*pulo = elemento 0;
*(pulo + 2) =  terceiro elemento da array.

#Questão 7:
Devido a sintaxe dos ponteiros, as três primeiras sentenças são válidas. Ao declar p = mat, a variável p assume o valor do primeiro elemento da array e permite a contagem de outros elementos, tornando p = p + 1 também verdadeiro. x = (*mat) também é verdadeiro.

#Questão 8:



#Questão 9:
