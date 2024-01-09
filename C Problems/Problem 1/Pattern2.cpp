#include <stdio.h>
int main(){
	int row = 0;
	int column = 0;
	int counter = 11;
	
	for(column = 0; column < counter; column++){
		for(row = 0; row < column; row++){
					if(row + column == 10){
			printf(" ");
			row ++;
		}
			printf("*");
		}

		printf(" ");
		printf("\n");
	}
	getchar();
    return 0;
}
