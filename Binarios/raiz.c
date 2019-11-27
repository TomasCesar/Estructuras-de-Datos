#include"raiz.h"

struct Arbol *insertar (struct Arbol *raiz, int dato)
{
  struct Arbol *nuevo = NULL;
  if (raiz == NULL){
      nuevo = (struct Arbol *) malloc (sizeof (struct Arbol));
      nuevo->dato = dato;
      nuevo->izquierdo = NULL;
      nuevo->derecho = NULL;
      return nuevo;
    }
  if (dato == raiz->dato){
      return raiz;
    }
  if (dato < raiz->dato){
      raiz->izquierdo = insertar (raiz->izquierdo, dato);
    }
  else{
      raiz->derecho = insertar (raiz->derecho, dato);
    }
  return raiz;
}

void mostrar (struct Arbol *raiz){
  if (raiz == NULL){
      return;
    }
  mostrar (raiz->izquierdo);
  printf ("%d, ", raiz->dato);
  mostrar (raiz->derecho);
}
