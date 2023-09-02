#include<iostream>
using namespace std;
class array
{
	public:
		int n,b,temp,pos,pos1;
		char a;
		int arr[100];
	void build()
	{
		cout<<"enter number of elements in array:";
		cin>>n;
		cout<<"enter elements of array:";
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
	}
	void insert()
	{
		cout<<"Do you want to insert any element?(y/n)";
		cin>>a;
		if(a=='y')
		{
			cout<<"enter the postion you want to insert number:";
			cin>>pos;
			cout<<"enter number you want to insert:";
			cin>>b;
			n=n+1;
			for(int i=n-1; i>=pos-1; i--) 
				{
					arr[i+1]=arr[i];
				}
				arr[pos]=b; 	
		}
	}
	void deletion()
	{
		cout<<"do you want to delete any number in array?(y/n)";
		cin>>a;
		n=n-1;
		cout<<"enter position where you want to delete element:";
		cin>>pos1;
		for(int i=pos1;i<=n;i++)
			{
				arr[i]=arr[i+1];
			}
	}
	void display()
	{
		cout<<"your current array is:"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<arr[i];
		}
	}
};
int main()
{
	array a1;
	a1.build();
	a1.display();
	a1.insert();
	a1.display();
	a1.deletion();
	a1.display();
}
