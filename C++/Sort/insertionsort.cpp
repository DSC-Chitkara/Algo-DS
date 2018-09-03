#include<iostream>
using namespace std;
class insertionsort
{
	public:
	int arr[50],n;
	void array()
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
	}	
	void insertion()
	{
		for(int i=1;i<n;i++)
		{
			int temp,j=0;
			temp=arr[i];
			j=i-1;
			while(arr[j]>temp && j>=0)
			{
				arr[j+1]=arr[j];
				j=j-1;
			}
			arr[j+1]=temp;
		}
	}
	void display()
	{
		for(int i=0;i<n;i++)
		{
			cout<<arr[i];
		}
	}
};
int main()
{s
	insertionsort s;
	s.array();
	s.insertion();
	s.display();
}

//Test Cases
// if arr[5]={8,5,1,0,7} then insertion sorted array will be arr[5]={0,1,5,7,8}
// if arr[5]={9,3,4,5,6} then insertion sorted array will be arr[5]={3,4,5,6,9}
