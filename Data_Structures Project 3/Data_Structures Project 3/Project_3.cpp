#include <iostream>

using namespace std;


int main()
{
	system("color 02");//System Console's color and font

	int arrays[20];//Assigning the array number
	int x, y, tem, b;//Assigning integers

	for (x = 0; x < 20; x++) 
	{
			cout << "Enter " << x << "th element of your input: ";
			cin >> b;
			if ((b >= -100) && (b <= 100)) 
			{
				arrays[x] = b;
			}


			else 
			{
				cout << "Please enter from -100 to 100 range of values.";//Else the return statement is from the value
				return 0;
			}

    }


	for (x = 0; x<20; x++)
	{
			for (y = 0; y<20 - x; y++)
			{
				if (arrays[y]>arrays[y + 1])//Ascending the order of elements together
				{
					tem = arrays[y];
					arrays[y] = arrays[y + 1];
					arrays[y + 1] = tem;
				}
			}
	}

	for (x = 0; x<20; x++) 
	{
		cout << arrays[x] << endl;
	}


}