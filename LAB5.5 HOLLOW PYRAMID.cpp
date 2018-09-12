#include<iostream>
using namespace std;
int main()
{
//ASK FOR HEIGHT OF TRIANGE NEEDED
cout <<"give height of triangle needed ";
//GET HEIGHT
int H;
cin >>H;
//LOOP FOR ROWS
	for(int i=1;i<=H;i++)
//LOOP FOR COLUMNS
	{for(int j=1;j<=(H*2)-1;j++)
		{
//* AT PLACES NEEDED
			if((j==(H-i+1))||(j==(H+i-1))||(i==H)){cout <<"*";}
//OTHERWISE GIVE SPACE
		else{cout <<" ";}
		}
cout <<endl;	
	}
//TERMINATE
return 0;
}
