#include <stdio.h>

struct Package {
    int id;
    int weight;
    int position;
};

int comesBefore(struct Package a, struct Package b)
{
    if (a.weight < b.weight)
        return 1;

    if (a.weight == b.weight && a.position < b.position)
        return 1;

    return 0;
}

int partition(struct Package a[], int low, int high, int *comparisons)
{
    struct Package pivot = a[high];
    struct Package temp;
    int i = low - 1;
    int j;

    for (j = low; j < high; j++)
    {
        (*comparisons)++;

        if (comesBefore(a[j], pivot))
        {
            i++;

            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;

    return i + 1;
}

void quickSort(struct Package a[], int low, int high, int *comparisons)
{
    if (low < high)
    {
        int p = partition(a, low, high, comparisons);

        quickSort(a, low, p - 1, comparisons);
        quickSort(a, p + 1, high, comparisons);
    }
}

void display(struct Package a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("P%d(%d) ", a[i].id, a[i].weight);

    printf("\n");
}

int main()
{
    struct Package a[] = {
        {101, 20, 1}, {102, 15, 2}, {103, 20, 3}, {104, 10, 4},
        {105, 15, 5}, {106, 20, 6}, {107, 25, 7}, {108, 10, 8}
    };

    int n = 8;
    int comparisons = 0;

    printf("Original Packages:\n");
    display(a, n);

    quickSort(a, 0, n - 1, &comparisons);

    printf("\nAfter Quick Sort with original-position tie breaking:\n");
    display(a, n);

    printf("\nNumber of key comparisons: %d\n", comparisons);

    return 0;
}
