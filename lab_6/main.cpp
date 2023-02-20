#include <iostream>
#include "locale.h" 
#include "dob.cpp"


using namespace std;

short dob (short &d);

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
