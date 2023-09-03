# PONTEIROS

## Variáveis e memória.
Na linguagem C, cada variável está associada a:
    - nome;
    - tipo;
    - valor;
    - endereço;

ex cod:
    int a = 10; *
    int b,c;

    b = 20;
    c = a+b;

ex memoria ram:

end. memo  val.   variavel

         +------+
    8888 | #### |
    .... |      |
    3028 | #### |
    3024 | #### |
    3020 |  10  | a
         +------+
&a = 3020; a=10
-------------------------------------
Para o nosso código "int a = 10" estamos pedindo ao sistema operacional para armazenarmos o valor 10 na memoria do equipamento, o que resulta no sistema operacional alocando um espaço na memoria onde estiver disponivel. No caso do nosso código, a posição 3020.

Obs: Cada tipo de variavel possui um tamanho específico, no caso de int, são necessários 4 bytes em memoria. (1 byte = 8bits)

-------------------------------------
Vamos para a próxima linha

ex cod:
    int a = 10;
    int b,c; *

    b = 20;
    c = a+b;

ex memoria ram:

end. memo  val.   variavel

         +------+
    8888 | #### |
    .... |      |
    3028 | #### |
    3024 | #### |
    3020 |  10  | a
         +------+
&a = 3020; a=10

-------------------------------------
Para a próxima linha de código "int b, c" estamos pedindo para o SO alocar mais dois espaços de 4 bytes em memória, desta forma ele buscara o próximo espaço em memoria disponivel, que seria, a posição de memória da variavel a + 4 bytes.

         +------+
    8888 | #### |
    .... |      |
    3028 | #### |
    3024 | #### |
    3020 |  10  | a
         +------+

&a + 4 bytes = &b

&b = 3024

No caso da variavel A, o que nos é mostrado é o endereço base, apenas o primeiro endereço de memória, que no caso é 3020. De fato a variavel a está ocupando os seguintes endereços: 3020, 3021, 3022, 3023. (4 bytes)


         +------+
    8888 | #### |
    .... |      |
    3028 | #### | c -|
    3024 | #### | b -| Variaveis alocadas pelo código int b,c. (Como nenhum valor foi atribuido, a variavel armazenara lixo de memória)
    3020 |  10  | a
         +------+

&a = 3020; a = 10;
&b = 3024; b = ####; //lixo
&c = 3028; c = ####; //lixo


Obs: Em C, & estamos falando sobre endereço de memória e sem é o conteúdo da variavel.
-------------------------------------
Para a próxima linha, "b = 20", estamos atribuindo o valor 20 ao endereço de memória alocado para a variavel B.

         +------+
    8888 | #### |
    .... |      |
    3028 | #### | c
    3024 |  20  | b
    3020 |  10  | a
         +------+

&a = 3020; a = 10;
&b = 3024; b = 20;
&c = 3028; c = ####; //lixo

-------------------------------------
Para a próxima linha, "c = a+b"

         +------+
    8888 | #### |
    .... |      |
    3028 |  30  | c
    3024 |  20  | b
    3020 |  10  | a
         +------+

&a = 3020; a = 10;
&b = 3024; b = 20;
&c = 3028; c = 30;











