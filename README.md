# codeforces
The folder for me to keep codes for **codeforces** practices.

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

