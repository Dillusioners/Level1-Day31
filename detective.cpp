# include <iostream>
# include <string>


// execution starts from here
int main(int argc, char **argv){
	// evidence storing in the variables
	std::string last_saw, related, gun_users;
	
	// introducing to the scenario
	std::cout << "Hello sir. I am from the FBI. I wanted to discuss matters with you.\n";
	std::cout << "There was a murder last night in your residency, and I need to be filled up about them.\n";
	std::cout << "So help me know them....\n";
	
	
	// asking the suspect if he knows anything about the matter
	std::cout << "When did you last see them? ";
	std::cin >> last_saw;
	std::cout << "How are you related to them? ";
	std::cin >> related;		
	std::cout << "He was shot with a gun. Do you know any active gun users? ";
	std::cin >> gun_users;
	
	// concluding the meeting
	std::cout << "Alright. I am quiet a busy man, so I need to rest our meeting here itself.\n";
	std::cout << "Thanks for your cooperation. You can have this: https://youtube.com/shorts/xHEgHjJvR94?feature=share";
}
