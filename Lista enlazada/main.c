#include "contigua.h"

int main(){
  struct Lista *Lista = NULL;
  Lista= insertar(0,Lista);
  Lista= insertar(4,Lista);
  Lista= insertar(3,Lista);
  Lista= insertar(5,Lista);
  Lista= insertar(7,Lista);
  Lista= insertar(8,Lista);
  Lista= insertar(9,Lista);
  Lista= insertar(12,Lista);
  Lista= insertar(16,Lista);
  Lista= insertar(15,Lista);
  mostrar(Lista);
  printf("\n");
  Lista= borrar(0,Lista);
  Lista= borrar(12,Lista);
  Lista= borrar(8,Lista);
  Lista= borrar(3,Lista);
  Lista= borrar(20,Lista);
  Lista= borrar(21,Lista);
  mostrar(Lista);
    return 0;
}
