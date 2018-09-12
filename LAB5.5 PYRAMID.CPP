#include<iostream>
using namespace std;
int main()
{
//ASK FOR HEIGHT OF TRIANGE NEEDED
cout <<"give height of triangle needed ";
int H;
cin >>H;
	for(int i=1;i<=H;i++)
	{for(int j=1;j<=(H*2)-1;j++)
		{if((j<=(H-i))||(j>=(H+i)))
					{cout <<" ";}
	
		else {cout <<"*";}


		}
cout <<endl;	
	}
return 0;
}
