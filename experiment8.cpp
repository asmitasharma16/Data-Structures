/*Write a program to accept N numbers in an array, and then sort the array using Insertion Sort. Then accept a number from the user and insert it in the array according to the sequential order*/
#include<iostream>
using namespace std;
class insertsort
{
	int a[100],k,ptr,n,i,temp;
	public:
		void in()
		{

	cout<<"Enter the no. of elements in array"<<endl;
	cin>>n;
	cout<<"Enter array elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
	void sort();
	void newinsert();
	void out()
	{
	    cout<<"Sorted array is:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
};
void insertsort::sort()
{
	for(k=1;k<n;k++)
	{
		temp=a[k];
		ptr=k-1;
		while(temp<a[ptr] && ptr>=0)
		{
			a[ptr+1]=a[ptr];
			ptr--;
		}
		a[ptr+1]=temp;
	}
}
void insertsort::newinsert()
{
	int item;
    cout<<"\nEnter ITEM to be inserted : ";
     cin>>item;
     i = n-1;
     while(item<a[i] && i>=0)
     {
           a[i+1] = a[i];
           i--;
     }
     a[i+1] = item;
     n++;
     cout<<"\nAfter insertion array is :\n";
      for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
	int n;
	insertsort s1;
	s1.in();
	s1.sort();
	s1.out();
	s1.newinsert();
	cin>>n;
	
            }

