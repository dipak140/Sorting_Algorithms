
# 🧠 Sorting Algorithms Collection

This repository aims to combine all (_eventually_) **sorting algorithms** into one piece of code as a quick refresher for beginners and experts. It also measures the **time** taken by each sorting algorithm function.


## 📜 Implemented Sorting Algorithms:

### 1. 🟨 Selection Sort  
**Time Complexity:**  
- Average: O(n²)  
- Worst: O(n²)  

**Description:**  
Loops through the list while constantly moving the smallest value in the unsorted part to the end of the sorted part.  


[![Watch Video](https://img.shields.io/badge/Watch%20Video-%F0%9F%93%BA-blue?logo=youtube)](https://youtu.be/kPRA0W1kECg?t=0)


---

### 2. 🟩 Insertion Sort  
**Time Complexity:**  
- Average: O(n²)  
- Worst: O(n²)  

**Description:**  
Loops through the list and moves each element value down into the correct location of the currently sorted part.  


[![Watch Video](https://img.shields.io/badge/Watch%20Video-%F0%9F%93%BA-blue?logo=youtube)](https://youtu.be/kPRA0W1kECg?t=10)


---

### 3. 🟥 Bubble Sort  
**Time Complexity:**  
- Average: O(n²)  
- Worst: O(n²)  

**Description:**  
Loops through the list and repeatedly compares adjacent elements and swaps them if needed.


[![Watch Video](https://img.shields.io/badge/Watch%20Video-%F0%9F%93%BA-blue?logo=youtube)](https://youtu.be/kPRA0W1kECg?t=240)


---

### 4. 🟦 Quick Sort  
**Time Complexity:**  
- Average: O(n log n)  
- Worst: O(n²)  

**Description:**  
Paritions array into two based off of a pivot index. One holds values less than pivot, the other holds values higher than pivot. Then recursively sorts the two arrays. 


[![Watch Video](https://img.shields.io/badge/Watch%20Video-%F0%9F%93%BA-blue?logo=youtube)](https://youtu.be/kPRA0W1kECg?t=40)


---


## 🔧 How to Build & Run

### 🐧 Linux / 🍎 macOS  
Use the following command in your terminal:

```bash
g++ sortOfAllSort.cpp -o sortOfAllSort && ./sortOfAllSort
```

#### 💡 Note: Make sure g++ is installed.

 - On Ubuntu/Debian: ```bash sudo apt install g++ ```

 - On macOS (with Homebrew): ```bash brew install gcc ```

---

---

### 🪟 Windows

#### Option 1: Using Visual Studio  
 - Open `sortOfAllSort.cpp` in Visual Studio.

 - Use the build and run buttons to compile and execute.

---

#### Option 2: Using g++ (MinGW or WSL)

 - If you have `g++` installed (e.g., via [MinGW](http://www.mingw.org/) or Windows Subsystem for Linux), run the following in Command Prompt, PowerShell, or WSL:

```bash
g++ sortOfAllSort.cpp -o sortOfAllSort && sortOfAllSort
```
💡 Tip: Ensure g++ is in your system's PATH.
You can check with ```bash g++ --version ``` in your terminal.