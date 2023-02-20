#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); 
	
	int a;
	char b;
	float c;
	double d;
	
	double res;
	
	cout<<"а = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	cout<<"c = ";
	cin>>c;
	cout<<"d = ";
	cin>>d;
	
	res=(tan(b+23)-c)/((a/2)-4*d-1);
	
	cout<<"Результат:\n";
	cout<<res;
	
	return 0;
}
