#include<stdio.h>
// ODD OR EVEN
int main() { // EVEN -> 1 OR ODD -> 0
int check,number ;
printf("Enter number:");
scanf("%d",&number);
check=number%2==0 ;
printf("%d",check);
return 0;
}
