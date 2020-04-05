#include <iostream>  

using namespace std;  

int main()  {  

// declaração das variaveis
int a[10], numeroDecimal, i;  
  
cout<<"Digite um numero a ser convertido: ";

//Recebe o valor digitado
cin>>numeroDecimal; 
   
for(i=0; numeroDecimal>0; i++) {    
	a[i]=numeroDecimal%2;    
	numeroDecimal= numeroDecimal/2;  
}   
cout<<"O numero em binario eh: ";
    
//Informa o numero em binario
for(i=i-1 ;i>=0 ;i--) {    
cout<<a[i];    
}    
}  


