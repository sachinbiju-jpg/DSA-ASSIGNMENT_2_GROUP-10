# Final Conclusion

The package data contains duplicate weights: 10, 15 and 20. Therefore, stability is an important requirement.

Stable Merge Sort preserves the original order of equal-weight packages:

- P104 → P108 for weight 10
- P102 → P105 for weight 15
- P101 → P103 → P106 for weight 20

Quick Sort is not stable in its standard form. In this assignment, original package position is used as a secondary key so that equal-weight packages retain their original order.

Merge Sort has O(n log n) time complexity in the best, average and worst cases, while Quick Sort has O(n log n) average performance but O(n²) worst-case performance.

Therefore, for this specific requirement where the original order of equal-weight packages must be preserved, stable Merge Sort is the more direct and predictable approach.
