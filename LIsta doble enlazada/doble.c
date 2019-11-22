#include "doble.h"

struct Lista *insertar (int dato,struct Lista* Lista){
  struct  Lista *nuevo = NULL;
  struct  Lista *aux=NULL;
  nuevo = (struct Lista*)malloc(sizeof(struct Lista));
  nuevo->dato=dato;
  if(Lista==NULL){
    Lista=nuevo;
  }
  else{
    aux=Lista;
    while(aux->siguiente!=NULL){
      aux=aux->siguiente;
    }
    aux->siguiente=nuevo;
    nuevo->anterior=aux;
  }
  return Lista;
}

struct Lista *borrar(int dato, struct Lista* Lista){
  if(Lista!=NULL){
   struct Lista *aux_borrar=NULL;
   aux_borrar=Lista;
   while((aux_borrar !=NULL) && (aux_borrar->dato !=dato)){
     aux_borrar=aux_borrar->siguiente;
   }
   if(aux_borrar==NULL){
     printf("Elemento no a sido encontrado\n");
   }
   else if(aux_borrar->anterior==NULL){
     Lista=Lista->siguiente;
     free(aux_borrar);
   }
   else if(aux_borrar->siguiente==NULL){
     aux_borrar->anterior->siguiente=NULL;
     free(aux_borrar);
   }
   else{
     aux_borrar->siguiente->anterior=aux_borrar->anterior;
     aux_borrar->anterior->siguiente=aux_borrar->siguiente;
     free(aux_borrar);
   }
  }
  return Lista;
}

struct Lista *mostrar(struct Lista* Lista){
  while(Lista!=NULL){
    printf("%d\n",Lista->dato);
    Lista=Lista->siguiente;
  }
  return Lista;
}
