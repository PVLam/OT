#include<iostream>
using namespace std;
int Fibo(int n);
int giaithua(int n);
void nhiphan(int n);
int main()
{
	int n;
	cout<<"Nhap n: "<<endl;
	cin>>n;
	cout<<Fibo(n)<<endl;
	cout<<giaithua(n)<<endl;
	nhiphan(n);
	cout<<endl;
	return 0;
}
int Fibo(int n)
{
	if (n<=2)
		return 1;
	return Fibo(n-1) + Fibo(n-2);
}
int giaithua(int n)
{
	if(n<=1)
		return 1;
	return  n*giaithua(n-1);
}
void nhiphan(int n)
{
	if(n<=0)
		return;
	nhiphan(n/2);
	cout<<n%2;
}













