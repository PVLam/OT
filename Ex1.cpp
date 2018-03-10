#include<iostream>
using namespace std;
void nhap(int array[], int & n);
void xuat(int array[],int n);
int find_min(int array[], int n);
void find_order(int array[], int n);
void order(int array[], int n);
int main()
{
	int n;
	int array[n];
	nhap(array, n);
	xuat(array, n);
	cout<<"Phan tu co GTNN la: "<<find_min(array, n)<<endl;
	find_order(array, n);
	order(array, n);
	return 0;
}
void nhap(int array[], int & n)
{
	cout<<"Nhap so n: ";
	cin>>n;
	for(int i = 0; i<n; i++)
	{
		int value;
		do
		{
			cout<<"Nhap phan tu thu "<<i+1<<": ";
			cin>>value;
		}while(value<0);
		array[i] = value;
	}
}
void xuat(int array[], int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<array[i]<<' ';
	}
	cout<<endl;
}
int find_min( int array[], int n)
{
	int min = array[0];
	for (int i = 1; i<n; i++)
	{
		if(array[i]<min)
		{
			min = array[i];
		}
	}
	return min;
}
void find_order(int array [], int n)
{
	int min = find_min(array, n);
	cout<<"Thu tu cua phan tu nho nhat la: ";
	for (int i = 0; i<n; i++)
	{
		if(array[i] == min)
		{
			cout<<i+1<<' ';
		}
	}
	cout<<endl;
}
void order(int array[], int n)
{
	for (int i = 0; i<n; i++)
	{
		for(int j = 0; j<i; j++)
		{
			if(array[i]<array[j])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}	
	}
	for (int i = 0; i<n; i++)
	{
		cout<<array[i]<<' ';
	}
	cout<<endl;
}
	
