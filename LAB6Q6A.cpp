#include<iostream>
using namespace std;
//function get sum
int sumEvenNumber(int v1,int v2)
{
		int sum;
		for (sum=0;v1<=v2;v1++)
			{
				if (v1 %2==0)
				sum=sum+v1;
				else
				sum=sum+0;
			}
		return sum;
}
int main()
{
//data input
		int A,B;
		cout<<"Enter first and second number";
		cin>>A>>B;
//function calling
//output
		cout<<"Sum is :"<<sumEvenNumber(A,B)<<endl;
		return 0;
}
