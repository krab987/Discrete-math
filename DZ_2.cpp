#include <iostream>
#include <cmath>
#include "locale.h" 

using namespace std;

int main()
{	
	setlocale(LC_ALL, "Russian"); 
	
	
	int n,a,b;
	bool i;
	
	do{
		cout<<"N = ";
		cin>>n;
	
		a=n%4;
		b=n/4;
		
		switch(a){
			case 0: cout<<n<<" = 4 * "<<b;break;
			case 1: cout<<n<<" = 4 * "<<b<<" + 1";break;
			case 2: cout<<n<<" = 4 * "<<b<<" + 2";break;
			case 3: cout<<n<<" = 4 * "<<b<<" + 3";break;
			default: cout<<"Введите натуральное число"; break;
		}	
		cout<<"\nПовторить? (1 - ДА, 2 - НЕТ) : ";
		cin>>i;
	}
	while(i==1);
		
	return 0;
}
