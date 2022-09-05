#include <stdio.h>

 int MEMBER = 6;
 void Choice (int* ptr);  int* ptr;

int main () {
int x=0;
int i = 0;
int index=0;

    char PW1[10]={'W','E','A','R','E','\0'};

    char PW2[10]={'L','O','V','E','L','Y','\0'};

    char PW3[10]= {'F','A','M','I','L','Y','\0'};

    char totalArray [100]={};

   char *names[] = {

      "David",
      "Rani",
      "Hanna",
      "Anna",
      "Michael",
      "Angela",

   };


   for ( i = 0; i < MEMBER; i++) {
      printf(" NAME [%d] = %s\n" ,i, names[i]);

   }


    for(int i =0 ; PW1[i] != '\0' ; i++){

       totalArray[index] = PW1[i];
        index = index + 1;

    }

    printf(" Data: %s\n",totalArray);
    printf(" Index number: %d\n",index);


    for(int i =0 ; PW2[i] != '\0' ; i++){

        totalArray [index] = PW2[i];
        index=index+1;


    }
    printf(" Data: %s\n",totalArray );
    printf(" Last Index number: %d\n",index);

    for(int i =0 ; PW3[i] != '\0' ; i++){

        totalArray [index] = PW3[i];
        index=index+1;
    }
    printf(" Data: %s\n",totalArray);
    printf(" Last Index number: %d\n",index);

    //Finding 'I' Letter from Array

     for ( x=0 ; x<index ; x++){

        if( totalArray[x] == 'I'){

            printf("We found at index %d \n",x);


       }
       }



    ptr = & MEMBER ;

    Choice (ptr);

    printf(" value of ptr %d ",*ptr);

    return 0;
    }


    void Choice (int* ptr){

    (*ptr)== MEMBER;

}

