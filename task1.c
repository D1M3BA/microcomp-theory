#include <stdio.h>
#include <string.h>

int replace(char  *s);

int main (void){ 


          char stuff[100];  //allocate space for string
          printf("Enter string: ");
          fgets(stuff, sizeof stuff, stdin);   // prompt user for input
          stuff[strcspn(stuff, "\n")] = '\0';   //adds null at index where user clicked enter
          printf("String was : %s\n", stuff);
          int count = replace(stuff);
          printf("String is : %s\n", stuff);
          printf("Number replaced %d \n", count);

          return 0;

}

int replace(char  *s){
          int count = 0;
          while(*s != '\0'){ //loop until string ends
               if( *s  == ' '){ //if current char is a space replace it with -
                *s = '-';
                count++;
               }
               s++;  //next char in string
            }
        return count;  //return number of spaces
}


