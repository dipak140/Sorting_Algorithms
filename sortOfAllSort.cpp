#include <iostream>
#include <bits/stdc++.h>
#include <time.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Prints array upto (n - 1) index.
void print(int A[], int n) { 
	for(int i = 0; i < n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;
}

// Swap's value of two integer pointers.
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Loops n times and compares adjacent elements.
// If the comparison has a higher value on left, a swap is performed.
void bubbleSort(int A[],int n) {
	// Loop n times
	for(int k = 1; k < n; k++) {
		// Flag tracks if no swaps are made in the upcoming loop
		int flag = 0;

		for(int i = 0; i < n - k; i++) {
			// Swap if comparison is unordered
			if(A[i] > A[i + 1]) {
				swap(&A[i], &A[i + 1]);
				// Swap done, so mark flag 
				flag = true;
			}

			// Flag of 0 means no swaps, which means list is already sorted
			if(flag == 0) {
				break;
			}
		}	
	}

	// Print sorted array
	print(A, n);
}

// Loops n times and moves smallest value to the beginning (of unsorted part).
// Challenge: Add a flag that accomplishes the same goal as in bubbleSort
void selectionSort(int A[],int n) {	
	for(int i = 0; i < n - 1; i++) {
		// Holds the index of the minimum value
		int min_index = i;

		// Loops through unsorted part and update min_index
		for(int j = i + 1; j < n; j++) {
			if(A[j] < A[min_index]) {
				min_index = j;
			}
		}

		// Loop is done, so swap the min_index value with the one at the start (of the unsorted part)
		swap(&A[i], &A[min_index]);
	}	
	
	// Print sorted array
	print(A, n);
}

// Loops n times and moves current loop-iteration's value down to the correct location.
void insertionSort(int A[], int n) {
	for(int i = 1; i < n; i++) {
		// Move the current value through sorted values into correct location.
		for(int j = i; j != 0; j--) {
			// Sorted value is higher than selected value, so swap
			if(A[j] < A[j - 1]) {
				swap(&A[j], &A[j - 1]);
			}
			// Since sorted value is lower (or equal), break because correct location reached.
			else {
				break;
			}
		}
	}

	// Print sorted array
	print(A, n);
}


int partition(int A[], int begin, int end) {
	int pivot = A[end];
	int index = begin;
	
	for(int i = begin; i < end; i++) {
		if(A[i] <= pivot) {
			swap(&A[i], &A[index]);
			index++;
		}
	}
	
	swap(&A[end], &A[index]);

	return index;
}

// Paritions array into two based off of a pivot index. One holds values less than pivot,
// the other holds values higher than pivot. Then recursively sorts the two arrays.
void quickSort(int *arr, int begin, int end) {
	int index;

	if(begin < end) {
		index = partition(arr, begin, end);
		quickSort(arr, begin, index - 1);
		quickSort(arr, index + 1, end);
	}
}

// Randomly swaps elements in array.
void randomize(int arr[], int n) {
	srand(time(NULL));
	for(int i = n - 1; i > 0; i--) {
		int j = rand() % (i + 1);
		swap(&arr[i], &arr[j]);
	}
}

int main() {
	// Read number of elements.
	int n;
	cin >> n;

	// Array for holding values.
	int A[n];

	// Read elements into both arrays
	for(int i = 0; i < n; i++) {
		cin >> A[i];
	}

	// Selection Sort
	auto start_ss = high_resolution_clock::now();	// Start time
	selectionSort(A, n);
	auto stop_ss = high_resolution_clock::now();	// End time
	auto duration_ss = duration_cast<microseconds>(stop_ss - start_ss);
	cout << "The time for Selection Sort " << duration_ss.count() << " microseconds\n";

	// Randomize and print array
	randomize(A, n);
	print(A, n);
	
	// Insertion Sort
	auto start_is = high_resolution_clock::now();
	insertionSort(A, n);
	auto stop_is = high_resolution_clock::now();	
	auto duration_is = duration_cast<microseconds>(stop_is - start_is);	
	cout << "The time for Insertion Sort " << duration1.count() << " microseconds\n";
	
	// Randomize and print array
	randomize(A, n);
	print(A, n);

	auto start_bs = high_resolution_clock::now();
	bubbleSort(A, n);
	auto stop_bs = high_resolution_clock::now();	
	auto duration_bs = duration_cast<microseconds>(stop_bs - start_bs);	
	cout << "The time for Bubble Sort " << duration_bs.count() << " microseconds\n";

	// Randomize and print array
	randomize(A, n);
	print(A, n);

	// Quick Sort
	auto start_qs = high_resolution_clock::now();
	quickSort(A, 0, n - 1);
	auto stop_qs = high_resolution_clock::now();
	auto duration_qs = duration_cast<microseconds>(stop_qs - start_qs);
	print(A, n);
	cout << "The time for Quick Sort " << duration_qs.count() << " microseconds\n";
	
	return 0;
} 
