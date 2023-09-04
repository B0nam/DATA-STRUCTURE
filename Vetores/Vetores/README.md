# VETORES
A forma mais simples de estruturarmos uma lista de elementos é por meio de vetores/arrays:

int v[10];

- Um vetor de inteiros dimensionado com 10 elementos;
- Reservamos um espaço de memória contínuo para armazenar 10 valores inteiros;
- Se cada int ocupa 4 bytes, a declaração reserva um espaço de memória de 40bytes;

Ex. Memoria:

         +------+
         |  	| 
         |      |
         |      |
     ... |  	|
    S136 | #### | v[9]
    S132 | #### | v[8]
    S128 | #### | v[7] 
    S124 | #### | v[6] 
    S120 | #### | v[5]
    S116 | #### | v[4]
    S112 | #### | v[3]
    S108 | #### | v[2]
    S104 | #### | v[1]
    S100 | #### | v[0]
         +------+

- O acesso a cada elemento do vetor é feito através de uma indexação da variável v;
- Em C, a indexação de um vetor varia de 0 a n-1 onde n representa a dimensão do vetor;

- v[0] acessa o primeiro elemento v;
- v[1] acessa o segundo elemento de v;

---------------------------------------------------------------------------------------------------------------















