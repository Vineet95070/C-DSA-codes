#include <stdio.h>

int main() {
    
    char ch;
    scanf("%c", &ch);
    
    switch(ch){
    	case 'A':
    		printf("Value is A: ");
    		break;
    	
    	case 'B':
    		printf("Value is B: ");
    		break;
    	
    	case 'C':
    		printf("Value is C: ");
    		break;
    	
    	case 'D':
    		printf("Value is D: ");
    	
    	default:
    		printf("Value is undefind: ");
	}

    return 0;
}

