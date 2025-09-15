#include <stdio.h>

int main() {
    int startnumber, stopnumber;

    
    while (1) {
        printf("Enter start number: ");
        scanf("%d", &startnumber);

        printf("Enter stop number: ");
        scanf("%d", &stopnumber);

        if (startnumber < stopnumber) {
            break; 
        } else if (startnumber == stopnumber) {
            printf("Your Start number is equal to Stop number, please try again!\n\n");
        } else {
            printf("Your Start number is greater than Stop number, please try again!\n\n");
        }
    }

    
    printf("Start number is %d and stop number is %d\n", startnumber, stopnumber);
    printf("-------------------\n");

    printf("Sequence from start to stop: ");
    while (startnumber <= stopnumber) {
        printf("%d ", startnumber);
        startnumber++;
    }

    printf("\nThank you.\n");
    return 0;
}