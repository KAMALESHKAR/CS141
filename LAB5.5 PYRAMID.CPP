#include<iostream>
using namespace std;
int main()
{
//ASK FOR HEIGHT OF TRIANGE NEEDED
cout <<"give height of triangle needed ";
//GET HEIGHT
int H;
cin >>H;
//LOOP FOR NO. OF ROWS
	for(int i=1;i<=H;i++)
	{
//LOOP FOR NO. OF COLUMNS	
	for(int j=1;j<=(H*2)-1;j++)
		{
//SPACES AT PLACE
			if((j<=(H-i))||(j>=(H+i))){cout <<" ";}
//OTHERWISE STARS	
		else {cout <<"*";}
		}
cout <<endl;	
	}
//TERMINATE
return 0;
}
