#include<stdio.h>
int main(){

    char inputchar;
    printf("Please Input Your Character:");
    scanf("%c",&inputchar);

    if(inputchar>='A'  && inputchar<='Z'){
        printf("This is capital letter");
    }
    else if(inputchar>='a' && inputchar<='z'){
        printf("This si small letter");
    }
    else if(inputchar>='0' && inputchar<='9'){
        printf("this is number");
    }
    else{
        printf("This is special charecter");
    }
    return 0;



}
