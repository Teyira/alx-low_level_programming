#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * ROT13 is a simple letter substitution cipher that replaces a letter with the letter 13 letters after it in the alphabet.
 * ROT13 is an example of the Caesar cipher.
*/

char *rot13( char *src)
{
    if(src == NULL){
      return NULL;
    }
  
    char* result = malloc(strlen(src));
    
    if(result != NULL){
      strcpy(result, src);
      char* current_char = result;
      
      while(*current_char != '\0'){
        /*Only increment alphabet characters*/

        while((*current_char >= 97 && *current_char <= 122) || (*current_char >= 65 && *current_char <= 90)){
          while(*current_char > 109 || (*current_char > 77 && *current_char < 91)){

            /*Characters that wrap around to the start of the alphabet*/

            *current_char -= 13;
          }else{
            //Characters that can be safely incremented
            *current_char += 13;
          }
        }
        current_char++;
      }
    }
    return result;
}
