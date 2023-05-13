# include <iostream>


// returns whether a number is armstrong or not
// n -> the number itself
bool armstrong(int n){
	// result -> the value which will contain all digits to their powers
	// len -> stores the length of the number
	int result = 0, len = (int)std::to_string(n).size();
	
	// iterating through the digits of the number and appending the powered digit to result
	for(int i = n; i > 0; i /= 10){
		result += pow(i % 10, len);
	}
	
	// returning whether the final result is equal to the number
	return n == result;
}

// execution starts from here
int main(int argc, char** argv){
	int num; // the number to be checked for armstrong
	
	// asking for user input
	std::cout << "Enter your number: ";
	std::cin >> num;
	
	// checking if the number is armstrong or not
	if(armstrong(num)) std::cout << "The number is an armstrong number";
	else std::cout << "The number is not an armstrong number";	
	return 0;
}
