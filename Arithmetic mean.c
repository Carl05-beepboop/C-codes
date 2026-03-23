#include <stdio.h>

    int main ()

    {
        
/* ----- variáveis ----- */
     float nota1, nota2, nota3, n, media;
     
   
/* ----- entradas ----- */

     printf("Digite sua primeira nota: ");
        scanf("%f", &nota1);

     printf("Digite sua segunda nota: ");
        scanf("%f", &nota2);

     printf("Digite sua terceira nota: ");
        scanf("%f", &nota3);



/* ----- definições ----- */
    
     n = 3;
     media = (nota1 + nota2 + nota3)/n;
     
/* ----- saídas ----- */

     printf("Média = %.2f\n", media);

    if (media >= 7)
     printf("Aprovado (AP)");

    if (media <= 5)
     printf("Reprovado (RE)");
     
    if (media > 5.99 && media < 7)
     printf("Prova Final (PF)");

 return 0;

    }
