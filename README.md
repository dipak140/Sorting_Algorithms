# Sorting_Algorithms
This repository aims to combine all(eventually) sorting algorithms into one piece of code as a quick refresh for beginners and experts. It also measure the time taken by each sorting algorithm function.
To begin with, the following sorting algorithms have already been added, and more can be added.
1. Selection Sort
    - Repeatedly selects the minimum element from the unsorted part of the array and places it at the beginning. It does this for each element in the array.
    - **Time Complexity (Big O):** O(n^2)
2. Insertion Sort
    - Builds the final sorted array one item at a time. It takes each element and inserts it into its correct position within the already sorted part of the array.
    - **Time Complexity (Big O):** O(n^2)
3. Merge Sort
    - Divides the array into two halves, recursively sorts each half, and then merges the sorted halves back together. It follows the divide and conquer approach.
    - **Time Complexity (Big O):** O(n log n)
4. Bubble Sort
    - Repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the entire list is sorted.
    - **Time Complexity (Big O):** O(n^2)
5. Quick Sort
    - Picks a "pivot" element and partitions the array into two sub-arrays: elements less than the pivot and elements greater than the pivot. It then recursively sorts the sub-arrays.
    - **Time Complexity (Big O):** O(n log n) on average, but O(n^2) in the worst case.