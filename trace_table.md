# Trace Table

## Original Data

| Position | ID | Weight |
|---:|---|---:|
| 1 | P101 | 20 |
| 2 | P102 | 15 |
| 3 | P103 | 20 |
| 4 | P104 | 10 |
| 5 | P105 | 15 |
| 6 | P106 | 20 |
| 7 | P107 | 25 |
| 8 | P108 | 10 |

## Merge Sort Trace

### Division
- [P101(20), P102(15), P103(20), P104(10)]
- [P105(15), P106(20), P107(25), P108(10)]

### First Merge Level
- [P102(15), P101(20)]
- [P104(10), P103(20)]
- [P105(15), P106(20)]
- [P108(10), P107(25)]

### Second Merge Level
- [P102(15), P104(10), P101(20), P103(20)] → [P104(10), P102(15), P101(20), P103(20)]
- [P105(15), P108(10), P106(20), P107(25)] → [P108(10), P105(15), P106(20), P107(25)]

### Final Merge
P104(10), P108(10), P102(15), P105(15), P101(20), P103(20), P106(20), P107(25)

## Quick Sort Trace

The program uses the last element as pivot and compares `(weight, original position)`.

| Step | Pivot | Main result |
|---:|---|---|
| 1 | P108(10) | 10-weight packages move to the beginning |
| 2 | P102(15) | 15-weight package placed after 10s |
| 3 | P105(15) | Equal 15-weight package follows P102 |
| 4 | P103(20) | 20-weight packages arranged using original positions |
| 5 | P106(20) | P101 → P103 → P106 order retained |
| 6 | P107(25) | Largest weight placed at the end |

Final:
P104(10), P108(10), P102(15), P105(15), P101(20), P103(20), P106(20), P107(25)

## Stability Verification

| Weight | Original order | Final order | Stable? |
|---:|---|---|---|
| 10 | P104 → P108 | P104 → P108 | Yes |
| 15 | P102 → P105 | P102 → P105 | Yes |
| 20 | P101 → P103 → P106 | P101 → P103 → P106 | Yes |
