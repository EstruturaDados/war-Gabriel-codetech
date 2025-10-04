#include <stdio.h>
#include <string.h>

//definir territorios
#define MAX 5 
//criacao da struct
struct territorio {
char nome[50];
char cor[50];
int numero;
};

//criar a funcao
int main(){
    struct territorio territorios[MAX]; //vetor de 5 territorios
    //cadastro territorios
    for(int i = 0; i <  MAX; i++) {
printf("\n=== cadastro de territorio %d ===\n", i + 1);

printf("nome: ");
fgets(territorios[i].nome, 50, stdin);

printf("cor do exercito: ");
fgets(territorios[i].cor, 50, stdin);

printf("numero de tropas: ");
scanf("%d", &territorios[i].numero);

getchar(); //limpa o buffer do teclado
    }

//exibindo territorios cadastrados
 printf("\n=== lista de territorios cadastrados ===\n");
for (int i = 0; i < MAX; i++) {
    printf("\n==== territorio %d ====\n", i + 1);
    printf("nome: %s\n", territorios[i].nome);
    printf("cor do exercito: %s\n", territorios[i].cor);
    printf("numero de tropas: %d\n", territorios[i].numero);
}

return 0;
    
}

