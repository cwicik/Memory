#ifndef MAIN_H
#define MAIN_H

void add(int* pNum, int incBy);

void swap(int* pNum1, int* pNum2);

typedef struct Rectangle Rectangle;
struct Rectangle
{
    double width;
    double height;
};

void intializeRect(Rectangle* rect, double width, double height);

int fibo(size_t n);

void fillArrayWithFibo(int arr[], size_t sizeOfArray);

void printArr(int arr[], size_t sizeOfArray);

void printRectArr(Rectangle arr[], size_t sizeOfArray);

void charArrCopy(char arr1[], char arr2[], size_t sizeOfArrays);

int charArrCompare(char arr1[], char arr2[], size_t sizeOfArrays);

void charArrSetValue(char arr[], size_t sizeOfArrays, char value);

void charArrSwap(char arr1[], char arr2[], size_t sizeOfArrays);

void copyFile(FILE* sourceFile, FILE* destFile);

#endif