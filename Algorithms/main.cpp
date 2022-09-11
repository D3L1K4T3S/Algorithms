#include <iostream>
#include "Sorting/InsertionSort.hpp"

int* summator(int *A, int *B, int size);
void reverse(int *A, int size);

int main(int argc, const char * argv[]) {
    
    int size = 20;
    int *arr = new int[size];
    for (int index = 0; index < size; ++index) {
        arr[index] = sizeof(arr) - index;
    }
    
    for(int i = 0; i < size; ++i)
        std::cout << i << " = " << arr[i] << std::endl;
    
    std::cout << std::endl;
    
    insertSort(arr,size);
    
    for(int i = 0; i < size; ++i)
        std::cout << i << " = " << arr[i] << std::endl;
    
    std::cout << std::endl;
    
    for(int i = 0; i < size; ++i)
        std::cout << i << " = " << arr[i] << std::endl;
    
    for(int i = size - 1; i >= 0; --i)
        std::cout << arr[i] << " ";
    
    size = 4;
    
    int *A = new int[size];
    int *B = new int[size];
    
    std::cout<<std::endl;
    for(int i = 0; i < size; ++i)
        std::cin >> A[i];
    std::cout<<std::endl;
    for(int i = 0; i < size; ++i)
        std::cin >> B[i];
    std::cout<<std::endl;
    int *C = summator(A, B, 4);
    
    std::cout<<std::endl << 0 << " ";
    for(int i = 0; i < size; ++i)
        std::cout << A[i] << " ";
    std::cout<<std::endl << 0 << " ";
    for(int i = 0; i < size; ++i)
        std::cout << B[i] << " ";
    std::cout<<std::endl;
    for(int i = 0; i < size + 1; ++i)
        std::cout << C[i] << " ";
    

    
    return 0;
}

void reverse(int *A, int size){
    for(int index = 0; index < size/2; ++index){
        int temp = A[index];
        A[index] = A[size-index-1];
        A[size-index-1] = temp;
    }
}


template <class type> bool search (type *arr, int size, type v){
    for (int index = 0; index < size; ++index)
        if (v == arr[index])
            return true;
    return false;
}

int* addition(int *A, int *B, int size){
    int *C = new int[size + 1];
    int buffer = 0;
    
    for (int i = size - 1; i >= 0 ; --i){
        int sum = A[i] + B[i] + buffer;
        if (sum > 1)
            buffer = 1;
        else
            buffer = 0;
        C[i+1] = sum % 2;
    }
    if(buffer == 1)
        C[0] = 1;
    
    return C;
}

