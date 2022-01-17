#include <stdio.h>

int main(void){
    // Variables 
    int val1, val2, choice;
    printf("#### Age Program #### \n");
    printf(" Options: \n1 - Determine age at certain year.\n");
    printf("2 - Determine year when age is reached. \n your choice: ");
    scanf("%d", &choice);
    printf("your choice is %d." , choice);
    if (choice == 1){
        printf("When was the person born? \n Year (AAAA):");
        scanf("%d", &val1);
        printf("What year do you want to know the person's age? \n Year (AAAA):");
        scanf("%d", &val2);
        printf("The person will be %d years old.", val2-val1);
    } else if (choice == 2){
        printf("When was the person born? \n Year (AAAA):");
        scanf("%d", &val1);
        printf("At what age will he/she be? \n Year (AAAA):");
        scanf("%d", &val2);
        printf("In the year %d, the person will be %d years old.", val1+val2, val2);
    }
    
    return 0;
}


