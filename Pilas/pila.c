#include "pila.h"
struct pila *push (int dato,struct pila* pila){
  struct  pila *nuevo = NULL;
  nuevo = (struct pila*)malloc(sizeof(struct pila));
  nuevo->dato=dato;
  if(pila==NULL){
    pila=nuevo;
  }
  else{
    nuevo->siguiente=pila;
    pila=nuevo;
  }
  return pila;
}

struct pila *pop(struct pila* pila){
  struct pila *aux=NULL;
  if(pila==NULL){
    printf("pila vacia\n");
    return pila;
  }
  else{
    aux=pila;
    pila=pila->siguiente;
    free(aux);
    return pila;
  }

}

struct pila *mostrar(struct pila* pila){
    struct pila *aux_mostrar=NULL;
    struct pila *pila_aux=NULL;
    if(pila==NULL){
      printf("pila vacia\n");
      return pila;
    }
    if(pila->siguiente==NULL){
      printf("%d\n",pila->dato);
      return pila;
    }
    else{
      aux_mostrar=pila;
      printf("%d\n",pila->dato);
      pila=pila->siguiente;
      pila_aux=aux_mostrar;
      pila_aux->siguiente=NULL;
      aux_mostrar=pila;
      while(pila!=NULL){
        printf("%d\n",pila->dato);
        pila=pila->siguiente;
        aux_mostrar->siguiente=pila_aux;
        pila_aux=aux_mostrar;
        aux_mostrar=pila;
      }
      aux_mostrar=pila_aux;
      pila_aux=pila_aux->siguiente;
      pila=aux_mostrar;
      pila->siguiente=NULL;
      aux_mostrar=pila_aux;
      while(pila_aux!=NULL){
        pila_aux=pila_aux->siguiente;
        aux_mostrar->siguiente=pila;
        pila=aux_mostrar;
        aux_mostrar=pila_aux;
      }

    }
    return pila;
}
