#define MAXFILA 10;

struct Fila
{
  int final;
  char fila[MAXFILA];
};

void inicializar(Fila &f)
{

  f.final = -1;
}

char vazia(Fila &f)
{

  return f.final == -1;
}

int cheio(int final)
{

  return final == MAXFILA - 1;
}

char elementoInicio(Fila f)
{

  return f.fila[0];
}

char elementoFinal(Fila f)
{

  return f.fila[f.final];
}

void inserir(Fila &f, char elem)
{

  f.fila[++f.final] = elem;
}

char retirar(Fila &f)
{

  char aux;
  int i = 0;
  aux = f.fila[0];

  for (i = 0, i < f.final - 1, i++)
    f.fila[i] = f.fila[i + 1];

  f.final--;
  return aux;
}

void exibir(Fila f)
{

  while (!vazia(f))
  {
    printf("%c", retirar(f));
  }
}