/*Rolling Dice
//Added more functionalty to the program by seeing if the rolledDice condition
*/is met, and adding in the necessary variables.
#include <iostream>
#include <string>

using namespace std;

int main () {
	string dice1;
	string dice2;
	int rolledDice;
	string diceYN;
	
	
	dice1 = "What is the number of the first die roll? ";
	dice2 = "What is the number of the second die roll? ";
	
	
	rolledDice = dice1 == dice2;
	
	if (rolledDice == 0) {
		diceYN = "Yes";
	}else{
		diceYN = "No";
	}
	cout << "Did you roll doubles? " << endl << diceYN;
	return 0;
}
