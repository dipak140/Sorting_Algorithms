# Sorting_Algorithms
This repository aims to combine all (eventually) sorting algorithms into one piece of code as a quick refresher for beginners and experts. It also measures the time taken by each sorting algorithm function.

To begin with, the following sorting algorithms have already been added, and more can be added.
1. Selection Sort - (Average: O(n<sup>2</sup>), Worst: Average: O(n<sup>2</sup>))
   - Loops through the list while constantly moving the smallest value in the unsorted part to the end of the sorted part.
   - https://youtu.be/kPRA0W1kECg?t=0
2. Insertion Sort - (Average: O(n<sup>2</sup>), Worst: Average: O(n<sup>2</sup>))
   - Loops through the list and moves each element value down into the correct location of the currently sorted part.
   - https://youtu.be/kPRA0W1kECg?t=10
3. Bubble Sort - (Average: O(n<sup>2</sup>), Worst: Average: O(n<sup>2</sup>))
   - Loops through the list and repeatedly compares adjacent elements and swaps them if needed.
   - https://youtu.be/kPRA0W1kECg?t=240
4. Quick Sort - (Average: O(nlogn), Worst: Average: O(n<sup>2</sup>))
   - Paritions array into two based off of a pivot index. One holds values less than pivot, the other holds values higher than pivot. Then recursively sorts the two arrays.
   - https://youtu.be/kPRA0W1kECg?t=40

## How to Build/Run?
On Linux/Mac, use `g++ sortOfAllSort.cpp -o sortOfAllSort && .\sortOfAllSort`
On Windows, use Visual Studio to run the file. Alternatively, install g++ and use the above command.

## How to Use?
To start, enter the size of numbers you will be adding.
Once done, start entering the numbers one by one.
NOTE: When sorting, the list is not guranteed to be in the order you input the numbers in.