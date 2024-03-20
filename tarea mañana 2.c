#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i, sumapares, promedio;
	i = 1;
	sumapares =0;
	
	
	
	do {
		
		
		if (i % 2 == 0){
			
			printf ("\n numero par %d", i);
			sumapares = sumapares + i;
			promedio = sumapares/5;
			
		}
		else if (i % 2 ==0){
			
		}
		
		i++;
	} while(i<=10);
	
	printf (" \n la suma de los numeros pares es : %d ",sumapares);
	printf (" \n el promedio de los numeros pares es %d "  , promedio);
	
	
	return 0;
}

