#ifndef __RAIZ_H__
#define __RAIZ_H__

#include<stdlib.h>
#include<stdio.h>
struct Arbol
{
  int dato;
  struct Arbol *izquierdo;
  struct Arbol *derecho;
};

struct Arbol *insertar (struct Arbol *, int);
void mostrar(struct Arbol *);

#endif
