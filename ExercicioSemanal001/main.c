#include <stdio.h>
#include "funcAux.h"

#define quant 40

void exibeCandidatos(int vUser[], int vAnos[], float vPonto[], int QUANT) {
    printf("Os candidatos válidos, por ordem de maior compatibilidade, são:\n");

    for (int i = 0; i < QUANT; i++) {
        if (vUser[i] != -1) { // Verifica se o candidato é válido
            printf("Candidato número %d:\n", vUser[i]);
            printf("  Idade: %d\n", vAnos[i]);
            printf("  Pontuação: %.2f\n", vPonto[i]);
            printf("\n");
        }
    }
}


int main (void)
{
  int vUsuario[quant];
  int vGenero[quant];
  int vIdade[quant];
  int vNotaJogo1[quant];
  int vNotaJogo2[quant];
  float vPontoMedio[quant]; //primeiro guarda o resultado da distancia euclidiana e depois o "ponto médio" do usuario

  //chamada de funções
  obtemDados(vUsuario, vGenero, vIdade, vNotaJogo1, vNotaJogo2, quant);
  calcDist(vNotaJogo1, vNotaJogo2, vPontoMedio, quant);
  calcPontoMedio(vNotaJogo1, vNotaJogo2, vPontoMedio, quant);
  //exibeVetores(vUsuario, vGenero, vIdade, vNotaJogo1, vNotaJogo2, vPontoMedio, quant);
  ordena(vUsuario, vIdade, vPontoMedio, quant);
 // exibeVetores(vUsuario, vGenero, vIdade, vNotaJogo1, vNotaJogo2, vPontoMedio, quant);
  exibeCandidatos(vUsuario, vIdade, vPontoMedio, quant);
  
  return;
}
