#include <stdio.h>
#include "main.h"

void add(int* pNum, int incBy)
{
    *pNum += incBy;
}

void swap(int* pNum1, int* pNum2)
{
    int temp = *pNum1;
    *pNum1 = *pNum2;
    *pNum2 = temp;
}

void intializeRect(Rectangle* rect, double width, double height)
{
    (*rect).width = width;
    (*rect).height = height;
}

int fibo(size_t n)
{
  if (n < 2)
  {
    return 1;
  }
  return fibo(n - 1) + fibo(n - 2);
}

void fillArrayWithFibo(int arr[], size_t sizeOfArray)
{
    for (size_t i = 0; i < sizeOfArray; i++)
    {
        arr[i] = fibo(i);
    }
}

void printArr(int arr[], size_t sizeOfArray)
{
    for (size_t i = 0; i < sizeOfArray; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printRectArr(Rectangle arr[], size_t sizeOfArray)
{
    for (size_t i = 0; i < sizeOfArray; i++)
    {
        printf("Rectangle %d:\n",i);
        printf("Width = %.2lf:\n", arr[i].width);
        printf("Height = %.2lf:\n", arr[i].height);
        printf("\n");
    }
}

void charArrCopy(char arr1[], char arr2[], size_t sizeOfArrays)
{
    for (size_t i = 0; i < sizeOfArrays; i++)
    {
        arr1[i] = arr2[i]; 
    }
}

int charArrCompare(char arr1[], char arr2[], size_t sizeOfArrays)
{
    for (size_t i = 0; i < sizeOfArrays; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return 0;
        }
    }
    return 1;
}

void charArrSetValue(char arr[], size_t sizeOfArrays, char value)
{
    for (size_t i = 0; i < sizeOfArrays; i++)
    {
        arr[i] = value;
    }
}

void charArrSwap(char arr1[], char arr2[], size_t sizeOfArrays)
{
    for (size_t i = 0; i < sizeOfArrays; i++)
    {
        char temp = arr1[i];
        arr1[i] = arr2[i]; 
        arr2[i] = temp; 
    }
}

void copyFile(FILE* sourceFile, FILE* destFile)
{
    char c = fgetc(sourceFile);
    while (c != EOF)
    {
        fputc(c, destFile);
        c = fgetc(sourceFile);
    }
}

int main()
{
    //1
    // int num = 10;
    // add(&num, 2);
    // printf("%d\n", num);

    //2
    // int num1 = 6;
    // int num2 = 3;
    // swap(&num1, &num2);
    // printf("%d, %d\n", num1, num2); 

    //3
    // struct Rectangle rec;
    // intializeRect(&rec, 3, 5);
    // printf("%lf, %lf\n", rec.width, rec.height);

    //4 + //5
    // int arr[6];
    // size_t sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    // fillArrayWithFibo(arr, sizeOfArray);
    // printArr(arr, sizeOfArray);

    //6
    // struct Rectangle rec1 = {5, 6};
    // struct Rectangle rec2 = {3, 4};
    // Rectangle rectArr[] = {rec1, rec2};
    // size_t sizeOfArray = sizeof(rectArr) / sizeof(rectArr[0]);
    // printRectArr(rectArr, sizeOfArray);

    //7
    // char arr1[] = "Hello";
    // size_t sizeOfArray = sizeof(arr1) / sizeof(arr1[0]);
    // char arr2[6];

    //a
    //charArrCopy(arr2, arr1, sizeOfArray);
    // for (size_t i = 0; i < sizeOfArray; i++)
    // {
    //     printf("%c", arr2[i]);
    // }
    // printf("\n");

    //b
    //printf("%d\n", charArrCompare(arr1, arr2, sizeOfArray));

    //c
    // charArrSetValue(arr1, sizeOfArray, '6');
    // for (size_t i = 0; i < sizeOfArray; i++)
    // {
    //     printf("%c", arr1[i]);
    // }
    // printf("\n");

    //d
    // int arr1[] = {6,5,4,3,2,1};
    // size_t sizeOfArray = sizeof(arr1) / sizeof(arr1[0]);
    // int arr2[6];
    // charArrCopy(arr2, arr1, sizeof(arr1));
    // for (size_t i = 0; i < sizeOfArray; i++)
    // {
    //     printf("%d ", arr2[i]);
    // }
    // printf("\n");

    // struct Rectangle rec1 = {5, 6};
    // struct Rectangle rec2 = {3, 4};
    // Rectangle rectArr1[] = {rec1, rec2};
    // Rectangle rectArr2[2];
    // size_t sizeOfArray = sizeof(rectArr1) / sizeof(rectArr1[0]);
    // charArrCopy(rectArr2, rectArr1, sizeof(rectArr1));
    // printRectArr(rectArr2, sizeOfArray);

    //e
    // char arr1[] = "Hello";
    // char arr2[] = "Byeee";
    // size_t sizeOfArray = sizeof(arr1) / sizeof(arr1[0]);
    // charArrSwap(arr2, arr1, sizeOfArray);
    // for (size_t i = 0; i < sizeOfArray; i++)
    // {
    //     printf("%c", arr1[i]);
    // }
    // printf("\n");
    // for (size_t i = 0; i < sizeOfArray; i++)
    // {
    //     printf("%c", arr2[i]);
    // }
    // printf("\n");

    //f
    // char arr[] = "aaabbb";
    // size_t sizeOfHalfArray = sizeof(arr) / sizeof(arr[0]) / 2;
    // charArrSwap(arr, arr + sizeOfHalfArray, sizeOfHalfArray);
    // for (size_t i = 0; i < sizeOfHalfArray; i++)
    // {
    //     printf("%c", arr[i]);
    // }
    // printf("\n");
    // for (size_t i = sizeOfHalfArray; i < sizeOfHalfArray * 2; i++)
    // {
    //     printf("%c", arr[i]);
    // }
    // printf("\n");

    //8
    FILE* sourceFile = fopen("source.txt", "r");
    FILE* destFile = fopen("dest.txt", "w");
    if (sourceFile != NULL && destFile != NULL)
    {
        copyFile(sourceFile, destFile);
        fclose(sourceFile);
        fclose(destFile);
    }


    return 0;
}
