/*AIM-Write a program to accept N numbers from the user and store them in an array. Then, accept another number from the user and search that using Linear Search.*/
#include<iostream>
using namespace std;

class arr
{
	
	public:
		int a[100],j;
		void create(*a,j);
		void display(a[100],j);
};
void arr::create(int a[100],int j)
{
	int i,n,flag=0;
 cout<<"enter the no. of elements in an array"<<endl;
	cin>>j;
	//int a[j];
	cout<<"enter the "<<j<<" elements"<<endl;
	for(i=0;i<j;i++)
	{
	cin>>a[i];
    }		
}
void arr::display(int a[100],int j)
{
	int flag=0,n,i;
cout<<"enter no. to be checked"<<endl;
	cin>>n;
	for(i=0;i<j;i++)
	{
		cout<<a[i]<<endl;
	}
	for(i=0;i<j;i++)
	{	
		if(a[i]==n)
		{
			flag=1;
			cout<<"index of no. is "<<i<<endl;
			break;
		}
		else{
			flag=0;
		}
	}
	if(flag==1)
	{
		cout<<"YES no. is present";

	}
	else if(flag==0)
    {
 cout<<"NO no. is not present";
	}
}
int main()
{
	int a[100], n;
	arr ll;
	ll.create(a,n);
	ll.display(a,n);
	cin >>n;
}

