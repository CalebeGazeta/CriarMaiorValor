/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
#define TAM_MAX 10
  float Vet1[TAM_MAX];
  float Maior;
  
  for(i=0; i<TAM_MAX; i++)
     scanf ("%d", &Vet1[i]);// lê os dados
     
Maior = Vet1[0]; //assume que o primeiro é maior
for(i=0; i<TAM_MAX; i++)
    if Vet1[i] > Maior
    Maior = Vet1[i];
    
    printf("O maior elemento é %f/n",Maior);
    return 0;
}
