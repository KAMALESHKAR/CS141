#include<iostream>
using namespace std;
//FUNCTION TO GET SUM OF SQUARES OF EVEN NUMBERS
int sumSquareEvenNumber(int v1,int v2)
{
		int sum=0;
		while (v2>=v1)
			{
				if (v1 %2==0)
				sum=sum+v1*v1;
				else
				sum=sum+0;
				v1++;
			}
		return sum;
}
int main()
{
//ASK THE USER FOR INPUT
		int A,B;
		cout<<"Enter first and second number";
		cin>>A>>B;
//CALLING THE FUNCTION ABOVE TO GET RESULT
//DISPLAY THE RESULT
		cout<<"Sum is :"<<sumSquareEvenNumber(A,B)<<endl;
		return 0;
}
