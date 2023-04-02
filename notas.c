/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float mediapond(float nota1, float nota2)
{
    float media;
    media = nota1 * 0.4 + nota2 * 0.6; 
    return media;
}

char conceito(float media)
{
    char conc;
    if (media <= 4.9){
      conc = 'D';
    }
    else {
      if (media <= 6.9) {
        conc = 'C';
      }
      else {
        if (media <= 8.9 ){
            conc ='B';
        }
        else {
            conc = 'A';
        }
      }
    }
  return conc;
}

int main() {
  int i;
  float nota1, nota2, med;
  char conce;

  for (i=0; i < 10; i++) {
    printf("\n\nDigite a nota 1:");
    scanf("%f", &nota1);
    printf("\nDigite a nota 2:");
    scanf("%f", &nota2);
    med = mediapond(nota1,nota2);
    conce = conceito(med);
    printf("\n\nmédia = %f \nConceito final = %c", med, conce);
  }
 return 0;
}
