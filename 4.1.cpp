#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	double a,b,c,d,res;
		
	cout<<"a = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	cout<<"c = ";
	cin>>c;
	cout<<"d = ";
	cin>>d;	
	
	if((180*(b+23)/3.14)==90 || (180*(b+23)/3.14)==-90 || ((a/2)-4*d-1)==0) {
		
		cout<<"Результат: Ответа нет";
	}
	else{
	res = (tan(b+23)-c)/((a/2)-4*d-1);
		
	cout<<"Результат: "<<res;	
	}

		
	return 0;
}
