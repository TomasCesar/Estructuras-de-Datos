#ifndef __CIRCULAR_H__
#define __CIRCULAR_H__

#include <stdio.h>
#include <stdlib.h>

struct Lista{
  int dato;
  struct Lista* siguiente;
};
struct Lista *insertar(int, struct Lista*);
struct Lista *mostrar(struct Lista*);
struct Lista *borrar(int,struct Lista*);

#endif
