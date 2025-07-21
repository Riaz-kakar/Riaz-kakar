#include<iostream>
#include<string>
using namespace std;
int main()
{
	int range;  
	cout<<"Enter the range of array\n";
	cin>>range; //Getting the size of array
	int num[range];
	for(int i=0 ; i<range ; i++)
	{
//For getting value of array indexes
		cout<<"Assign values to array\n";
		cin>>num[i];
	}
	int largest=0;
	for(int j=0 ; j<range ; j++)
	{
		if(num[j]>largest)
		{
   //comparing each number with largest
			largest=num[j];
		}
	}
	cout<<"The largest number is:"<<largest;
}
