//Inserção de dados dos usuarios
//E: matriz
//Saida: matriz 
void obtemDados(int vUser[], int vSexo[], int vAnos[], int vNota1[], int vNota2[], int QUANT);

int sorteio(int lInf,int lSup);

void exibeVetores (int vUser[], int vSexo[], int vAnos[], int vNota1[], int vNota2[], float vPonto[], int QUANT);

void calcDist(int vNota1[], int vNota2[], float vPonto[], int QUANT);

void calcPontoMedio (int vNota1[], int vNota2[], float vPonto[], int QUANT);

int verificaCandidatos(float vPonto);

void ordena(int vUser[], int vAnos[], float vPonto[], int QUANT);