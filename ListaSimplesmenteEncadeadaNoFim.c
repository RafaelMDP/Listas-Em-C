#include<stdio.h>
#include<stdlib.h>

typedef struct no No;

struct no{
    int num;
    struct no *prox;
};

No* criar_no(){
    No *no=(No*)malloc(sizeof(No));
    return no;
}
No* inserir_elemento_fim(No* Lista, int dado){
    No *novono=criar_no();
    novono->num =dado;

    if(Lista==NULL){
        novono->prox=NULL;
        Lista=novono;
    }else{
        No* aux=Lista;
        while(aux->prox!=NULL){
            aux=aux->prox;
        }
        novono->prox=NULL;
        aux->prox=novono;
    }
}
void imprimir_lista(No* Lista){
    No *aux =Lista;
        while(aux!=NULL){
        printf("%d ", aux->num);
        aux=aux->prox;
    }
}
int main(){
    No* lista=NULL;
    lista=inserir_elemento_fim(lista,5);
    lista=inserir_elemento_fim(lista,10);
    imprimir_lista(lista);

return 0;
}
