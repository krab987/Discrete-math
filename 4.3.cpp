#include <iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	short a,b,x;
	double c;
	
	do{
	cout<<"a = ";
	cin>>c;		
	}while(c<-32768 || c>32768);
	
	a=c;
	
	do{
	cout<<"b = ";
	cin>>c;	
	}while(c<-32768 || c>32768);
	
	b=c;

	if (a<b) {
		if(b==0) cout<<"Ошибка: деление на 0";
	c=(3*a-5)/b;
	}

	else if (a>b){
		if(a==0) cout<<"Ошибка: деление на 0";
	c=(a*a*a+b)/a;	
	}
	
	else c=-4;	
	
	if (c<-32768 || c>32768) cout<<"Ошибка диапазона результата";
	
	x=c;
	cout<<x;	

	
	return 0;
}
