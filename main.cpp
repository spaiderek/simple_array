#include <iostream>
#define SIZE 10
#include "array.h"
#include <stdlib.h>


void menu(void){
    printf("1. Enter the values into the array\n");
    printf("2. Display the content of the array\n");
    printf("3. Determine the maximum value\n");
    printf("4. Determine the minimum value\n");
    printf("5. Determine the average value\n");
    printf("6. Enter the values into file\n");
    printf("7. Display the content of the file\n");
    printf("0. EXIT\n");
    printf("Select an option:\n");
}




int main() {


    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7 ,8, 9, 10};

    int option = 0;
    int max;
    int min;
    float avg;

    do{
        menu();
        scanf("%d",&option);
        switch (option){
            case 0:
                break;
            case 1:
                printf("1. Enter the values into the array\n\n");
                enterValue(array);
                break;
            case 2:
                printf("2. Display the content of the array\n\n");
                char fileLine[100];
                break;
            case 3:
                printf("3. Determine the maximum value\n");
                max = findMaximumValue(array);
                printf("%d\n\n",max);
                break;
            case 4:
                printf("4. Determine the minimum value\n");
                min = findMiniumValue(array);
                printf("%d\n\n",min);
                break;
            case 5:
                printf("5. Determine the average value\n");
                avg = calculateAverage(array);
                printf("%f\n\n",avg);
                break;
            case 6:
                printf("6. Enter the values into file\n");
                saveValue(array);

                break;
            case 7:
                printf("7. Display the content of the file\n");
                openValues(array);

                break;
            default:
                printf("choose the right option");

        }
    }while (option !=0);

    printf("The End");

    return 0;
}