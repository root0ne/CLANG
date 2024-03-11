#include<stdio.h>
int main(){
    int age;
    char name[25];

    printf("what's your name ?:\t",name);
    //scanf("%s",&name);
    fgets(name,25,stdin); // This helps to read white spaces as a char.

    printf("How old are you ?:\t");
    scanf("%d",&age);

    printf("\nHi %s",name);
    printf("\nYou are %d years old.",age);


    return 0;
}