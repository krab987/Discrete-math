#include "input.cpp"

using namespace std;

short input ();

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
