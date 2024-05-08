#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_VERTICES 20

struct Grafo {
    int numVertices;
    int direcionado;
    int adjMatrix[MAX_VERTICES][MAX_VERTICES];
};

typedef struct Grafo Grafo;

Grafo* criarGrafo(int numVertices, int direcionado) {
    Grafo* grafo = (Grafo*)calloc(1, sizeof(Grafo));
    grafo->numVertices = numVertices;
    grafo->direcionado = direcionado;

    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            grafo->adjMatrix[i][j] = 0;
        }
    }

    return grafo;
}

void adicionarAresta(Grafo* grafo, int src, int dst) {
    grafo->adjMatrix[src][dst] = 1;
    if (grafo->direcionado){
        grafo->adjMatrix[dst][src] = 1;
    }
}

void removerAresta(Grafo* grafo, int src, int dst) {
    grafo->adjMatrix[src][dst] = 0;
    if (grafo->direcionado){
        grafo->adjMatrix[dst][src] = 0;
    }
}

void dfs(Grafo* graph, int startVertice, bool* visited) {
    visited[startVertice] = true;
    printf("%d ", startVertice);

    for (int i = 0; i < graph->numVertices; i++) {
        if (graph->adjMatrix[startVertice][i] && !visited[i]) {
            dfs(graph, i, visited);
        }
    }
}

void realizaDfs(Grafo* graph, int startVertice) {
    if (startVertice < 0 || startVertice >= graph->numVertices) {
        printf("Vertice invalido.\n");
        return;
    }

    bool visited[MAX_VERTICES] = {false};

    printf("Iniciando busca em profundidade a partir de %d:\n", startVertice);
    dfs(graph, startVertice, visited);
    printf("\n");
}

void imprimeGrafo(Grafo* graph) {
    printf("Matriz de Adjacencias:\n");
    for (int i = 0; i < graph->numVertices; i++) {
        for (int j = 0; j < graph->numVertices; j++) {
            printf("%d ", graph->adjMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int numVertices, isDirected;
    printf("Escolha o tipo de grafo:\n");
    printf("1. Grafo nao dirigido\n");
    printf("2. Grafo dirigido\n");
    printf("Digite a opcao (1 ou 2): ");
    scanf("%d", &isDirected);

    printf("Digite o numero de vertices do grafo: ");
    scanf("%d", &numVertices);

    Grafo* graph = criarGrafo(numVertices, isDirected);

    int choice, src, dest, startVertice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Adicionar conexao\n");
        printf("2. Remover conexao\n");
        printf("3. Realizar busca em profundidade\n");
        printf("4. Imprimir grafo\n");
        printf("5. Sair\n");
        printf("Digite a opcao: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Digite o vertice de origem: ");
                scanf("%d", &src);
                printf("Digite o vertice de destino: ");
                scanf("%d", &dest);
                adicionarAresta(graph, src, dest);
                printf("Conexao adicionada.\n");
                break;
            case 2:
                printf("Digite o vertice de origem: ");
                scanf("%d", &src);
                printf("Digite o vertice de destino: ");
                scanf("%d", &dest);
                removerAresta(graph, src, dest);
                printf("Conexao removida.\n");
                break;
            case 3:
                printf("Digite o vertice de inicio da busca: ");
                scanf("%d", &startVertice);
                realizaDfs(graph, startVertice);
                break;
            case 4:
                imprimeGrafo(graph);
                break;
            case 5:
                exit(0);
            default:
                printf("Opcao invalida.\n");
        }
    }

    return 0;
}
