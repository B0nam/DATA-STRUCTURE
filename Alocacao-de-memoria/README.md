# ALOCACAO DE MEMORIA

Esquema de memoria:

Vamos ver como a memória ram divide os seus setores:

	+-----------+
	| Código do |
	| Programa  |
	+-----------+
	| Variáveis |
	| Globais e |
	| Estaticas |
	+-----------+
	| Memória   |
	| Alocada   |
	+-----------+
	|	    |
	|	    |
	| HEAP      |
	|	    |
	|	    |
	+-----------+
	| STACK     |
	+-----------+
	
O tamanho da stack é muito menor que a memória HEAP.

--------------------------------------------------------
# ALOCACAO ESTATICA

- O espaço para as variaveis é reservado no início da execução.
- Cada variavel tem seu endereço fixado e a área de memória ocupada por ela se mantém constante durante toda a execução. (só são liberados ao fim do programa)
- São alocadas na Stack da memória RAM;
- Liberação de memória é feita automaticamente pelo compilador


Declarações como:
	int a;
	flocat b;
	char c;
	int a[10];
	float *p;
	
São todas alocações estáticas, e são guardadas na memória stack.

TODA VARIAVEL É ALOCADA NA MEMORIA STACK

--------------------------------------------------------
# ALOCACAO DINAMICA

- O espaço para as variáveis é alocado dinamicamente durante a execução do programa.
- Pode ser criada ou eliminada durante a execução do programa, ocupando espaço na memória apenas enquanto está sendo utilizada.
- São alocadas na HEAP da memória RAM.
- Liberação de memória feita manualmente pelo programador.

Declarações como:
	int *a=(int *)malloc(10*sizeof(int));
	float *b=(float*)calloc(5,sizeof(float));
	free(a);
	free(b);

--------------------------------------------------------
# PARA SE LEMBRAR

(memoria heap)
HEAP OF BOOKS.
- Livros jogados de qualquer jeito.
FREE STORE
- Terra sem lei, pega o que  for necessario.

(memoria stack)
STACK OF BOOKS.
- Livros organizados, empilhados com ordem.
- "Previsivel".

--------------------------------------------------------
# POR QUE USAR ALOCACAO DINAMICA
- Processo que aloca memória em tempo de execução.
- Utilizada quando não se sabe ao certo quanto de memória será necessário para o armazenamento dos elementos.
- O tamanho de memória é determinado conforme a necessidade.
- Evita-se o desperdicio de memória;

--------------------------------------------------------
# COMANDOS PARA ALOCACAO DINAMICA

## MALLOC
Aloca um bloco de bytes consecutivos na memória heap e devolve o edereço deste bloco.

tipo* v=(tipo*)malloc(n * sizeof(tipo));
      ---------
      Opcional
      
int* v=(int*)malloc(5 * sizeof(int));

			+-----+
		   H216	|     | [4]	|
	HEAP	   H212	|     | [3]	|
		   H208	|     | [2]	|--- Alocado 5 elementos do tamanho de int
		   H204	|     | [1]	|
		   H200	|     | [0]	|
			+-----+
			|     |
	STACK		|     |
		   S100	|h200 | V	|--- Ponteiro V aponta para o primeiro endereço do bloco alocado.
			+-----+

## CALLOC
Aloca um bloco de bytes consecutivos na memória heap e inicializa todos os valores com 0 (NULL para ponteiros).

tipo* v=(tipo*)calloc(n, sizeof(tipo));
      ---------
      Opcional

			+-----+
		   H216	|  0  | [4]	|
	HEAP	   H212	|  0  | [3]	|
		   H208	|  0  | [2]	|--- Alocado 5 elementos do tamanho de int
		   H204	|  0  | [1]	|
		   H200	|  0  | [0]	|
			+-----+
			|     |
	STACK		|     |
		   S100	|h200 | V	|--- Ponteiro V aponta para o primeiro endereço do bloco alocado.
			+-----+



































