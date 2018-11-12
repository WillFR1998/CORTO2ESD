#include <stdio.h>


int fibonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibonacci(n-1) + fibonacci(n-2));
   }
}

int main() {
   int n ;
   int i;
	//Se pedira hasta cual posicion de la secuencia se desea conocer
	printf("¿Hasta qué numero desea saber el fibonacci?");
	scanf("%d",&n);
   printf("La secuencia fibonacci de %d: " , n);
	//Se 
   for(i = 0;i<n;i++) {
      printf("%d ",fibonacci(i));            
   }
}
