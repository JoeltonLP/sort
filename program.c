#include <stdio.h>
#include <string.h>
#include <stdio.h>

int len(char *args);

int main() {

	char name[10] = "abc";
	
	
	
	int ascii[10];
	
	int i = 65;
	int n = 0;
	
	int tam = len(name); 
	
	
	while(i < 123){
		if( i == name[n] ){ 
			ascii[n] = i;
			n++; 
			i = 65;
		}
		i++;		
	} // end asc
	
	
	
	//=======================
	
	int depois[10];
    
    
    int maior = 0;
    
    
    int c =tam;
    
    for(int n = 0; n < tam ; n++){
    
        for(int i = 0; i < tam; i++) {
            if(ascii[i] > maior){
                maior = ascii[i];
            }
        
        }//end for i
        
        for(int z = 0; z < tam; z++) {
            
            if(ascii[z] == maior) {
                ascii[z] = 0;
            }
            
        }//end for z
        
        int y = 0; 
        depois[n-y] = maior;
        y+1;
        maior = 0;
       
      
    }
    
    
    for(int w = tam; w > 0; w--){
        printf("%c", depois[w]);
    }
	

	return 0;
	
}



int len(char *args) {
    
    char str[10];
    
    strcpy(str, args); 
    
    int count = 0;
 
  while(count < 9){
      if(str[count] == '\0'){
          count = count;
          break;
      }
      count++;
  }
  
    return count+1;    
} // end len()

