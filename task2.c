#include <stdio.h>
#include <string.h>

void code(char  *s);

int main (void){ 
          char stuff[100];  //allocate space for string
          printf("Enter string: ");
          fgets(stuff, sizeof stuff, stdin);  // prompt user for input
          stuff[strcspn(stuff, "\n")] = '\0';   //adds null terminator at index when user clicked enter
          printf("String was : %s\n ", stuff);
          code(stuff);
          printf("String is : %s\n", stuff);

          return 0;

}





void code(char *s){
   char  code1[] =  "abcdefghijklmnopqrstuvwxyz";
   char  code2[] = "bpduhijkaltxwmrzfoysvngeqc";
    while(*s != '\0'){  // while s isnt null
        if(*s >= 'a' && *s <= 'z'){  //if lower case letter 
            int idx = 0;
            for(int i = 0; i < 26; i++){ // find index for current char
                if(*s == code1[i]){ 
                    idx = i;
                    break;
                }
            }
            *s = code2[idx];  
        }
        s++;  // go to next char in string 
    }
    return;
}