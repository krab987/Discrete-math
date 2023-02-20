#include <iostream>
#include "locale.h" 
#include <time.h> 
#include <limits>
#include <cmath> 
#include <stdlib.h> 
#define cons 10

using namespace std;

void checkshort (short &x){
	
	cin>>x;	
	do{
		
		
		if (fabs(x)>SHRT_MAX || fabs(x)<SHRT_MIN) {
			cout<<"Ошибка. Не входит в диапазон \n";
		} 
		
	}while(fabs(x)>SHRT_MAX || fabs(x)<SHRT_MIN);
	
	return ;
}

bool checkbool (bool y){
	
	int x;
	x=y;
	do{
		
		cin>>x;	

		if (x>1 || x<0) {
			cout<<"Ошибка. Введите 0 или 1 \n";
		} 
		
	}while(x>1 || x<0);
	
	return x;
}

void rand(short A[][cons], short x, short y){
	
	srand( (unsigned)time( NULL ) ); 
	
	for (int i=0;i<x;i++){
		
		for (int j=0;j<y;j++){
			
			 A[i][j]=rand()%(10);
			
		}
         
	}     
 return; 
}

void input(short A[][cons], short x, short y){
	
	for (int i=0;i<x;i++){
		
		for (int j=0;j<y;j++){
			
			cout<< "A["<<i<<"]["<<j<<"]"<<" = ";
			cin>> A[i][j];	
		}
         
	}     
 return; 
}

void output(short A[][cons], short x, short y){
	
	cout<<"Output elements: \n";
	for (int i=0;i<x;i++){
		
		for (int j=0;j<y;j++){
			
			 cout<<A[i][j]<<"\t";
			
		}
        cout<<"\n";
	} 
	return;
}

short ser(short A[][cons], short x, short y){
	
	short sum=0;
	short B[cons];
	
	for (int i=0;i<x;i++){
		
		for (int j=0;j<y;j++){
			
			sum+=A[i][j];
			B[i]=sum;
			
		}
 
       sum=0;
	}
	sum=0;
	for (int j=0;j<x;j++){
			
			sum+=B[j];	
	}
		
	return sum;
}

int main(){
	setlocale(LC_ALL, "Russian"); 

	short a[cons][cons];     
	short m,n; 
	bool ch; 
 	
 	
    do{         
    	cout<<"Размер строка = ";         
    	checkshort(m);
	   
 	}while (m<=0 || m>10);
	 
    do{         

		cout<<"Размер столбца = ";         
    	checkshort(n);
		   
 	}while (n<=0 || n>10);    
 
 cout<<"Choose input: 0 - auto, 1 - by yourself : ";
 ch = checkbool (ch); 
 
 switch (ch){         
     case 0: rand (a,m,n);break;         
     case 1: input (a,m,n);break; 
     } 
     
     output(a,m,n);      
     
     cout<<"Ответ =  "<<ser(a,m,n)/m;         
 return 0;  
	
}
