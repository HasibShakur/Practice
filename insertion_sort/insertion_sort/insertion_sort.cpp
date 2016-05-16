// insertion_sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

#define ARR_SIZE 6

int * insertion_sort(int arr[], int n)
{
    int key, i;
    for (int j = 1; j < n; j++)
    {
        key = arr[j];
        i = j - 1;
        while (i > -1 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i+1] = key;
    }
    return arr;
}

int _tmain(int argc, _TCHAR* argv[])
{
    int unsorted_arr[ARR_SIZE] = { 31, 41, 59, 26, 41, 58 };
    int sorted_arr[ARR_SIZE] = {0};
    insertion_sort(unsorted_arr, ARR_SIZE);
    memcpy_s(sorted_arr, sizeof(sorted_arr), unsorted_arr, sizeof(unsorted_arr));
    for (int i = 0; i < ARR_SIZE; i++)
    {
        cout << sorted_arr[i] << endl;
    }
	 return 0;
}

