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
			//STARS AT PLACES OF SIDES AND DIAGONALS
			if ((i==1)||(i==R)||(j==1)||(j==C)||(i==j)||(j==(R-i+1)))
				{cout <<"*";}
			else 
				{//Spaces
					cout <<" ";}
			
		}
		cout <<endl;
	}
	//TERMINATE
	return 0;
}
