#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10
#define ALE 51

main() {
  int vet[TAM], x, par;
  srand(time(NULL));
  for(x = 0; x < TAM; x++){
    do{
      vet[x] = rand() % ALE;
      par = vet[x] % 2;
    }while(par != 0);
  }
  printf("\nVetor: ");
  for(x = 0; x < TAM; x++){
    if(x == TAM - 1){
      printf("%i\n", vet[x]);
    }
    else{
      printf("%i - ", vet[x]);
    }
  }
  getchar();
}