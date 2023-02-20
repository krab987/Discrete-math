#include <iostream> 
#include "locale.h" 
#include <time.h> 
#include <stdlib.h> 
#include <cmath> 
#include <limits>

using namespace std; 

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

int checkint (int y){
	
	double x;
	x=y;
	do{
		
		cin>>x;	

		if (fabs(x)>INT_MAX || fabs(x)<INT_MIN) {
			cout<<"Ошибка. Не входит в диапазон \n";
		} 
		
	}while(fabs(x)>INT_MAX || fabs(x)<INT_MIN);
	
	return x;
}

void rand (int A[],int kol){
     
 srand( (unsigned)time( NULL ) ); 
 for (int i=0;i<kol;i++){
     A[i]=rand()%(kol+kol) - kol;     
 }     
 return; 
} 

void input (int A[],int kol){      
   
     for (int i=0;i<kol;i++){             
     A[i]=checkint (A[i]);
            
     }          
 return; 
} 

 void output( int A[],int kol){          
  cout<<"Output elements : \n";
  for (int i=0;i<kol;i++)         
  cout<<A[i]<<"\t";     
  cout<<endl; 
  return; 
} 

int sumku( int A[],int kol){ 
	int s=0;
 int c, d;
 
 cout<<"c = ";
 c = checkint (c);
 cout<<"d = ";
 d = checkint (d);
           
 for (int i=0;i<kol;i++){         
     if (A[i]<0 && A[i]>=c*d)    {         
            s += pow(A[i],3);         
     } 
 }     
 return s; 
 } 
 
int main(){          
 
 setlocale(LC_ALL, "Russian");          
 
 int a[20];     
 int size; 
 bool ch; 
 
     do{         
     cout<<"Size = ";         
     cin>> size;     
 }while (size<=0 || size>20);      
 
 cout<<"Choose input: 0 - auto, 1 - by yourself : ";
 ch = checkbool (ch); 
 
 switch (ch){         
     case 0: rand (a,size);break;         
     case 1: input (a,size);break; 
     } 
 
     output(a,size);      
     cout<<"Sum =  "<<sumku(a,size);          
 return 0;     
 }
