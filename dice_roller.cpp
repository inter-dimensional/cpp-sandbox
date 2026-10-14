//Dice roller program

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0))); //seed random number generator
	
	int randomNumber = rand();
	
	int die = (randomNumber % 100); // get a number between 1-100
	
	cout << "You rolled a " << die << endl;
	return 0;
}