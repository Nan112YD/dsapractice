#include<stdio.h>

int numbercheck(int num){
    if (num%2==0){//checking if the number is odd or even using modulus operator
        return 1 ;
    }
    else{
        return 0 ;
    }}
int numbercheckbinary(int num){
    if((num&1)==1){//checking if the number is odd or even using bitwise operator
        return 0 ;
    }
    else{
        return 1 ;
}
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(numbercheck(num)==1)
        printf("%d is even .\n", num);
    else
        printf("%d is odd .\n", num);

    if(numbercheckbinary(num))
        printf("%d is even .\n", num);
    else
        printf("%d is odd .\n", num);
        
    return 0;
}