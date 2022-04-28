
struct No
{
  char elem;
  No *prox;
};

void inicializar(No *lista)
{
  lista = NULL;
}

No *Inserir(No *lista, char elem)
{
  lista->elem = elem;
  lista->prox = NULL;
  return lista;
}

No *Prox(No *lista)
{
  return lista->prox;
}

char exibir(No *lista)
{
  return lista->elem;
}

No *excluirInicio(No *lista)
{
  No *tmp;

  tmp = lista;
  lista = lista->prox;
  delete (tmp);
  return lista;
}

No *Excluirfim(No *lista)
{
}
