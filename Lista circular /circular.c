#include "circular.h"
struct Lista *insertar (int dato,struct Lista* Lista){
  struct  Lista *nuevo = NULL;
  struct  Lista *aux=NULL;
  nuevo = (struct Lista*)malloc(sizeof(struct Lista));
  nuevo->dato=dato;
  if(Lista==NULL){
    Lista=nuevo;
    Lista->siguiente=NULL;
  }
  else if(Lista->siguiente==NULL){
    Lista->siguiente=nuevo;
    nuevo->siguiente=Lista;
  }
  else{
    aux=Lista;
    while(aux->siguiente!=Lista){
      aux=aux->siguiente;
    }
    aux->siguiente=nuevo;
    nuevo->siguiente=Lista;
  }
  return Lista;
}

struct Lista *borrar(int dato, struct Lista* Lista){
  struct Lista *aux_borrar=NULL;
  struct Lista *aux=NULL;
  aux_borrar=Lista;
  if((aux_borrar->dato==dato)&&(aux_borrar==Lista)){
      aux=Lista;
      while (aux->siguiente!=Lista){
        aux=aux->siguiente;
      }
      aux->siguiente=Lista->siguiente;
      Lista=aux_borrar->siguiente;
      free(aux_borrar);
      return Lista;
  }
  else{
    while(aux_borrar->siguiente!=Lista){
        aux=aux_borrar;
        aux_borrar=aux_borrar->siguiente;
        if(aux_borrar->dato==dato){
            aux->siguiente=aux_borrar->siguiente;
            free(aux_borrar);
            return Lista;
        }
      }
  }
  if(aux_borrar->siguiente==Lista){
    printf("No existe dato\n");
  }
  return Lista;
}

struct Lista *mostrar(struct Lista* Lista){
  struct Lista *aux_mostrar=NULL;
  aux_mostrar=Lista;
  while(aux_mostrar->siguiente!=Lista){
    printf("%d\n",aux_mostrar->dato);
    aux_mostrar=aux_mostrar->siguiente;
  }
  printf("%d\n",aux_mostrar->dato);
  return Lista;
}
