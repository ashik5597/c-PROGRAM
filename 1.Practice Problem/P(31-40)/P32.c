/*1.If cost price and selling price of an item is input through the keyboard, write aprogram to
determine whether the seller has made profit or incurred loss. Also determine how much profit
he made or loss he incurred.*/
#include<stdio.h>
int main(){
    double cost_price ,selling_price;
    printf("Enter cost price:\n");
     scanf("%lf",&cost_price);
    printf("Enter selling price:");
   scanf("%lf",&selling_price);

      if (cost_price<selling_price){
        printf("Profitable");
        }
        else if (cost_price==selling_price){
            printf("Price are equal");
        }
        else {
            printf("Loss Project");
        }



return 0;













}
