//LOST FORTUNE
//A PERSONALIZED ADVENTURE

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	const int GOLD_PIECES = 900; //const - unchangeable
	int adventurers, killed, survivors;
	string leader;
	
	//we get the information here
	cout << "Welcome to the lost fortune\n\n";
	cout << "Please enter the following for your personalize adventure\n";
	
	cout << "Enter a number: ";
	cin >> adventurers;
	
	cout << "Enter a number, smaller than the first: ";
	cin >> killed;
	
	survivors = adventurers - killed;
	
	cout << "Enter your name: ";
	cin >> leader;
	
	//story
	
	cout << "\nA brave group of " << adventurers << " set out on a quest ";
	cout << "- in search of the lost treasure of the Ancient Dwarves. ";
	cout << "The group was led by that legendary rogue, " << leader << ".\n";
	
	cout << "Along the way, a band of marauding ogres ambushed the party. ";
	cout << "All fought bravely under the command of " << leader;
	cout << ", and the ogres were defeated, but at a cost. ";
	cout << "Of the adventurers, " << killed << " were vanquished, ";
	cout << "leaving just " << survivors << " in the group.\n";
	
	cout << "\nThe party was about to give up all hope. ";
	cout << "But while laying the deceased to rest, ";
	cout << "they stumbled upon the buried fortune. ";
	cout << "So the adventurers split " << GOLD_PIECES << " gold pieces. ";
	cout << leader << " held on to the extra " << (GOLD_PIECES / survivors);
	cout << " pieces to keep things fair on course.\n";
	
	return 0;
	
}