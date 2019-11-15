#include <stdio.h>
#include <stdlib.h>

struct Lista
{
  int dato;
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
  Lista = insertar (0, Lista);
  Lista = insertar (4, Lista);
  Lista = insertar (3, Lista);
  Lista = insertar (5, Lista);
  Lista = insertar (7, Lista);
  Lista = insertar (8, Lista);
  Lista = insertar (9, Lista);
  Lista = insertar (12, Lista);
  Lista = insertar (16, Lista);
  Lista = insertar (15, Lista);
  mostrar (Lista);
  printf ("\n");
  Lista = borrar (0, Lista);
  Lista = borrar (12, Lista);
  Lista = borrar (8, Lista);
  Lista = borrar (3, Lista);
  Lista = borrar (20, Lista);
  Lista = borrar (21, Lista);
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
    }
  return Lista;
}

struct Lista *
borrar (int dato, struct Lista *Lista)
{
  if (Lista != NULL)
    {
      struct Lista *aux_borrar = NULL;
      struct Lista *anterior = NULL;
      aux_borrar = Lista;
      while ((aux_borrar != NULL) && (aux_borrar->dato != dato))
	{
	  anterior = aux_borrar;
	  aux_borrar = aux_borrar->siguiente;
	}
      if (aux_borrar == NULL)
	{
	  printf ("Elemento no a sido encontrado\n");
	}
      else if (anterior == NULL)
	{
	  Lista = Lista->siguiente;
	  free (aux_borrar);
	}
      else
	{
	  anterior->siguiente = aux_borrar->siguiente;
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
