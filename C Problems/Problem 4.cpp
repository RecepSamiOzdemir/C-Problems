#include <stdio.h>
int main(){
	int num1 = 0;
	int num2 = 0;
	int counter = 0;
	int upper = 0;
	int lower = 0;
	int number = 0;
	int prime = 0;
	
	printf("Please enter upper and lower limits.\n ");
	scanf("%d %d", &num1, &num2);
	
		if(num1 < 0 || num2 < 0){
			printf("Please give a positive upper and lover limits");
			return 0;
		}
	
		if(num1 == num2){
			printf("Please, you should know you have to give different numbers right...\nIf they aren't different how can I print prime numbres ''BETWEEN'' given numbers.");
			return 0;
		}else if(num1 > num2){
			upper = num1;
			lower = num2;
		}else{
			upper = num2;
			lower = num1;
		}
		printf("Prime numbers between %d and %d are:", lower, upper);
		number = lower +1;
		while ( number < upper){
			counter = 2;
			while (counter < number ){
				 if ( number % counter == 0){

				 	prime = 1;
				 	break;
				 }else{
				 	prime = 0;
				 }
				counter ++;
			}
			if (prime == 0){
				printf("%d ", number);
			}
			number ++;
		}
	getchar();
	return 0;
}
