#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, v[5];
    FILE *f=fopen("ordemInversa.txt", "w");
    printf("Este programa recebe uma ordem de vetores, e os retorna inverso, junto também com um .TXT com o vetor e sua ordem inversa.\n\n");
    for(i=0;i<5;i++){
        printf("Elemento[%d]= ",i);
        scanf("%d", &v[i]);
    }
    printf("\n: : : Valores originais : : :\n\n");
    fprintf(f, "Ordem original:");
    for (i=0;i<4;i++){
        printf("%d, ", v[i]);
        fprintf(f, " %d, ", v[i]);
    }
    for(i=4;i<5;i++){
        printf("%d.", v[i]);
        fprintf(f, "%d.", v[i]);
    }
    printf("\n\n: : : Valores na Ordem inversa : : :\n");
    fprintf(f,"\nValores na ordem inversa: ");
    for(i=4;i>0;i--){
        printf("%d, ", v[i]);
        fprintf(f, "%d, ", v[i]);
    }
    for(i=0;i>-1;i--){
        printf("%d", v[i]);
        fprintf(f, "%d", v[i]);
    }
    printf("\n");
    return 0;
}
