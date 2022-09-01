#include <stdio.h>

   int main() {
   int Floor = 7;
   int newFloor = 0;
   int preFloor = 0;
   int i=0;

   for(i=0;i<=Floor ;i++)

   {
        printf("Door is opening \n");
        printf(" Please Press Destination Floor No:");
        scanf("%d", &newFloor);
        printf("Door Closed \n");

           if(newFloor <=Floor)
        {
            if(newFloor > preFloor)
            {
                printf("Moving up to the Destination \n");
                printf("Arrived Destination Floor", &newFloor);
                printf("\n");
                preFloor = newFloor;}

            if(newFloor < preFloor)
            {
                printf("Moving down to the Destination \n");
                printf("Arrived Destination Floor", &newFloor);
                printf("\n");
                preFloor = newFloor;}

        }
        else
        {
            printf("Wrong Destination & Press Number again \n");

        }

    }

    return 0;
}
