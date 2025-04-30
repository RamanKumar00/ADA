# ADA  
# C++ Algorithms and Data Structures Collection  

Welcome to this repository, which showcases a variety of algorithm and data structure implementations written in C++. This collection is organized into different algorithmic paradigms to help you find relevant solutions quickly and understand how classic algorithms work.

---

##  Sorting Techniques  
Implementations of fundamental sorting algorithms:

- **Selection Sort**  
  Selects the smallest element from the unsorted part and swaps it with the first unsorted element.  
  **Time Complexity:** O(n²)

- **Bubble Sort**  
  Repeatedly compares adjacent elements and swaps them if they are in the wrong order.  
  **Time Complexity:** O(n²)

- **Insertion Sort**  
  Builds the sorted list one item at a time by comparing it to elements on its left.  
  **Time Complexity:** O(n²), Best Case: O(n)

- **Merge Sort**  
  A divide-and-conquer algorithm that splits the array, sorts each half, and merges them.  
  **Time Complexity:** O(n log n)

- **Quick Sort (Recursive)**  
  Picks a pivot element, partitions the array, and recursively sorts the subarrays.  
  **Time Complexity:** Average: O(n log n), Worst: O(n²)

- **Quick Sort (Iterative)**  
  An iterative approach using an explicit stack instead of recursion.  
  **Time Complexity:** Average: O(n log n), Worst: O(n²)

---

##  Mathematical and Miscellaneous Algorithms  
Various utilities and computations:

- **Find Peak in 1D Array**  
  Finds a peak element which is not smaller than its neighbors.  
  **Time Complexity:** O(log n)

- **Magic Square Generator**  
  Generates a magic square of odd order where sums of rows, columns, and diagonals are equal.  
  **Time Complexity:** O(n²)

- **Cosine Similarity Calculation**  
  Measures similarity between two non-zero vectors using cosine of the angle between them.  
  **Time Complexity:** O(n)

---

## 🧩 Divide & Conquer Strategies  
Recursive solutions leveraging the divide and conquer paradigm:

- **Binary Search**  
  Searches a sorted array by repeatedly dividing the search interval in half.  
  **Time Complexity:** O(log n)

- **Max-Min Finder**  
  Finds the maximum and minimum elements in an array using fewer comparisons via divide and conquer.  
  **Time Complexity:** O(n)

- **Strassen's Matrix Multiplication**  
  A fast matrix multiplication algorithm that reduces complexity by dividing matrices.  
  **Time Complexity:** O(n^log₂7) ≈ O(n^2.81)

---

##  Greedy Algorithm Examples  
Greedy methods for optimization problems:

- **Activity Selection Problem**  
  Selects the maximum number of non-overlapping activities that can be performed.  
  **Time Complexity:** O(n log n)

- **Greedy Knapsack Approach**  
  Solves the fractional knapsack problem by picking items with the highest value/weight ratio.  
  **Time Complexity:** O(n log n)

- **Dijkstra's Shortest Path Algorithm**  
  Finds the shortest paths from a single source to all other vertices in a graph.  
  **Time Complexity:** O(V²) or O((V + E) log V) with priority queue

- **Prim’s Algorithm (MST)**  
  Constructs a minimum spanning tree by growing the tree one edge at a time.  
  **Time Complexity:** O(V²) or O((V + E) log V) with priority queue

- **Kruskal’s Algorithm (MST)**  
  Constructs a minimum spanning tree by sorting edges and using Union-Find to detect cycles.  
  **Time Complexity:** O(E log E)

---

##  Dynamic Programming Solutions  
Optimal substructure-based solutions using dynamic programming:

- **Multi-Stage Graph (Shortest Path)**  
  Solves shortest path problems by processing the graph in stages from end to start.  
  **Time Complexity:** O(V²)

- **All-Pairs Shortest Paths (Floyd-Warshall Algorithm)**  
  Computes shortest paths between all pairs of vertices in a weighted graph.  
  **Time Complexity:** O(V³)


