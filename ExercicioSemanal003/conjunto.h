typedef struct conj Conjunto;
typedef struct elemento Elem;


/* Cria um conjunto de inteiros vazio */

Conjunto* conj_Cria(void);

/*Libera um conjunto de inteiros */

void  conj_Libera(Conjunto*A);

/* Inclui um novo nº no Conjunto caso ele ainda não pertenca ao conjunto */

void  conj_Insere(Conjunto *C, int x);

/* Verifica se um nº pertence ao Conjunto - 1 se pertence ou 0 caso contrário */

int conj_Ehmembro(Conjunto*A, int x);

/* Retira um nº do Conjunto caso ele  pertenca ao conjunto */

int  conj_Remove(int x, Conjunto *C);


/* Intersecao de dois conjuntos retornando o conjunto Intersecao */

Conjunto* conj_Intersecao(Conjunto* A, Conjunto* B);

/* Mostra na tela os elementos de um conjunto */

void conj_exibe(Conjunto*A);

