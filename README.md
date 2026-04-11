 ADA Lab Programs

This repository contains all my Analysis and Design of Algorithms (ADA) lab programs.

Name: Ria Singh
 Branch: CSE
 roll no.- UEM243137
 Semester: 4th

 Aim
To implement and understand various algorithms as part of ADA lab.

1. Tower of Hanoi

Aim:
To solve the Tower of Hanoi problem using recursion.

Algorithm:

1. Move n-1 disks from source to auxiliary.
2. Move nth disk to destination.
3. Move n-1 disks from auxiliary to destination.

Time Complexity:
O(2^n)

 2. Binary Search

Aim:
To search an element in a sorted array using binary search.

Algorithm:

1. Find middle element.
2. Compare with key.
3. Search left or right accordingly.

Time Complexity:
O(log n)

 3. Linear Search 

Aim:
To search an element using linear search.

Algorithm:

1. Traverse array element by element.
2. Compare each with key.
3. Return position if found.

Time Complexity:
O(n)

 4. Bubble Sort

Aim:
To sort elements using bubble sort.

Algorithm:

1. Compare adjacent elements.
2. Swap if needed.
3. Repeat until sorted.

Time Complexity:
O(n^2)

 5. Insertion Sort 

Aim:
To sort elements using insertion sort.

Algorithm:

1. Take one element at a time.
2. Insert into correct position in sorted part.

Time Complexity:
O(n^2)

 6. Selection Sort

Aim:
To sort elements using selection sort.

Algorithm:

1. Find minimum element.
2. Swap with current position.
3. Repeat for all elements.

Time Complexity:
O(n^2)

 7. Merge Sort

Aim:
To sort elements using divide and conquer.

Algorithm:

1. Divide array into halves.
2. Recursively sort both halves.
3. Merge sorted halves.

Time Complexity:
O(n log n)

 8. Quick Sort 

Aim:
To sort elements using quick sort.

Algorithm:

1. Choose pivot.
2. Partition array.
3. Recursively sort partitions.

Time Complexity:
O(n log n) average

 9. Partition Algorithm 

Aim:
To partition array around a pivot element.

Algorithm:

1. Choose pivot.
2. Place smaller elements before pivot.
3. Place larger elements after pivot.

Time Complexity:
O(n)

 10. Power 

Aim:
To calculate power of a number using recursion.

Algorithm:

1. If exponent is 0, return 1.
2. Else multiply base with recursive call.

Time Complexity:
O(n)

 11. Horner’s Method (horner.cpp)

Aim:
To evaluate polynomial using Horner’s rule.

Algorithm:

1. Start from highest degree.
2. Multiply and add coefficients iteratively.

Time Complexity:
O(n)

 12. First Duplicate Eleeement
Aim:
To find first duplicate element in an array.

Algorithm:

1. Traverse array.
2. Track visited elements.
3. Return first repeating element.

Time Complexity:
O(n)

 13. String Permutation

Aim:
To generate all permutations of a string.

Algorithm:

1. Fix one character.
2. Permute remaining characters recursively.

Time Complexity:
O(n!)


 14. Truth Table 

Aim:
To generate truth table for logical expressions.

Algorithm:

1. Generate all combinations of inputs.
2. Evaluate logical expression.
3. Display results.

Time Complexity:
O(2^n)

15. Velocity (velocity.cpp)

Aim:
To calculate velocity using different motion formulas.

Algorithm:

1. Take required inputs (distance, time, acceleration, initial velocity, final velocity).
2. Calculate velocity using:

    v = distance / time
    v = u + at
    v^2 = u^2 + 2as 
3. Display the result.
   Time Complexity:
O(1)

16. prims algorithm

Aim:
to make mst from a graphh. 

Algorithm :
1. the data structures used are-
  an array to store which vertex i will connect to mst- key[] , an array to store which vertex will connect to i- parent[], an array to keep track of what is added to the mst- mst[] and finally an adjecency matrix.
2. we pick the minimum wt vertex and add it to mst.
* this algorithm can also be implemented using a min heap ( gives better time complexity that is O(E log V)

  time complexity-
  O(V^2)

17. fractional knapsack problem
 
 Aim:
To implement the Fractional Knapsack Problem using a greedy approach to maximize total profit within a given capacity.

Algorithm:
1. calculate ratio -> profit[i]/ weight[i]for each item.
2. sort the ratio in non- increasing order.
3. initialize the max_profit=0.
4. if wt of item is less than or equal to capacity of knapsack, take full item, else take fraction and stop.
5. return max_profit.

time complexity-
O(n log n) is for sorting, O(n) for selecting item-> O(nlogn).

18.Kruskal's algorithm-

aim- To find the Minimum Spanning Tree (MST) of a weighted graph.

algorithm- 
Sort all edges in increasing order of weight.
Initialize each vertex as a separate set (using Disjoint Set / Union-Find).
Pick the smallest edge.
If it forms a cycle then reject
Else include in MST.
Perform union of the sets.
Repeat till MST has (V - 1) edges.

time complexity- 
Sorting edges
Using Merge Sort:
𝑂(𝐸logE)
Union-Find operations:
find + union
With path compression:
O(ElogV)
therefore, O(E log E)

19. cycle detection(undirected)-

aim-
To detect cycle in an undirected graph.

algorithm-
Use visited[]
Pass parent in DFS
For each neighbor:
If not visited → DFS
If visited and not parent → cycle.

time complexity-
adj list->O(V+E)
adj matrix-> O(V^2)

20. cycle detection(directed)-

Aim-
To detect cycle in a directed graph.

algorithm-
Use visited[] and path[]
Mark node visited and in path
For each neighbor:
If not visited → DFS
If in path → cycle
Remove node from path.

time complexity-
adj list->O(V+E)
adj matrix-> O(V^2)
