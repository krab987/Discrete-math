#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	double x,y;
	bool res;
	
	cout<<"x = ";
	cin>>x;
	cout<<"y = ";
	cin>>y;
	
	res = x>=2 && y>=5*x/3-22/3. && y<=6-x;
		
	cout<<"Результат: "<<res;
		
	return 0;
}
