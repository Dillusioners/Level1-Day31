# include <iostream>
# include <vector>

// reduced syntax
# define list std::vector<std::string>

// sorts the like similar to the process of bubblesort
// vec -> the vector to sort
void sort(list &vec){
	std::string temp; // variable for swapping
	
	// looping for one less than vector length 
	for(int itr = 0; itr < (int)vec.size() - 1; itr++){
		// looping through the vector
		for(int i = 0; i < (int)vec.size(); i++){
			// checking if i+1 is out of bounds or if current and next index is already sorted
			if(i + 1 == (int)vec.size() || vec[i].size() <= vec[i + 1].size()) continue;
			
			// swapping the two indexes
			temp = vec[i];
			vec[i] = vec[i + 1];
			vec[i + 1] = temp;
		}
	}
}

// method for printing the vector
// vec -> the vector
// sep -> the gap between two members of vector
void printList(list &vec, std::string sep = " "){
	// looping through the vector and printing each member
	for(auto i : vec){
		std::cout << i << sep;	
	}
}

// execution starts from here
int main(int argc, char** argv){
	// variable declaration
	list vec;
	int count;
	std::string input;
	
	// asking user for total string count
	std::cout << "Enter the total number of strings to sort: ";
	std::cin >> count;
	
	// ignoring the newline character from std::cin
	std::cin.ignore(1, '\n');
	// looping for the count times
	for(int i = 1; i <= count; i++){
		// asking user for string input and appending it in vector
		std::cout << "Enter string no." << i << ": ";
		std::getline(std::cin, input);
		vec.push_back(input);
	}
	
	// printing list before sorting
	std::cout << "\nList before sorting:\n";
	printList(vec);
	
	// printing the list after it is sorted
	std::cout << "\nList after sorting:\n";
	sort(vec);
	printList(vec);
	
	return 0;
}
