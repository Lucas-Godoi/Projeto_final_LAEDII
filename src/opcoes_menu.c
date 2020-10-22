#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "header.h"

void mostrarCardapio(lista c){
	struct no_lista *aux;
	int i = 1;
    if (c.inicio == NULL)
        printf("Cardapio vazio. . .\n\n");
    else
    {
        printf("\nCardapio Grande Restaurante da Tia Magali:\n");
        aux = c.inicio;
        do
        {
            printf("Item %d: %s\n", i, aux->nome);
            aux = aux->prox;
            i++;
        } while (aux != NULL);//enquanto nao chegar no aux->prox == NULL, continuar o programa.
    }
}
void mostrarPedidos(fila p){
    struct no_fila *aux;
    int contagem = 0;
    aux = p.inicio;

    if (aux == NULL) {
        printf("\nFila de pedidos vazia....\n\n");
    } else {
        while (aux != NULL)
        {
            printf("\n > Pedido %d: %s", contagem, aux->nome);
            aux = aux->prox;
        }
    }
}
void adicionarItemCardapio(lista *c){
    char *novo_item;
    int tam = 30;

    novo_item = (char *) malloc(sizeof(char) * tam);

    printf("\nDigite o item a ser adicionado no card�pio: ");
    fgets(novo_item,tam,stdin);

    if(lista_inserir(c, novo_item))
    {
        printf("\nItem adicionado com sucesso!!\n");
    }
    else
    {
        printf("\nN�o foi poss�vel adicionar o item � lista\n");
    }
}
void removerItemCardapio(lista *c){

}
void cadastrarPedido(fila *p){

}
void servirPedido(fila *p){

}
//Erro de compilacao no CodeBlocks(Marcus): c:\program files (x86)\codeblocks\mingw\bin\..\lib\gcc\mingw32\4.4.1\..\..\..\libSDL2main.a(SDL_windows_main.o):SDL_windows_main.c||
//mensagem do erro: undefined reference to `SDL_main'|
