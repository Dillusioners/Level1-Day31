# include <iostream>
# include <random>


// execution starts from here
int main(int argc, char** argv){
	int choice = 0, bot_choice; // user choice and bot choince
	std::random_device rd; // random seeding device
	std::mt19937 mt(rd()); // random number generation using Mersenne twister algo
	std::string options[] = {"Rock", "Paper", "Scissor"}; // stores all the options for the user
	
	// asking user for their choice
	std::cout << "Enter the following choices:\n";
	std::cout << "1. "<< options[0] << "\n2. " << options[1] << "\n3. " << options[2] << "\n>> ";
	std::cin >> choice;
	// generating the bot's choice'
	bot_choice = (mt() % 3) + 1;
	
	// runs if the choice doesnt match with the menu choices
	if(choice <= 0 || choice >= 4){
		std::cout << "Invalid choice provided!";
		return 0;	
	}
	// if both sides selected the same choice, then the outcome is draw
	if(choice == bot_choice){
		std::cout << "Draw! Both chose " << options[--choice];
		return 0;	
	}
	
	// switch-case based on user input
	switch(choice){
		// note the print in if-statement only runs if the case is losing for user
		// the else-statement print line runs when the game is in user's favour
		
		case 1:{ // rock
			if(bot_choice == 2) std::cout << "Bot chose " << options[--bot_choice] << ". You lose!";
			else std::cout << "Bot chose " << options[--bot_choice] << ". You win!";
			return 0;
		}
		case 2: { // paper
			if(bot_choice == 3) std::cout << "Bot chose " << options[--bot_choice] << ". You lose!";
			else std::cout << "Bot chose " << options[--bot_choice] << ". You win!";
			return 0;	
		}
		case 3:{ // scissor
			if(bot_choice == 1) std::cout << "Bot chose " << options[--bot_choice] << ". You lose!";
			else std::cout << "Bot chose " << options[--bot_choice] << ". You win!";
			return 0;
		}
	}
	
	return 0;
}
