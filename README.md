# Linear Search Program
## Description
*Linear Search is a simple search algorithm used to find the position of a target element (key) in a list or array. It checks each element sequentially until it finds the target or reaches the end of the list.*


*This program demonstrates how to implement Linear Search in C++.*


## Features

*Input any size of array.*

*Search for a specific key element.*

*Returns the position(s) of the key if found.*

*Handles cases where the key is not present in the array.*



## How It Works (Step-by-Step / Logic Structure)


*1) Input array size and elements.*

*2) Input key to search.*

*3) Initialize count = 0.*

*4) Loop through the array:*

*If a[i] == key, increase count by 1.*


*5) After loop:*

*If count == 0 → key not found.*

*Else → print how many times key is found.*


## Advantages

*Simple and easy to implement.*

*Works on unsorted arrays.*

## Disadvantages

*Inefficient for large arrays (O(n) time complexity).*

*Not suitable for sorted arrays where binary search would be faster.*

## Time Complexity

*Best Case: O(1) — Key found at the first position.*

*Worst Case: O(n) — Key is at the last position or not present.*

*Average Case: O(n)*




