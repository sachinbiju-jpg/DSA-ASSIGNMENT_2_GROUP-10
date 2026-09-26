# DSA Assignment 2 – Group 10

## Subject
PCCST303 – Data Structures and Algorithms

## Assignment
Assignment 2 – Question 10

## Topic
Comparison of Merge Sort and Quick Sort with Duplicate Package Weights

## Problem
A logistics company receives package weights:

20, 15, 20, 10, 15, 20, 25, 10

Each package has a unique package ID.

The task is to:
1. Implement Merge Sort and Quick Sort.
2. Sort the packages according to weight.
3. Record important intermediate steps.
4. Preserve the original relative order of packages having equal weights.
5. Compare duplicate handling, stability, comparisons, time complexity and space complexity.
6. Give a final conclusion.

## Package Data

| Package ID | Weight | Original Position |
|---|---:|---:|
| P101 | 20 | 1 |
| P102 | 15 | 2 |
| P103 | 20 | 3 |
| P104 | 10 | 4 |
| P105 | 15 | 5 |
| P106 | 20 | 6 |
| P107 | 25 | 7 |
| P108 | 10 | 8 |

## Stable Sorted Result

P104(10), P108(10), P102(15), P105(15), P101(20), P103(20), P106(20), P107(25)

## Repository Structure

- `Source_Code/` – C programs
- `Input/` – input data
- `Output/` – program outputs
- `Trace_Table/` – intermediate sorting steps
- `Analysis/` – complexity and comparison
- `Conclusion/` – final conclusion

## Algorithms

### Merge Sort
Stable merge operation is used. When two weights are equal, the element from the left subarray is selected first.

### Quick Sort
Standard Quick Sort is not inherently stable. To preserve equal-weight order in this assignment, original position is used as a secondary key.

## Complexity

| Algorithm | Best | Average | Worst | Extra Space | Stable |
|---|---|---|---|---|---|
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) | Yes |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) average | No (standard) |

## Conclusion

For this requirement, stable Merge Sort provides a direct solution because it naturally preserves the relative order of equal-weight packages and has guaranteed O(n log n) worst-case time. Quick Sort can also be modified to preserve stability, but standard Quick Sort is not stable and can have O(n²) worst-case time.
