#include "cirdoble.h"

int main(){
  struct Lista *Lista = NULL;
  Lista= insertar(8,Lista);
  Lista= insertar(9,Lista);
  Lista= insertar(12,Lista);
  Lista= insertar(13,Lista);
  Lista= insertar(14,Lista);
  Lista= insertar(15,Lista);
  mostrar(Lista);
  Lista= borrar(8,Lista);
  Lista= borrar(15,Lista);
  Lista= borrar(35,Lista);
  printf("\n");
  mostrar(Lista);
    return 0;
}
