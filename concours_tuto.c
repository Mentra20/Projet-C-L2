#include <stdio.h>
#include <stdlib.h>
//cd Documents/C/ && concours_tuto.exe < echo.in


int main(void) {
    int v;
    int tab[3];
    int i,n;
    int somme;
    int Continue = 1;
    for(i=0;i<3;i++){
        tab[i] = 0;
    }

    n=0;
    
    while(fscanf(stdin,"%d",&v) != EOF && Continue){
    	n++;
        tab[0] = tab[1];
        tab[1] = tab[2];
        tab[2] = v;
        
        somme = tab[0] + tab[1] + tab[2];
        
        if((somme == 42) && n>2){Continue = 0;}
        else if(n>2) {
        	fprintf(stdout,"%d\n",tab[0]);}
        }
        
    if(Continue){
    	if(n>1){
    		fprintf(stdout,"%d\n",tab[1]);
		}
		if(n>0){
			fprintf(stdout,"%d\n",tab[2]);
		}
	}
      return EXIT_SUCCESS;
}
