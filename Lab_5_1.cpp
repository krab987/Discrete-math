#include <iostream>
#include <cmath>
#include "locale.h" 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); 
	
	double x,n,s=0,ch,zn,slug;
	double C;
	int i,k;
	do{
	cout<<"x = ";
	cin>>x;		
	}while (!(x>0 && x<1));

	
	do{
	cout<<"n = ";
	cin>>n;	
	}while (n<0);

	
	ch=x;
	zn=1*2*3;
	slug=ch/zn;
	s=s+slug;
	
	for(i=2;i<=n;i++){
		ch=-ch*x*x;
		zn=zn*(2*i)*(2*i+1);
		slug=ch/zn;
		s=s+slug;	
	}
	
	cout<<"s = "<<s<<"\n";
	
	C=(x-sin(x))/x*x;
	cout<<"C = "<<C<<"\n";	
		
	return 0;
}
