#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Alocacao estatica. (STACK)
    int vStack[5] = {0, 10, 20, 30, 40};
    printf("--- VETOR ESTATICO ---\n");
    printf("&vStack = %p, vStack = %p\n", &vStack, vStack);
    for (int i = 0; i<5;i++)
    {
        printf("&vStack[%d] = %p, vStack[%d] = %d\n", i, &vStack[i], i, vStack[i]);
    }
    printf("\n");

    // ALOCACAO DINAMICA MALLOC. (HEAP)
    int *vHeapMalloc = (int *)malloc(5 * sizeof(int));
    printf("--- VETOR DINAMICO MALLOC ---\n");
    printf("&vHeapMalloc = %p, vHeapMalloc = %p\n", &vHeapMalloc, vHeapMalloc);
    for (int i = 0; i<5; i++)
    {
        printf("&vHeapMalloc[%d] = %p, vHeapMalloc[%d] = %d\n", i, &vHeapMalloc[i], i, vHeapMalloc[i]);
    }
    printf("\n");

    // ALOCACAO DINAMICA CALLOC. (HEAP)
    int *vHeapCalloc = (int *)calloc(5,sizeof(int));
    printf("--- VETOR DINAMICO CALLOC ---\n");
    printf("&vHeapCalloc = %p, vHeapCalloc = %p\n", &vHeapCalloc, vHeapCalloc);
    for (int i = 0; i<5; i++)
    {
        printf("&vHeapCalloc[%d] = %p, vHeapCalloc[%d] = %d\n", i, &vHeapCalloc[i], i, vHeapCalloc[i]);
    }

    free(vHeapCalloc);
    free(vHeapMalloc);

    return 0;
}