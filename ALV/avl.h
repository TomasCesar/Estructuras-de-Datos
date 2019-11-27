#ifndef __AVL_H__
#define __AVL_H__

#include<stdlib.h>
#include<stdio.h>
struct Arbol
{
  int balance;
  int dato;
  struct Arbol *izquierdo;
  struct Arbol *derecho;
};
int cal_altura (struct Arbol *);
int cal_balance (struct Arbol *);
struct Arbol *insertar (struct Arbol *, int);
void mostrar (struct Arbol *);

#endif
