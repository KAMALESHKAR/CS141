#include<iostream>
using namespace std;
//WRITE FUNCTION TO ADD
int SUM (int x, int y)
{
		int sum;
		sum = x + y;
		return (sum);
}
//write the function to compare for maximum
int compare1(int x, int y)
{
		int k;
		if (x>y){k=x;}else{k=y;};
		return (k);	
}
//write the function to compare for minimum
int compare2(int x, int y)
{
		int k;
		if (x<y){k=x;}else{k=y;};
		return (k);	
}
//main function
int main()
{		int a,b;
//ask user for inputs
		cout <<"give two integers of your choice";
		cin >>a >>b;
//ask what is needed
		cout <<"press 1 to add." <<endl <<"press 2 to know the maximum of two."<<endl <<"enter any other number to know the minimum of two." 			<<endl;	
		int p;cin >>p;
//display the required
		if(p==1){cout <<"sum is " <<SUM(a,b);}
		else if(p==2){cout <<compare1(a,b) <<"is maximum of the two";}
		else{cout <<compare2(a,b) <<"is minimum of the two";}
return 0;
}
