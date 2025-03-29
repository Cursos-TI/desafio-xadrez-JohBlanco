#include <stdio.h>

int main(){
    int i; //Variável de contagem

    //Movimento da Torre
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }
    i = 0; //Reinicia a variável de contagem

    //Movimento do Bispo
    printf("Movimento do Bispo:\n");
    while (i < 5)
    {
        printf("Cima Direita\n");
        i++;
    }
    i=0; //Reinicia a variável de contagem

    //Movimento da Rainha
    printf("Movimento da Rainha:\n");
    do
    {
        printf("Esquerda\n");
        i++;
    } while (i < 8);
    i=0; //Reinicia a variável de contagem

    //Movimento do Cavalo
    printf("Movimento do Cavalo:\n");
    for (i = 0; i < 3; i++)
    {
        while (i < 2)
        {
            printf("Baixo\n");
            i++;
        }
        printf("Esquerda\n");
    }
    return 0;
}
