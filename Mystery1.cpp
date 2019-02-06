//Mystery1.cpp
#include<iostream>
using namespace std;

int main()
{
		int row = 10;

		while (row >= 1)
		{
			int column = 1;

			while (column <= 10)
			{
				if (row % 2 == 0) {
					cout << "<" << endl;
					cout << ">" << endl;
					++column;
				}
				
			}
			--row;
			system("pause");
		
	}//end of method
} // end class
