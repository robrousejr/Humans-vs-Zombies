// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

int main()
{
	int numOfHumans = 0;
	int numOfZombies = 0;

	int zombieStrength, humanStrength;
	srand(time(0)); // Seeding random time generator
	zombieStrength = rand() % 10 + 1; // Between 1 and 10
	humanStrength = rand() % 10 + 1;
	int totalZom, totalHum; // for total scores

	std::cout << "Humans Vs. Zombies!!!\n\n";

	/*START OF INPUT*/
	std::cout << "Input # of Humans: ";
	std::cin >> numOfHumans;
	std::cout << "Input # of Zombies: ";
	std::cin >> numOfZombies;
	
	std::cout << "\n**(COMBAT NOISES)**\n";

	totalHum = numOfHumans * humanStrength;
	totalZom = numOfZombies * zombieStrength;

	int zomDied = numOfZombies - ((totalZom - totalHum) / zombieStrength);
	int humDied = numOfHumans - ((totalHum - totalZom) / humanStrength);

	if (totalHum > totalZom)
	{
		std::cout << "Humans win!\n";
		std::cout << "There are " << (totalHum - totalZom) / humanStrength << " humans left\n\n";
		zomDied = numOfZombies;
	}
	else if (totalHum < totalZom) 
	{
		std::cout << "Zombies win!\n";
		std::cout << "There are " << (totalZom - totalHum) / zombieStrength << " zombies left\n\n";
		humDied = numOfHumans;
	}
	else // in the case that totalHum and totalZom are equal
	{
		std::cout << "Nobody wins! It was a complete tie\n";
		std::cout << numOfHumans << " humans and " << numOfZombies << " lost their lives. \n\n";
	}
	

	std::cout << zomDied << " zombies died and " << humDied << " humans died\n";

	system("PAUSE");
    return 0;
}

