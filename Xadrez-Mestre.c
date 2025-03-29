#include <stdio.h>

void MovimentoTorre(int t){
    if (t<5)
    {
        printf("Direita\n");
        MovimentoTorre(t+1);
    }
}

void MovimentoBispo(int b){
    if (b<5)
    {
        printf("Cima Direita\n");
        MovimentoBispo(b+1);
    }
}

void MovimentoRainha(int r){
    if (r<8)
    {
        printf("Esquerda\n");
        MovimentoRainha(r+1);
    }
}

void MovimentoCavalo(int c){
    if (c<2)
    {
        printf("Cima\n");
        c++;
        MovimentoCavalo(c);
    }else{
        printf("Direita\n");
    }
}

int main(){

    //Movimento da Torre
    printf("Movimento da Torre:\n");
    MovimentoTorre(0);
    printf("\n");

    //Movimento do Bispo
    printf("Movimento do Bispo:\n");
    MovimentoBispo(0);
    printf("\n");

    //Movimento da Rainha
    printf("Movimento da Rainha:\n");
    MovimentoRainha(0);
    printf("\n");

    //Movimento do Cavalo
    printf("Movimento do Cavalo:\n");
    MovimentoCavalo(0);
    printf("\n");

    //Movimento do Bispo aninhado
    int i,j = 0; //Variáveis de contagem
    printf("Movimento do Bispo Aninhado:\n");
    for (i = 0; i < 5; i++)
    {
        while (j<5)
        {
            printf("Direita\n");
            j++;
        }
        printf("Cima\n");
    }
    return 0;
}
