#include <iostream>  

using namespace std; 

void converterDeDecimalParaBinario() {
	
	int numeroDecimal;
	
	cout<<"********************************************\n";
	cout<<"* CALCULADORA DECIMAL\/BINARIO SELECIONADA *\n";
	cout<<"********************************************\n";	
	
	cout<<"Informe o numero decimal: \n" ;
	
	cin>>numeroDecimal; 
	
	// declaração das variaveis
	int a[10], i;  
	   
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

void converterDeBinarioParaDecimal (){
	
	int numeroDecimal = 0;
	
	int numeroBinario;
	
	cout<<"********************************************\n";
	cout<<"* CALCULADORA BINARIO\/DECIMAL SELECIONADA *\n";
	cout<<"********************************************\n";	
	
	cout<<"Informe o numero binario: \n" ;

	cin>>numeroBinario; 

   int base = 1;
   int temp = numeroBinario;
   
   while (temp) {
      int lastDigit = temp % 10;
      temp = temp/10;
      numeroDecimal += lastDigit*base;
      base = base*2;
   }
   
   	cout<<"O numero em decimal eh: "<<numeroDecimal;
}

int main()  {  

	int tipoCalculadora;

	cout<<"Qual calculadora usar ?\n";
	
	cout<<"Digite (1) de Decimal para Binario\n";
		
	cout<<"Digite (2) de Binario para Decimal\n" ;
	
	cin>>tipoCalculadora; 

	if (tipoCalculadora == 1 ) {
		converterDeDecimalParaBinario();
	} else if (tipoCalculadora == 2) {
		converterDeBinarioParaDecimal();
	} else {
		cout<<"Opcao invalida, digite qualquer tecla para continuar" ;
	}
	
}  


