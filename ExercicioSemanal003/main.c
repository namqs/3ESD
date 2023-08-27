/*Construa um programa que permita mostrar quais os dias para realizar uma reunião entre 3 pessoas no mês de setembro
A primeira pode todos os dias da 1 quinzena do mês, a segunda nos dias 1 a 7 e nos dias pares do restante do mês, a terceira pode nos dias ímpares do mês*/

#include <stdio.h>
#include "conjunto.h"

int main(void)
{ //criando os 3 conjuntos, inicialmente vazios:
 Conjunto* conjA = conj_Cria();
 Conjunto* conjB = conj_Cria();
 Conjunto* conjC = conj_Cria();
 int i;

  //inserindo em A (primeira quinzena)
  for (i=1; i<=15; i++)
    {
      conj_Insere(conjA, i);
    }
  //inserindo em B
  for (i=1; i<=7; i++)
    {
      conj_Insere(conjB, i);
    }
  for (i=6; i<=30; i=i+2)
    {
      conj_Insere(conjB, i);
    }
  //inserindo em C
  for (i=1; i<=30; i=i+2)
    {
       conj_Insere(conjC, i);
    }

   //Salvando interseção de A e B
  Conjunto* ConjInterAB = conj_Intersecao(conjA, conjB);
  //Salvando a interseção entre A e B e C
  Conjunto* ConjInterABC = conj_Intersecao(ConjInterAB, conjC);

  conj_exibe(ConjInterABC);

  //liberando memoria alocada
  conj_Libera(conjA);
  conj_Libera(conjB);
  conj_Libera(conjC);
}
