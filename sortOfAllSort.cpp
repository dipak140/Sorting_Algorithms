#include<iostream>
#include<bits/stdc++.h>
#include<time.h>
#include<chrono>

using namespace std;
using namespace std::chrono;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void bubbleSort(int A[],int n){
	for(int k = 1; k < n; k++){
		int flag = 0;
		for(int i=0;i<n-k;i++){
			if(A[i] > A[i+1]){
				int temp;
				temp  = A[i];
				A[i] = A[i+1];
				A[i+1] = temp;
				flag = 1;
			}
		if(flag == 0){
			break;
		}
		}	
	}
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
}
void selectionSort(int A[],int n)
{	
	for(int i= 0;i<n-1;i++){
		int min = i;
		for(int j = i+1 ; j <n ; j++){
			if(A[j] < A[min]){
				min = j;
			}
		}
		swap(&A[i], &A[min]);
	}	
		for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
}

void insertionSort(int A[], int n){
	for(int i= 1 ;i<n;i++){
		for(int j = i;j!=0;j--){
			if(A[j]<A[j-1]){
				int temp;
				temp  = A[j];
				A[j] = A[j-1];
				A[j-1] = temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
}

void randomize(int arr[], int n){
	srand(time(NULL));
	for(int i=n-1;i>0;i--){
		int j = rand() % (i+1);
		swap(&arr[i], &arr[j]);
		
	}
}
int main(){
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	
	auto start = high_resolution_clock::now();
	selectionSort(A,n);
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout<<"The time for Selection Sort " << duration.count()<<" microseconds\n";
	randomize(A,n);
	for(int i=0;i < n; i++){
		cout<<A[i]<<" ";
	}
	cout<<"\n";
	auto start1 = high_resolution_clock::now();
	insertionSort(A,n);
	auto stop1 = high_resolution_clock::now();	
	auto duration1 = duration_cast<microseconds>(stop1 - start1);	
	cout<<"The time for Insertion Sort " << duration1.count()<<" microseconds\n";
	
	auto start2 = high_resolution_clock::now();
	bubbleSort(A,n);
	auto stop2 = high_resolution_clock::now();	
	auto duration1 = duration_cast<microseconds>(stop2 - start2);	
	cout<<"The time for Bubble Sort " << duration1.count()<<" microseconds\n";
	
	return 0;
} 
