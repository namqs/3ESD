#include "funcAux.h"
#include <stdio.h>
#include <math.h>

void obtemDados(int vUser[], int vSexo[], int vAnos[], int vNota1[], int vNota2[], int QUANT)
{
  int i;
  
  for (i=0;i<QUANT;i++)
  { 
    vUser[i] = i;
    vSexo[i] = sorteio(1, 3);
    vAnos[i] = sorteio(8, 80);
    vNota1[i] = sorteio(0, 10);
    vNota2[i] = sorteio(0, 10);
  }
}
  
int sorteio(int lInf,int lSup){
  return (rand()%((lSup-lInf)+1))+lInf;
}

void exibeVetores (int vUser[], int vSexo[], int vAnos[], int vNota1[], int vNota2[], float vPonto[], int QUANT)
{
  int i;
  
    for (i=0;i<QUANT;i++)
      {
        printf("\n\n%d  %d  %d  %d  %d  %1.f  ", vUser[i], vSexo[i], vAnos[i], vNota1[i], vNota2[i], vPonto[i]);
      }
}

void calcDist(int vNota1[], int vNota2[], float vPonto[], int QUANT){
  int i, x1, x2;
  for (i=0; i<QUANT; i++)
      {
        x1 = vNota1[i];
        x2 = vNota2[i];
        vPonto[i]= sqrt(pow((x2-x1),2));
      }
}

void calcPontoMedio (int vNota1[], int vNota2[], float vPonto[], int QUANT)
{
  int i;
  float resultado;
   //O ponto medio é o valor da dist. euclidiana, dividido por 2 mais a nota mais baixa
  for (i=0; i<QUANT; i++)
    {
      if (vNota1[i] < vNota2[i])
      {
       resultado = vNota1[i]+(vPonto[i]/2);
      } else {
        resultado = vNota2[i]+(vPonto[i]/2);
      }
      vPonto[i] = resultado;
    }
        
}

int verificaCandidatos(float vPonto) {
    if (vPonto >= 4.5 && vPonto <= 7.5) {
        return 1;
    }
    return 0;
}

void ordena(int vUser[], int vAnos[], float vPonto[], int QUANT) {
    int i, j, aux;
    int ordenado = 1;

    while (ordenado) {
        ordenado = 0;

        for (i = 0; i < QUANT - 1; i++) {
            if (!verificaCandidatos(vPonto[i])) {
                vUser[i] = -1;
                vPonto[i] = -1.0;
            }
        }

        for (i = 0; i < QUANT - 1; i++) {
            for (j = 0; j < QUANT - i - 1; j++) {
                if (vUser[j] != -1 && vUser[j + 1] != -1) {
                    if ((vPonto[j] == 6.5) < (vPonto[j + 1] == 6.5)) {
                        ordenado = 1;

                        aux = vUser[j];
                        vUser[j] = vUser[j + 1];
                        vUser[j + 1] = aux;

                        aux = vAnos[j];
                        vAnos[j] = vAnos[j + 1];
                        vAnos[j + 1] = aux;

                        float temp = vPonto[j];
                        vPonto[j] = vPonto[j + 1];
                        vPonto[j + 1] = temp;
                    }
                }
            }
        }
    }
}

