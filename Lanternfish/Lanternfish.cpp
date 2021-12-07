#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> lanternFish{};
	int tempInput1, tempInput2, tempInput3, tempInput4, tempInput5;
	
	cout << "What fish would you like to add? Enter 5 fish seperated by spaces: ";
	cin >> tempInput1;
	cin >> tempInput2;
	cin >> tempInput3;
	cin >> tempInput4;
	cin >> tempInput5;

	lanternFish.push_back(tempInput1);
	lanternFish.push_back(tempInput2);
	lanternFish.push_back(tempInput3);
	lanternFish.push_back(tempInput4);
	lanternFish.push_back(tempInput5);

	cout << "\n\nInitial State: " << lanternFish.at(0) << " " << lanternFish.at(1) << " " << lanternFish.at(2) << " " << lanternFish.at(3) << " " << lanternFish.at(4) << endl;

	for (int index{1}; index < 10001; index++)
	{
		cout << "\nAfter " << index << " days: ";

		for (int index2{0}; index2 < lanternFish.size(); index2++)
		{
			switch (lanternFish.at(index2))
			{
			case 9:
				lanternFish.at(index2) = 8;

				cout << lanternFish.at(index2) << " ";

				break;

			case 8:
				lanternFish.at(index2) = 7;

				cout << lanternFish.at(index2) << " ";

				break;
			
			case 7:
				lanternFish.at(index2) = 6;

				cout << lanternFish.at(index2) << " ";

				break;

			case 6:
				lanternFish.at(index2) = 5;

				cout << lanternFish.at(index2) << " ";

				break;

			case 5:
				lanternFish.at(index2) = 4;

				cout << lanternFish.at(index2) << " ";

				break;

			case 4:
				lanternFish.at(index2) = 3;

				cout << lanternFish.at(index2) << " ";

				break;

			case 3:
				lanternFish.at(index2) = 2;

				cout << lanternFish.at(index2) << " ";

				break;

			case 2:
				lanternFish.at(index2) = 1;

				cout << lanternFish.at(index2) << " ";

				break;

			case 1:
				lanternFish.at(index2) = 0;

				cout << lanternFish.at(index2) << " ";

				break;

			case 0:
				lanternFish.at(index2) = 6;

				lanternFish.push_back(9);

				cout << lanternFish.at(index2) << " ";

				break;

			default:
				cout << "ERROR!";

				break;
			}
		}
	}

	cout << endl << endl << "Amount of Fish: " << lanternFish.size() << endl << endl;
}