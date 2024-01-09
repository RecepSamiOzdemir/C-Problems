#include <stdio.h>
int main() {
    int row = 0;
    int space = 0;
    int column = 0;
    while(column <= 11){
        while ( row <= 10){
            if(space == row){
                printf(" ");
                row++;
            }else{
                printf("*");
                row++;
            }
        }
        
        row = 0;
        printf("\n");
        column++;
        space++;
    }
    getchar();
    return 0;
}

