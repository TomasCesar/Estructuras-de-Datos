#include "doble.h"

int main(){
  struct Lista *Lista = NULL;
  Lista= insertar(8,Lista);
  Lista= insertar(7,Lista);
  Lista= insertar(12,Lista);
  Lista= insertar(1,Lista);
  Lista= insertar(2,Lista);
  Lista= insertar(3,Lista);
  Lista= insertar(4,Lista);
  Lista= insertar(7,Lista);
  Lista= insertar(5,Lista);
  mostrar(Lista);
  printf("\n");
  Lista= borrar(5,Lista);
  Lista= borrar(8,Lista);
  Lista= borrar(1,Lista);
  Lista= borrar(2,Lista);
  Lista= borrar(50,Lista);
  Lista= borrar(4,Lista);
  Lista= borrar(40,Lista);
  mostrar(Lista);
    return 0;
}
