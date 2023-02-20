#include <iostream>
#include "locale.h" 
#include <limits>
#include <cmath>

using namespace std;

short input (){
	int a;
	do{
		cout<<"Введите число:  ";
		cin>>a;
		if (a>SHRT_MAX || a<SHRT_MIN) {
			cout<<"Ошибка, число не входит в диапазон ["<<SHRT_MIN<<" , "<<SHRT_MAX <<"]\n";
		} 
	} while (a>SHRT_MAX || a<SHRT_MIN);
	
	return (a);	
}

short dob (short &d){
	
	short a, min, max, count;
	
	count = 0;
	a = input();
	min = a ;
	max = a;
	
	while(a!=127){
	
		count++;
		
		if(a > max){
			max = a;
		}
		if(a < min){
			min = a;
		}
		
		a = input();
	}
	d = min * max;
	return (count);
}

int main()
{
	setlocale(LC_ALL, "Russian"); 
	
	short kol, dobutok;
	
	kol = dob(dobutok);
	
	cout<<"Количество чисел: "<<kol<<"\n";
	if (kol != 0){
		cout<<"Добуток максимального и минимального числа: "<<dobutok<<"\n";
	}
}
