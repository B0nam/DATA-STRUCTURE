# PONTEIRO DE PONTEIRO
Ponteiros que apontam para outros ponteiros.

ponteiro1 = &ponteiro2
&ponteiro1 = endereço do ponteiro1, normal
ponteiro1 = armazena o endereço do ponteiro 2 (&ponteiro2)
*ponteiro1 = conteudo do ponteiro1 é o conteudo de onde o ponteiro2 aponta

ex cod:
    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;
    
    **p2 = 99;

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
Vamos ao código...

    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;			OBSERVE OS DOIS *, O TIPO DE P2 É PONTEIRO DE PONTEIRO

         +------+
    8888 |      |
    .... |      |
    5012 | 5004 | p2
    5004 | 5000 | p1
    5000 |  10  | a
         +------+

-------------------------------------
Para a linha "    **p2 = 99;" estamos armazenando o valor 99 dentro do endereço apontado pelo conteúdo (*p2) do conteúdo (*p1).
 
**p2 = **(5004)

*(5004) = 5000;
*(5000) = 10;

Sendo assim, colocamos 99 no endereço 5000.

         +------+
    8888 |      |
    .... |      |
    5012 | 5004 | p2
    5004 | 5000 | p1
    5000 |  99  | a
         +------+






























