# Comparison Table

| Criteria | Merge Sort | Quick Sort |
|---|---|---|
| Sorting method | Divide and merge | Divide and partition |
| Duplicate handling | Good | Good |
| Stability | Yes | No in standard form |
| Stable version used here | Naturally stable | Uses original position as tie-breaker |
| Best-case time | O(n log n) | O(n log n) |
| Average-case time | O(n log n) | O(n log n) |
| Worst-case time | O(n log n) | O(n²) |
| Extra space | O(n) | O(log n) average |
| Worst recursion/stack space | O(log n) | O(n) |
| In-place | No | Generally yes |
| Suitable when stability is required | Yes | Requires modification |
