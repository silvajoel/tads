#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "linked_list.h"
/**
 * Defina, usando typedef struct, 
 * o TAD Monômio para representar um termo
 *  de um polinômio (coeficiente e expoente), 
 * e o TAD Polinômio como uma lista ligada de monômios.
 */
Lista* cria_lista(){
    Lista* li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL;
    }

    return li;
}

void libera_lista(Lista* li){
    if(li != NULL){
        Elemento* no;
        while ((*li) != NULL)
        {
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

void main(){
    li = cria_lista();
}