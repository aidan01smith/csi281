//
//  sort.h
//
//  Functions for bubble sort, selection sort, and insertion sort.
//  You SHOULD modify this file.
//
//  Copyright 2019 David Kopec
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation files
//  (the "Software"), to deal in the Software without restriction,
//  including without limitation the rights to use, copy, modify, merge,
//  publish, distribute, sublicense, and/or sell copies of the Software,
//  and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice
//  shall be included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
//  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
//  OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
//  ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.

#ifndef sort_hpp
#define sort_hpp

#include <algorithm>  // for swap()
#include <vector> // for sort() --> used for testing purposes but didn't actually end up implementing anything with it oops

#include "MemoryLeakDetector.h"

using namespace std;

namespace csi281 {

  // Performs an in-place ascending sort of *array* of size *length*
  // using the bubble sort algorithm
  template <typename T> void bubbleSort(T array[], const int length) {
    // make and apply the bubble sort algorithm

    for (int i = 0; i < length - 1; i++) {

      for (int j = 0; j < length - 1; j++) {


        //parsing through the array and using swap to make sure the information is correct
        // not using swapped becasue it seems a litte redundant in this instance with the template
        if (array[j] > array[j + 1]) {

          swap (array[j], array[j + 1]);
        
        }
      }

    }
  }

  // Performs an in-place ascending sort of *array* of size *length*
  // using the selection sort algorithm
  template <typename T> void selectionSort(T array[], const int length) {
    
    // selection sort algroithm implementation
    // same begining for loop as the bubble sort

    for (int i = 0; i < length - 1; i++) {
      
      // using geeksforgeeks.org as a reference, we assume the current possition
      // holds the minimum element
      int minimunIndex = 1;

      // we then have to go through all the data
      for (int j = i + 1; j < n; j++) {

        if (array[j] < array[minimunIndex]) {
          minimunIndex = j;
        }
      }

      // this doesn't pass the tests without the if statement for some reason lol
      if (minimunIndex != i) {
        swap (array[i], array[minimunIndex]);
      }

    }

  }

  // Performs an in-place ascending sort of *array* of size *length*
  // using the insertion sort algorithm
  template <typename T> void insertionSort(T array[], const int length) {
    
    // last sorting algorithm is the insertion sort algorithm 
    
    for (int i = 1; i < n; i++) {

      T k = array[i]; //suplemented as the key

      int j = i - 1;
    
    // move the greater positions to one ahead of their current position

      while (j >= 0 && arr[j] > k) {

        array[j + 1] = array[j];
        j = j - 1;
      }

      array[j + 1] = k;
    }

  }
}  // namespace csi281

#endif /* sort_hpp */
