//
// Created by ACER on 15.03.2024.
//
#include <iostream>
#include "array.h"
#include <stdlib.h>
FILE * fptr;

void  enterValue(int *array){
    printf("Input values to array:\n");
    for (int i=0; i < SIZE; ++i) {
        printf("*(array + %d) = ", i);
        scanf("%d", &*(array + i));
    }
}
void printArray(int *array) {
    for (int i = 0; i < SIZE; ++i) {
        printf("*(array + %d) = %d\n",i, *(array + i));
    }
}
int findMaximumValue(int *array) {
    int max = *array;
    for (int i = 0; i < SIZE; ++i ){
        if(*(array + i) > max){
            max = *(array + i);
        }
    }
    return max;
}
int findMiniumValue(int *array){
    int min = *array;
    for (int i = 0; i < SIZE; ++i ){
        if(*(array + i) < min) {
            min = *(array + i);
        }
    }
    return min;
}
float calculateAverage(int *array){
    int sum = 0;
    for (int i = 0; i < SIZE; ++i ) {
        sum = sum + *(array + i);
    }
    float avg = (float)sum / SIZE;
    return avg;
}
void saveValue(int array[]) {
    fptr = fopen("values.txt", "w");
    int a;
    if (fptr == 0) {
        printf("ERROR\n");
        exit(1);
    }
    for (int i = 0; i < SIZE; ++i) {
        fprintf(fptr,"(array + %d) = %d ", i, array[i]);

    }
    fclose(fptr);

    puts("Saved values in file.\n");
}
void openValues(int array[]) {
    fptr = fopen("values.txt", "r");
    char fileLine[100];
    if (fptr != 0) {
        while (!feof(fptr)) {
            fgets(fileLine, 100, fptr);
            if (!feof(fptr)) {
                puts(fileLine);
            }
        }
    } else {
        printf("\nERROR\n");
    }
    fclose(fptr);
}