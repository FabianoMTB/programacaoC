#include <stdio.h>

    void recursivo(int numero){
       if (numero > 0){
        printf("%d \n", numero);

        recursivo(numero -1);
       
        /* code */
       }
       
    }
int main (){

   int quantidade = 10;
   
   printf ("Contagem regresiva...");
   recursivo (quantidade);
       
    return 0;
}