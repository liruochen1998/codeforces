# codeforces
The folder for me to keep codes for **codeforces** practices.
## Round 489 (Div.2)
### A. Nastya and an Array
2018-06-19 11:55:17  
`implementation` `math`   
the number of the unique numbers (don't count 0) is the answer. 


## Round 488 (Div.2)
### A. Fingerprints
2018-06-19 09:32:46(UTC)  
`implementation`  
flag every fingerprints in a bool array and check in the sequence one by one.

### B. Knights of a Polygonal Table
2018-06-19 11:12:40(UTC)  
`greddy` `implementation` `sortings`  
keywords: multiset || vector, sorting with struct, long long int.


## Round 487 (Div.2)

## Educational Round 45 (Div.2)
### A. Commentary Boxes
Notice that you need to check just two numbers: the closest one less or equal to n and the closest one greater than n. Distances to them are (n mod m) and (m − (n mod m)) respectively. Now you should multiply the first result by b, the second result by a and compare the products.

Overall complexity: O(1).  
### B. Micro-World
It can be proved that the optimal answer equals to a number of bacteria which can't be eaten by any other bacteria. So for each bacteria i you need to check existence of any bacteria j satisfying condition ai<aj≤ai+K.

There plenty of ways to check this condition. One of them is to sort array a and for each i find minimal aj>ai with upper_bound or with two-pointers technique. Or you can use the fact that ai≤10^6 and build solution around it.

Result complexity is O(nlogn).


## Round 486 (Div.3)
### A. Diverse Team
3:55 PM 6/15/2018  
`brute force` `implementation`  
Simply implement, following the topic.

### B. Substrings Sort

