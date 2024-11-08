#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	
	for (;;) 
	{
		cout << "guess my number which is between 1 to 100" << endl;
		srand(static_cast<unsigned>(time(0)));
		int x = rand() % 100 + 1;
		for (;;)
		{
			int y;
			cin >> y;
			if (y < x - 70)
				cout << "too low" << endl;
			else if (y < x - 50)
				cout << "low " << endl;
			else if (y < x - 30)
				cout << "low but close" << endl;
			else if (y < x-10)
				cout << "low but so close" << endl;
			else if (y < x)
				cout << "low but soooooooo close" << endl;
			else if (y > x + 70)
				cout << "too high" << endl;
			else if (y > x + 50)
				cout << "high " << endl;
			else if (y > x + 30)
				cout << "high but close" << endl;
			else if (y > x+10)
				cout << "high but so close" << endl;
			else if (y > x)
				cout << "high but soooooooo close" << endl;
			else if (y == x)
			{
				cout << "you are correct \n would you like to play again \n if yes prees 1 \t if no press 2" << endl;
				break;
			}
		}
		int z;
		cin >> z;
		if (z == 2)
			break;
	}

	return 0;
}