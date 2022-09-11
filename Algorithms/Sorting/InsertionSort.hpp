//
//  InsertionSort.hpp
//  Algorithms
//
//  Created by Egor Zhelagin on 07.09.2022.
//

#ifndef InsertionSort_hpp
#define InsertionSort_hpp

#include <stdio.h>

template<class type> void insertSort(type *arr, int size){
    for (int j = 1; j < size; ++j){
        type key = arr[j];
        int i = j - 1;
        while (i >= 0 && arr[i] > key){
            arr[i+1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
    }
}

template<class type> void selectionSort(type *arr, int size){
    for (int i = 0; i < size; ++i){
        
        for(int j = 1; j < size - 1; ++j){
            
        }
    }
}

#endif /* InsertionSort_hpp */

