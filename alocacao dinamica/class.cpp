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

  while (tmp->prox != NULL)
  {
    printf("%d", tmp->elem);
    tmp = tmp->prox;
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

  ponteiro = Inicialize(pobteiro);

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
