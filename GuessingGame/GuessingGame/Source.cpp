#include <iostream>
#include <stdlib.h>
#include <time.h>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	srand(time(NULL));

	int randomNum = rand() % 100 + 1;
	int answer = 0;
	bool IsCorrect = false;
	int count = 0;
	int prevNum[10];

	while (!IsCorrect)
	{
		if (count != 10)
		{
			cout << "I generated a random number. Please guess what it is" << endl;
			cin >> answer;

			if (answer < randomNum)
			{
				cout << "Too Low" << endl;
				IsCorrect = false;
				prevNum[count] = answer;
				count++;

				//break;
			}
			else if (answer > randomNum)
			{
				cout << "Too High" << endl;
				IsCorrect = false;
				prevNum[count] = answer;
				count++;
				//break;
			}
			else
			{
				prevNum[count] = answer;
				count++;
				cout << "Correct. It took you " << count << " times to get the answer correct" << endl;
				for (int i = 0; i < count-1; i++)
				{
					cout << "Here are your previous wrong answers: " << prevNum[i] << endl;
				}
				IsCorrect = true;
			}
			system("PAUSE");
		}
		if (count == 10 || IsCorrect)
		{
			for (int i = 0; i < count; i++)
			{
				cout << "You ran out of life choices. Here is your previous wrong answers: " << prevNum[i] << endl;
				IsCorrect = true;
				break;
			}

		}


	}

}
