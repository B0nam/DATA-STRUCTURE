# PONTEIROS

Ponteiros são variaveis que armazenam um endereço de memória.

Para acessarmos o conteúdo de um ponteiro, utilizamos o operador *

*(ponteiro) = conteúdo do ponteiro.

ex cod:
    int a = 10;
    int *p1 = NULL;
    int *p2;

    p1 = &a;
    p2 = p1;
    *p2 = 4;

ex memoria ram:

end. memo  val.   variavel

         +------+
    8888 |      |
    .... |      |
    5012 |      |
    5004 |      |
    5000 |      |
         +------+
-------------------------------------

Executando o código...

         +------+
    8888 |      |
    .... |      |
    5012 |      |
    5004 |      |
    5000 |  10  | a
         +------+

a = (5000,5001,5002,5003) 4 bytes

-------------------------------------
Executando "int *p1 = NULL;", estamos declarando um ponteiro do tipo Inteiro recebendo o valor Nulo;

         +------+
    8888 |      |
    .... |      |
    5012 |      |
    5004 | NULL | p1
    5000 |  10  | a
         +------+

Obs: TODO PONTEIRO(endereços de memoria) ocupam 8bytes de memória.

-------------------------------------
Executando "int *p2;", estamos declarando um ponteiro do tipo Inteiro;

         +------+
    8888 |      |
    .... |      |
    5012 | #### | p2  (5012, pois é referente ao valor base de p1 + 8 bytes)
    5004 | NULL | p1
    5000 |  10  | a
         +------+

p2 está atualmente armazenando lixo;
-------------------------------------
Executando as próximas linhas...

    p1 = &a;
    p2 = p1;


         +------+
    8888 |      |
    .... |      |
    5012 | 5000 | p2
    5004 | 5000 | p1
    5000 |  10  | a
         +------+

P1 está armazenando o endereço de memoria de a.
P2 está armazenando o endereço de memoria apontado por p1

-------------------------------------
Por ultimo, *p2 = 4;

Estamos atribuindo o valor 4 para o conteúdo de p2...

O conteúdo de p2 é o endereço de memória referente a variavel a, ou seja, estamos atribuindo o valor 4 para o endereço armazenado em p2 que é 5000, endereço de a


         +------+
    8888 |      |
    .... |      |
    5012 | 5000 | p2
    5004 | 5000 | p1
    5000 |  4   | a
         +------+


s










