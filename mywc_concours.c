#include <stdio.h>

void mywc(){
	int nb_mot = 0;
	int nb_ligne = 0;
	int nb_charct = 0;
	char c;
	int flag_word = 0;
		
	
	do{
		c = getchar();	
		if(c == '\n'){
			nb_ligne += 1;
			nb_charct += 1;
			
			if(flag_word == 1) {
				flag_word = 0;
				nb_mot += 1;
			}
		}
				
		else if(c == ' '){
			nb_charct += 1;
			
			if(flag_word == 1) {
				flag_word = 0;
				nb_mot += 1;
			}
		}
		else if(c == '\t'){ //tab 
			nb_charct += 1 ; 
			
			if(flag_word == 1) {
				flag_word = 0;
				nb_mot += 1;
			}
		}			
		else if (c != EOF) {
			nb_charct += 1;
			flag_word = 1;
		}
		
		
	}while(c != EOF);
	
	//On compte le EOF et on rajoute la dernier ligne
	nb_ligne += 1;
	nb_charct += 1; 
	if(flag_word == 1) {
		nb_mot += 1;
	}
	
	fprintf(stdout,"%d %d %d",nb_ligne,nb_mot,nb_charct);
}

int main(void) {
	// your code goes here
	mywc();
	return 0;
}
