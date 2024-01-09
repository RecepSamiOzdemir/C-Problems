#include <stdio.h>
int main(){
	int n = 0;
	int x = 0;
	int counter = 0;
	int y = 0;
	// f(x) = (n(n%n))^2 + ... (1(n%1))^2
	printf("Please enter a positive number.\n");
	scanf("%d", &n);
	
	if( n < 0){
		printf("Humanity hasn't developed a computer such have a ability make that calculation, yet.\nPlease try again after a one or two decade later...");
		return 0;
	}
	if ( n == 0){
		printf("!!! Are you trying to blow up your computer !!!");
		return 0;
	}
	counter = n;
	while ( counter > 0){
		x = ( (counter * (n % counter) ) * ( counter * (n % counter)));
		y = y + x;
		counter --;
	}
	
	printf("Answer is %d\n", y);
	
	getchar();
	return 0;
}
