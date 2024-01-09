#include <stdio.h>
int main(){
	int row;
	int column;
	
	for(column = 0; column < 10 ; column++)
		if(column % 2 == 0){
			for(row = 0; row <10; row++){
				if(row % 2 == 0){
					printf(" ");
				}else{
					printf("*");
				}
			}
			printf("\n");
		}else{
			for(row = 0; row <10; row++){
				if(row % 2 == 0){
					printf("*");
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
    getchar();
    return 0;
}
