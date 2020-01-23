#include <stdio.h>

void multipleDe3(){
    int somme=0;
    int t;
    int i = 0;
    int number;
    fscanf(stdin,"%d",&t);
    
    while((fscanf(stdin,"%d",&number) != EOF) && (i < t)){
    
	    while(number>=10){
	        while(number>0){
	            somme+=number%10;
	            number= number/10;
	
	        }
	        number = somme;
	        somme=0;
	    }
	    i++;
    if((number == 0) || (number == 3) || (number == 6) || (number == 9)){
    	printf("OUI\n");
	}else{
		printf("NON\n");
	}}
}

void multipleDe3_v2(){
	char c; 
	int somme;
	int i = 0;
	int t;
	int number; 
	
	
	fscanf(stdin,"%d",&t);
	getchar();
	
	while(t > 0){
		somme = 0;
		c = getchar();
		while (c != EOF && c != '\n' ) {
            somme += c-48;
            c = getchar();
    	}
    	
    	number = somme;
    	somme = 0;
	    while(number>=10){
		        while(number>0){
		            somme+=number%10;
		            number= number/10;
		
		        }
		        number = somme;
		        somme=0;
	    }
	    if((number == 0) || (number == 3) || (number == 6) || (number == 9)){
    		fprintf(stdout,"OUI\n");
		}else{
			fprintf(stdout,"NON\n");
		}
		t--;
	}
}
	
	

int main(void) {
	// your code goes here
	multipleDe3_v2();
	return 0;
}
