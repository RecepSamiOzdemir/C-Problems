#include <stdio.h>
int main(){
	int read = 0;
	int numberF = 0;
	int numberS = 0;
	int tempNumber = 0;
	int column = 0;
	// numberF and numberS are short of numberFirst and number Second
	printf("Please, enter a positive number\n");
	scanf("%d", &read);
	if(read<0){
		printf("What did I say you.\nPlease, enter a positive number, right.\nSo why did you give negative number and breake my heart :( .");
	}
	if(read == 0){
		printf("Seriously...\nYou enter a zero.\nIf you didn't know earlier, zero is neither positive nor negative number. ");
	}

	column = read;
	while (column > 0){
		
		tempNumber = read - column;
		numberF = read ;
		
			while(numberF - tempNumber >0 ){
				printf("%d", numberF-tempNumber);
				numberF--;
			}
			
		numberS = read;
		
			while(tempNumber > 0 ){
				printf("%d", numberS);
				tempNumber --;
				numberS --;
			}
			
		printf("\n");
		column --;
	}
	getchar();
	return 0;
}

