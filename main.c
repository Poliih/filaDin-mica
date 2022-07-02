#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct NO{
	int dado;
	struct NO* prox;
}NO;

typedef struct FILA{
	NO* inicio;
	NO* fim;
}FILA;
FILA *p;
//enfilera ou push_back
void enfileira(){
	NO* ptr = (NO *) malloc(sizeof(NO));
	ptr->dado = rand()%100;
	ptr->prox = NULL;
	if(f->inicio == NULL){
		f->inicio == ptr;
	}else{
		f->fim->prox = ptr;
	}
	f->fim = ptr;
}

//desenfileirar
//parece com o desempilha diferença inicioxtopo
int desenfileirar(){
	NO* ptr = inicio;
	int dado;
	if(ptr != NULL){
		f->inicio = ptr->prox;
		ptr->prox = NULL;
		dado = ptr->dado;
		free(ptr);
		return dado;
	}
}
