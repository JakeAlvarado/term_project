//this will be where we test each sorting algotihtm that is in our .h fiile
#include <iostream>
#include <ctime>
#include "sort.h"

int max_number = 100;
int size = 10;

void set_rand(int *arr, int n); 
void print_arr(int *arr, int n);


int main() { 

    int arr[size];

    set_rand(arr, size);

    // CALL YOUR FUNCION HERE

    print_arr(arr, size);

    return 1;
}

void set_rand(int *arr, int n) {

    srand((unsigned)time(0));

    for (int i=0; i<n; i++) {
        arr[i] = rand()%(max_number+1);
    }
}


void print_arr(int *arr, int n) {

    std::cout << "{";
    for (int i=0; i<n; i++) {
        printf("%d, ", arr[i]);
    }
    std::cout<< "}" <<std::endl;
}