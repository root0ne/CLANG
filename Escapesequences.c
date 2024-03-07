#include <stdio.h>
int main(){

    // In this we will be using escape sequences 

    /* We use "\" followed by a letter or  combinaton of digits.
    Each letter conation a specific action 
    
    EXAMPLES:-
    \n = newline
    \t = tab (horizontal)
    \v = vertical tab
    \\ = for blackslash
    \s = space

    */

   printf("Hey Guys, My name is Vardhan Bhardvaj");    // case1
   printf("I have been writing code for a while\n");

   // in the above case we could see the code produce outupt in a single line format.

   printf("Hey Guys, My name is Vardhan Bhardvaj\n");   // case2
   printf("I have been writing code for a while \n");
    
    //we could see that the sentences have been written in multiple line format.
    /* NOW in case 3 \t signifies horizontal tab and /v creates vertical tab*/

   printf("Hey Guys, My name is Vardhan Bhardvaj\t");   //case3 
   printf("I have been writing code for a while ");
   return 0;
}