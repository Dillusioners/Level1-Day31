/**
 * Author - Debag101
 * Date - 13 5 2023
 * Purpose - Tells if a number is prime or composite*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
//Defining true as 1 and false as 0 as per popular convention
#define TRUE 1
#define FALSE 0

//Defining method protoype
int isPrime(int);

//main starts
int main(int argc, char const *argv[]) {
	int number;
	printf("\nEnter the number => ");
	//Getting the input data
	scanf("%d",&number);
	//Checking if number is prime
	if(isPrime(number)) {
		//If above expression returns 1
		printf("%d is prime !",number);
	}
	else {
		//If above expression returns 0
		printf("%d is composite ! ",number);
	}
	//Exit code functionality
	printf("\nenter any key to exit ........ ");
	getch();
	system("cls");
	return 0;
}

int isPrime(int n) {
	//The simple and popular sqrt algorithm for finding sqrt
	int sq = (int)(sqrt(n));
	for(int i = 2; i <= sq; i++) {
		if(n % i == 0) {
			return FALSE;
		}
	}
	return TRUE;
}