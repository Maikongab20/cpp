#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct No
{
  char elem;
  No *prox;
};

void Inicialize(char *ponteiro)
{
  ponteiro = NULL;
}

void inserirInicio(No *lista)
{

  No *novo = new No, *tmp;

  char elem;
  printf("digitr um elemento");
  elem = getche();

  if (lista == NULL)
  {
    lista = novo;
  }
  else
  {
    novo->prox = lista;
    lista = novo;
  }
}

void InserirFim(No *lista)
{
  No *novo = new No, *tmp;

  char elem;
  printf("digitr um elemento");
  elem = getche();

  novo->elem = elem;
  novo->prox = NUll;

  if (lista == NULL)
  {
    lista = novo;
  }
  else
  {
    tmp = lista;
    while (tmp->prox == NULL)
    {
      tmp = tmp->prox;
    }
    tmp->prox = novo;
  }
}

void Imprimir(No *lista)
{

  No *tmp = lista;
  if (lista == NULL)
  {
    printf("lista vazia \n");
  }
  else
  {
    while (tmp->prox != NULL)
    {
      printf("%d", tmp->elem);
      tmp = tmp->prox;
    }
    printf("%d", tmp->elem);
    getch();
  }
  // opcao 2
  // while (tmp != NULL)
  //   {
  //     printf("%d", tmp->elem);
  //     tmp = tmp->prox;
  //   }
}
}

ponteiro *Excluir(No *lista, char elem)
{
  No *tmp, tmp2;

  if (lista == NULL)
  {
    printf("lista esta vazia");
  }
  else
  {
    // primeiro
    if (lista->elem == elem)
    {
      tmp = lista;
      lista = lista->prox;
      delete (tmp);
    }
    else
    {
      // meio
      tmp = lista->prox;
      while (tmp != NULL && tmp->elem != elem)
      {
        tmp2 = tmp;
        tmp = tmp->prox;
      }

      if (tmp != NULL)
      {
        tmp2->prox = tmp->prox;
        delete (tmp);
      }
    }
  }
  return lista;
}

void DeletarInicio(No *lista)
{

  No *tmp;

  if (lista != NULL)
  {
    tmp = lista;
    lista = lista->prox;
    free(tmp);
  }
}

void DeletarFim(No *lista)
{

  No *tmp, *tmp2 = Inicialize(tmp2);

  if (lista != NULL)
  {
    if (lista->prox != NULL)
    {
      tmp = lista;
      while (tmp->prox != NULL)
      {
        tmp2 = tmp;
        tmp = tmp->prox;
      }

      tmp->prox = NULL;
      free(tmp2);
    }
    else
    {
      lista = NULL;
    }
  }
}

char Menu()
{
  printf("[A] Inserir no inicio\n");
  printf("[B] Inserir no fim\n");
  printf("[C] Imprimir\n");
  return toupper(getch());
}

void inicializa()
{
  No *ponteiro;
  char opcao;

  ponteiro = Inicialize(ponteiro);

  do
  {
    opcao = Menu();

    switch (opcao)
    {

    case 'A':
      inserirInicio(ponteiro);
      break;

    case 'B':
      inserirFim(ponteiro);
      break;

    case 'c':
      Imprimir(ponteiro);
      break;
    }
  }
}

int main()
{
  inicializa();
}
