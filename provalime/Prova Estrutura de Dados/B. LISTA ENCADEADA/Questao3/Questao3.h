#include <iostream>

using namespace std;

typedef struct Registro
{
    int chave;
    int info;
} REG;

typedef struct Celula
{
    REG dado;
    Celula *prox;
} NO;

class Fila
{
private:
    NO *Inicio;
    NO *Fim;
public:
    Fila();
    ~Fila();

    bool FilaExiste();
    void ImprimirFila();
    void RemoverDado();
    void Inserir(REG x);
    void ConsultarDado(int chave);
    int Menu();
    int TamanhoFila;

};