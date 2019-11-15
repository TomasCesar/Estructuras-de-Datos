#include <stdio.h>
#include <stdlib.h>

struct Lista
{
  int dato;
  struct Lista *anterior;
  struct Lista *siguiente;
};
struct Lista *insertar (int, struct Lista *);
struct Lista *mostrar (struct Lista *);
struct Lista *borrar (int, struct Lista *);

int
main ()
{
  int num;
  struct Lista *Lista = NULL;
  Lista = insertar (8, Lista);
  Lista = insertar (7, Lista);
  Lista = insertar (12, Lista);
  Lista = insertar (1, Lista);
  Lista = insertar (2, Lista);
  Lista = insertar (3, Lista);
  Lista = insertar (4, Lista);
  Lista = insertar (7, Lista);
  Lista = insertar (5, Lista);
  mostrar (Lista);
  printf ("\n");
  Lista = borrar (5, Lista);
  Lista = borrar (8, Lista);
  Lista = borrar (1, Lista);
  Lista = borrar (2, Lista);
  Lista = borrar (50, Lista);
  Lista = borrar (4, Lista);
  Lista = borrar (40, Lista);
  mostrar (Lista);
  scanf ("%d", &num);		//poner pause
  return 0;
}

struct Lista *
insertar (int dato, struct Lista *Lista)
{
  struct Lista *nuevo = NULL;
  struct Lista *aux = NULL;
  nuevo = (struct Lista *) malloc (sizeof (struct Lista));
  nuevo->dato = dato;
  if (Lista == NULL)
    {
      Lista = nuevo;
    }
  else
    {
      aux = Lista;
      while (aux->siguiente != NULL)
	{
	  aux = aux->siguiente;
	}
      aux->siguiente = nuevo;
      nuevo->anterior = aux;
    }
  return Lista;
}

struct Lista *
borrar (int dato, struct Lista *Lista)
{
  if (Lista != NULL)
    {
      struct Lista *aux_borrar = NULL;
      aux_borrar = Lista;
      while ((aux_borrar != NULL) && (aux_borrar->dato != dato))
	{
	  aux_borrar = aux_borrar->siguiente;
	}
      if (aux_borrar == NULL)
	{
	  printf ("Elemento no a sido encontrado\n");
	}
      else if (aux_borrar->anterior == NULL)
	{
	  Lista = Lista->siguiente;
	  free (aux_borrar);
	}
      else if (aux_borrar->siguiente == NULL)
	{
	  aux_borrar->anterior->siguiente = NULL;
	  free (aux_borrar);
	}
      else
	{
	  aux_borrar->siguiente->anterior = aux_borrar->anterior;
	  aux_borrar->anterior->siguiente = aux_borrar->siguiente;
	  free (aux_borrar);
	}
    }
  return Lista;
}

struct Lista *
mostrar (struct Lista *Lista)
{
  while (Lista != NULL)
    {
      printf ("%d\n", Lista->dato);
      Lista = Lista->siguiente;
    }
  return Lista;
}
