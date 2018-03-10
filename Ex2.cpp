#include<iostream>
#include<math.h>
using namespace std;
bool kt(int n);
int soluongSNT(int from, int to);
int main()
{
	int n;
	cout<<kt(n)<<endl;
	int from, to;
	do
	{
	cout<<"Nhap so: ";
	cin>>from>>to;
	}while(from<to && from<0 && to<0);
	cout<<int soluongSNT(from, to);
}
bool kt(int n)
{
	do
	{
		cout<<"Nhap so: ";
		cin>>n;
	}while(n<1);
	if ( n == 2)
	{
		return true;
	}
	else
	{
		for(int i = 2; i<= sqrt(n); i++)
		{
			if(n % i == 0)
			{
				return false;
			}
		}
		return true;
	}
}
int soluongSNT(int from, int to)
{
	int dem = 0;
	for(int i = from; i<=to; i++)
	{
		if(kt(i))
		{
			dem++;
		}
	}
	return dem;
}

