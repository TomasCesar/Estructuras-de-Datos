#include"raiz.h"

int main(){
  struct Arbol *raiz = NULL;
  raiz = insertar (raiz, 20);
  raiz = insertar (raiz, 50);
  raiz = insertar (raiz, 2300);
  raiz = insertar (raiz, 20);
  raiz = insertar (raiz, 50);
  raiz = insertar (raiz, 1600);
  raiz = insertar (raiz, 180);
  mostrar (raiz);
  
  return 0;
}
