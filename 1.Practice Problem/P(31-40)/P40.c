/*8.Write a program to check the area of the triangle is greater than the perimeter of the triangle.*/
#include<stdio.h>
int main(){
    int length,width,area,perimeter;
    printf("please Enter Length And Width:");
    scanf("%d %d",&length,&width);

    area = length * width;
    perimeter = 2 * (length + width);

    if(area>perimeter){
        printf("Area is bigger then perimeter");
    }
    else{
        printf("Perimeter is bigger then area");
    }
    return 0;




}
