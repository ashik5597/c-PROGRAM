/*5. If the ages of Arif, Fahmid and Joy are input through the keyboard, write a program to
determine the youngest of the three.*/
#include<stdio.h>
int main(){
    int
arif, fahmid, joy;
    printf("Enter Arif age: ");
    scanf("%d", &arif);
    printf("Enter Fahmid age: ");
    scanf("%d", &fahmid);
    printf("Enter Joy age: ");
    scanf("%d", &joy);

    if(arif<fahmid && arif<joy){
        printf("Arif is youngest");
    }else if(fahmid<arif && fahmid<joy){
        printf("Fahmid is youngest");
    }else{
        printf("Joy is youngest");
    }

    return 0;


}
