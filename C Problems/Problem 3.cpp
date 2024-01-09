#include <stdio.h>
int main (){
	int input;
	int level;
	printf("Please enter the level of earthquake level value\n\n\t");
	scanf("%d", &input);
	printf("\n");
		
	switch(input) {
		
		case 10 ... 19:
			printf("It's a MICRO level of earthquake and It's occurrence is MILLIONS per year.\n");
			break;
			
		case 20 ... 29:
			printf("It's a MINOR level of earthquake and It's occurrence is ONE MILLION  years.\n");
			break;
			
		case 30 ... 39:
			printf("It's a MINOR level of earthquake and It's occurrence is 100,000 per years.\n");
			break;
			
		case 40 ... 49:
			printf("It's a LIGHT level of earthquake and It's occurrence is 10,000 per years.\n");
			break;
			
		case 50 ... 59:
			printf("It's a MODERATE level of earthquake and It's occurrence is 1,000 per years.\n");
			break;
			
		case 60 ... 69:
			printf("It's a STRONG level of earthquake and It's occurrence is 100 per years.\n");
			break;
			
		case 70 ... 79:
			printf("It's a MAJOR level of earthquake and It's occurrence is 10 per years.\n");
			break;
			
		case 80 ... 89:
			printf("It's a GREAT level of earthquake and It's occurrence is 1 per years.\n");
			break;
			
		case 90 ... 999999999:
			printf("It's a GREAT level of earthquake and It's occurrence is 1 per 10 years.\n");

		default :
			printf("There is no description in this parameter.\n");
			break;
	} 
	getchar ();
	return 0;
}

