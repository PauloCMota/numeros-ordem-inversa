#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, v[5];
    FILE *f = fopen("Arquivo NUM " , "w");
    // captura os numeros
    for(i=0;i<5;i++)
    {
        printf("Elemento[%d]= ", i);
        scanf("%d" , &v[i]);
    }
    // Exibir valores originais
    printf("\n::: Valores originais ::: \n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",v[i]);
    }
    //Exibir valores originais
    printf("\n::: Valores na ordem inversa ::: \n");
    for(i=4;i>=0;i--)
    {
        printf("%d\n" , v[i]);
        fprintf(f,"%d" , v[i]);
    }
    fclose(f);
    return 0;
}
