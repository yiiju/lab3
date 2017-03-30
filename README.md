make main

size:1000
sort(): 0.000239 seconds
v1/v2 are different.
insertion_sort(): 0.009587 seconds
v1/v2 are the same.

size:10000
sort(): 0.003799 seconds
v1/v2 are different.
insertion_sort(): 0.994819 seconds
v1/v2 are the same.

size:100000
sort(): 0.038166 seconds
v1/v2 are different.
insertion_sort(): 104.325 seconds
v1/v2 are the same.

size:1000000
sort(): 0.550458 seconds
v1/v2 are different.
insertion_sort(): 10348.9 seconds
v1/v2 are the same.

The time complexity by using sort() is the best way between O(n log n) and O(n^2).

Insertion_sort() is divided the data into two parts,one is sorted and the other is unsorted,and the sorted is before the unsorted.
Using for loop to compare the first one in the unsorted sequence with the sorted sequence one by one from right to left.
If the unsorted first one is smaller than the sorted one, shifted the sorted one to the right.
If the unsorted first one is bigger than the sorted one, inserted the unsorted one into the place.
So, the time complexity by using insertion_sort() is O(n^2).
