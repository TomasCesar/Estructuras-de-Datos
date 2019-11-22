#include "cirdoble.h"
struct Lista *insertar (int dato,struct Lista* Lista){
  struct  Lista *nuevo = NULL;
  struct  Lista *aux=NULL;
  nuevo = (struct Lista*)malloc(sizeof(struct Lista));
  nuevo->dato=dato;
  if(Lista==NULL){
    Lista=nuevo;
    Lista->siguiente=NULL;
    Lista->anterior=NULL;
  }
  else if((Lista->siguiente==NULL)&&(Lista->anterior==NULL)){
    Lista->siguiente=nuevo;
    nuevo->siguiente=Lista;
    Lista->anterior=nuevo;
    nuevo->anterior=Lista;
  }
  else{
      Lista->anterior->siguiente=nuevo;
      nuevo->anterior=Lista->anterior;
      Lista->anterior=nuevo;
      nuevo->siguiente=Lista;
  }
  return Lista;
}

struct Lista *borrar(int dato, struct Lista* Lista){
  struct Lista *aux_borrar=NULL;
  if(Lista!=NULL){
    if(Lista->siguiente==NULL){
      free(Lista);
    }
    else if((Lista->dato==dato) && (Lista->siguiente!=NULL)){
      aux_borrar=Lista;
      Lista=Lista->siguiente;
      aux_borrar->anterior->siguiente=aux_borrar->siguiente;
      aux_borrar->siguiente->anterior=aux_borrar->anterior;
      free(aux_borrar);
    }
    else{
      aux_borrar=Lista->siguiente;
      while((aux_borrar !=Lista) && (aux_borrar->dato !=dato)){
        aux_borrar=aux_borrar->siguiente;
        if((aux_borrar->siguiente==Lista)&&(aux_borrar->dato!=dato)){
          printf("\nNo existe el dato");
          break;
        }
      }
      aux_borrar->anterior->siguiente=aux_borrar->siguiente;
      aux_borrar->siguiente->anterior=aux_borrar->anterior;
      free(aux_borrar);
    }
  }
  return Lista;
}

struct Lista *mostrar(struct Lista* Lista){
    struct  Lista *aux=NULL;
    aux=Lista;
    printf("%d\n",Lista->dato);
    aux=aux->siguiente;
    while(aux!=Lista){
      printf("%d\n",aux->dato);
      aux=aux->siguiente;
    }
  return Lista;
}
