# ARITIMERICA DE PONTEIROS

int v[5];

- O simbolo v é uma constante que representa o endereço inicial do vetor.
- Logo, sem indexação, v aponta para o primeiro elemento do vetor.

&v = v = &v[0]

         +------+
         |  	| 
         |      |
     ... |  	|
    	 | #### |
    S120 |  1   | v[4]
    S116 |  16  | v[3]
    S112 |  4   | v[2]
    S108 |  5   | v[1]
    S104 |  10  | v[0]
    S100 |  1   | i
         +------+

v = &v;
v[0] = *v;

v+1 = &v + 1x(sizeof(int))
v+1 = s104 + 1x4 = s108









