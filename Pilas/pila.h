#ifndef __PILA_H__
#define __PILA_H__

#include <stdio.h>
#include <stdlib.h>

struct pila{
  int dato;
  struct pila *siguiente;
};

struct pila *push(int,struct pila*);
struct pila *pop(struct pila*);
struct pila *mostrar(struct pila*);
#endif
