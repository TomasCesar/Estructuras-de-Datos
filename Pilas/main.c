#include "pila.h"
int main(){
  struct pila *pila = NULL;
  pila= push(1,pila);
  pila= push(2,pila);
  pila= push(3,pila);
  pila= push(4,pila);
  pila= push(5,pila);
  pila= push(6,pila);
  pila= push(7,pila);
  pila= push(8,pila);
  pila= push(9,pila);
  mostrar(pila);
  printf("\n");
  pila= pop(pila);
  pila= pop(pila);
  pila= pop(pila);
  pila= pop(pila);
  pila= pop(pila);
  mostrar(pila);
    return 0;
}
