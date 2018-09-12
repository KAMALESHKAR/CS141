//include the library
#include<iostream>
#include<cmath>
using namespace std;
//write the function
int main()
{
	//DECLARE NO. OF ROWS AND COLUMNS AND ASSIGN VALUE THROUGH TERMINAL
	int R, C;//R STANDS FOR ROWS C FOR COLUMNS
	cout <<"give no. of rows and columns ";
	cin >>R >>C;
	//WRITE LOOP TO MAKE NO. OF ROWS
	for(int i = 1;i <= R;i++)
	{
		//WRITE LOOP TO MAKE NO. OF COLUMNS
		for(int j = 1;j <= C;j++)
		{
			//CONTINUOUS STARS
			if ((i==1)||(i==R)){
				cout <<"*";
			}
			else {
				//STARS AT END
				if ((j==C)||(j==1)){
					cout <<"*";
				}
				//GIVE SPACES
				else {
					cout <<" ";
				}
			}
		}
		cout <<endl;
	}
	//TERMINATE
	return 0;
}
