# Complexity Analysis and Comparison

## Complexity

| Algorithm | Best | Average | Worst | Extra Space | Standard Stability |
|---|---|---|---|---|---|
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) | Stable |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) average, O(n) worst | Not stable |

## Duplicate Values

Input contains duplicate weights:
- 10: P104, P108
- 15: P102, P105
- 20: P101, P103, P106

## Stability

Merge Sort preserves the relative order of equal weights by selecting the left element first when weights are equal.

Standard Quick Sort is not inherently stable. In this assignment, the Quick Sort implementation uses original position as a secondary key, so the required order is preserved.

## Observed Comparison Counts

For the supplied implementations and input:
- Stable Merge Sort: 16 key comparisons
- Quick Sort implementation: 20 key comparisons

The exact Quick Sort comparison count depends on pivot selection and implementation.

## Space

Merge Sort needs an auxiliary array, so its extra space is O(n).

Quick Sort uses recursion. Average recursion space is O(log n), but worst-case recursion space can reach O(n).

## Comparison Table

| Feature | Merge Sort | Quick Sort |
|---|---|---|
| Duplicate values | Handles well | Handles well |
| Stable by default | Yes | No |
| Stability modification | Not needed | Needed for this requirement |
| Best time | O(n log n) | O(n log n) |
| Average time | O(n log n) | O(n log n) |
| Worst time | O(n log n) | O(n²) |
| Extra space | O(n) | O(log n) average |
| In-place | No | Generally yes |
| Predictable worst case | Yes | No |

## Interpretation

When preserving the original order of equal-weight packages is important, Merge Sort provides a direct stable solution. Quick Sort can be modified to meet the requirement, but standard Quick Sort does not guarantee stability.
