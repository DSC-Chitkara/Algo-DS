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
{
	insertionsort s;
	s.array();
	s.insertion();
	s.display();
}
