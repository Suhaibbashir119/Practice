#include<stdio.h>
#include<conio.h>

void main(){
    printf("------------------Your Name---------------------------\n");
    char name[20];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("My name is %s.\n");

    //printf("------------------------Sum of Two Numbers----------------------------\n");

    //int num1,num2;
    //printf("Enter first number: ");
    //scanf("%d", &num1);
    //printf("Enter Second number: ");
    //scanf("%d", &num2);

    //int result = num1 + num2;
    //printf("Sum of two numbers is : %d\n", result);

    //printf("-----------------Even or Odd-------------------------\n");
    //int num;
    //printf("Enter the Number: ");
    //scanf("%d", &num);

    //if(num % 2 == 0){
    //    printf(" %d is Even.",num);
    //} else{
    //    printf("%d is Odd." , num);
    //}

    //printf("-------------------------Largest of Three Numbers---------------------------\n");

    //int num1, num2, num3;
    //printf("Enter three numbers: ");
    //scanf("%d %d %d", &num1,&num2,&num3);

    //if(num1> num2 && num1 > num3){
    //    printf("%d is Largest of three.", num1);
    //}
    //else if(num2> num1 && num2 > num3){
    //    printf("%d is Largest of three.", num2);
    //}
    //else {
    //    printf("%d is Largest of three.", num3);
    //}

    //printf("-----------------------------print numbers from 1 to 10 ----------------------------------------\n");
    //for(int i = 1; i<= 10 ; i++){
    //    printf("%d\n", i);
    //}

    //printf("-----------------------------print even numbers from 1 to 20 ---------------------------\n");
    //for(int i = 1; i<= 20 ; i++){
    //        if(i % 2 == 0){
    //             printf("%d\n", i);
    //        }

    //}

    //printf("-----------------------------factorial of a number--------------------------\n");
    //int num;
    //printf("Enter any Number: ");
    //scanf("%d", &num);
    //int fact = 1;

    //for(int i = num;i > 0;i-- ){
    //    fact *= i;it
    //}
    //printf("%d is the factorial of %d",fact,num);



    printf("-----------------------------------Multiplication Table------------------------------------\n");
    int num;
    printf("Enter any Number: ");
    scanf("%d", &num);
    int mul ;

    for(int i = 1; i<= 10 ; i++){
        mul =num * i;
        printf("%d multiplied by %d is = %d\n",num,i, mul );
    }
}
