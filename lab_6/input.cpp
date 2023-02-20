#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

short input (){
	int a;
	do{
		cout<<"¬ведите число:  ";
		cin>>a;
		if (fabs(a)>SHRT_MAX || fabs(a)<SHRT_MIN) {
			cout<<"ќшибка, число не входит в диапазон ["<<SHRT_MIN<<" , "<<SHRT_MAX <<"]\n";
		} 
	} while (fabs(a)>SHRT_MAX || fabs(a)<SHRT_MIN);
	
	return (a);	
}
