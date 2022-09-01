#include <stdio.h>

int main () {
int test=1;int age=0;
int number=0;
int money=0;
int quit=0;

printf (" Welcome to our Game !");
printf (" Please Enter your age ");
scanf (" %d", &age);

while (age>=18) {
    
    printf (" Enter your money to play Game:");

    scanf (" %d" , &money);
    
    printf (" Enter your Lotter Number:");
    scanf (" %d", &number);
}

switch (number) {
    
    case 123:
    printf ("Number is %d \n",number);
    money = money*5;
    printf("Get your money! %d \n", money);
    break;
    
    case 222:
    printf (" Number is %d\n",number);
    money = money*8;
    printf (" Get your money! %d\n", money);
    break;
    
    case 777:
    printf ("Number is %d\n", number);
    money =money*10;
    printf (" Get your money! %d\n", money);
    break;
    
    default:
    printf( "Try Again \n");
  
}
    printf (" press 0 to play again");
    scanf(" %d",&quit);
    if (quit!= 0) {
     break; }
     


    return 0;
}
