Insertion Sort Performance Analysis

This repository contains a C++ program that analyzes the performance of the Insertion Sort algorithm by measuring the average time taken to sort arrays of different sizes.

Table of Contents:
-------------------
1. Description
2. Getting Started
3. How It Works
4. Running the Program
5. Results

Description:
-------------
This C++ program implements the Insertion Sort algorithm and measures its execution time for arrays of various sizes. The program runs the sorting algorithm multiple times (10,000 repetitions) to obtain an average sorting time, which helps in understanding the algorithm's performance in worst-case scenarios.

Features:
- Sorts arrays of sizes 5, 10, 50, and 100 elements.
- Measures the time taken to sort these arrays using Insertion Sort.
- Outputs the average sorting time in microseconds.

Getting Started:
----------------
To run this code on your local machine using Dev C++, follow these steps:

Prerequisites:
--------------
- Dev C++ IDE installed on your computer (you can download it from: https://sourceforge.net/projects/orwelldevcpp/).
- Basic knowledge of how to compile and run C++ programs in Dev C++.

How It Works:
-------------
1. Insertion Sort Implementation: The `insertionSort` function implements the Insertion Sort algorithm to sort an array of integers.

2. Average Time Calculation: The `averageTime` function runs the sorting algorithm 10,000 times on a copy of the input array to calculate the average execution time for sorting the array.

3. Test Arrays: The program tests the sorting algorithm with arrays of 5, 10, 50, and 100 elements, each sorted in descending order to simulate a worst-case scenario.

4. Output: The program outputs the average sorting time in microseconds for each test array.

Running the Program:
-------------------
Step 1: Open Dev C++
- Launch Dev C++ on your computer.

Step 2: Create a New Project
- Go to File → New → Project.
- Choose Console Application and select C++ as the language.
- Name your project and save it in a desired location.

Step 3: Copy the Code
- Replace the default main file code in Dev C++ with the provided code.
- Save the file.

Step 4: Compile the Code
- To compile the code, go to Execute → Compile or press F9. This will build the project.

Step 5: Run the Program
- After compiling, run the program by going to Execute → Run or press Ctrl + F10.

Output:
-------
You should see output similar to the following:

Insertion Sort Average Times (10000 runs):
Arr1 (5):    2.30 us
Arr2 (10):   5.12 us
Arr3 (50):   8.45 us
Arr4 (100):  20.62 us

This output shows the average time taken (in microseconds) to sort each array using the Insertion Sort algorithm.

Results:
--------
The program helps to understand how the performance of the Insertion Sort algorithm changes with the size of the array. Insertion Sort is inefficient for large datasets, and this program demonstrates the increasing time complexity as the array size grows.

Feel free to modify the array sizes or the number of repetitions for different performance measurements.

