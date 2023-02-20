#include <iostream>
#include <cmath>
#include "locale.h" 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); 
	
	double x,n,e,s2=0, s1=0, ch,zn,slug;
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
	
	do{
	cout<<"e = ";
	cin>>e;		
	}while (!(e>0 && e<1));
	
	ch=x;
	zn=1*2*3;
	slug=ch/zn;
	s2=s2+slug;

	i=2;
	
	while(fabs(slug>=e))
	{
		ch=-ch*x*x;
		zn=zn*(2*i)*(2*i+1);
		slug=ch/zn;
		s2=s2+slug;
		i++;		
	}
	ch=x;
	zn=1*2*3;
	slug=ch/zn;
	s1=s1+slug;
	
	for(i=2;i<=n;i++){
		ch=-ch*x*x;
		zn=zn*(2*i)*(2*i+1);
		slug=ch/zn;
		s1=s1+slug;	
	}
	
	cout<<"s1 = "<<s1<<"\n";
	cout<<"s2 = "<<s2<<"\n";
	
	C=(x-sin(x))/(x*x);
	cout<<"C = "<<C<<"\n";	
		
	return 0;
}
