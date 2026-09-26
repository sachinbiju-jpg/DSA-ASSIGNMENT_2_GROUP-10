#include <stdio.h>

struct Package {
    int id;
    int weight;
};

void merge(struct Package a[], int low, int mid, int high, int *comparisons)
{
    struct Package temp[50];
    int i = low, j = mid + 1, k = low;

    while (i <= mid && j <= high)
    {
        (*comparisons)++;

        /* <= keeps Merge Sort stable */
        if (a[i].weight <= a[j].weight)
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= high)
        temp[k++] = a[j++];

    for (i = low; i <= high; i++)
        a[i] = temp[i];
}

void mergeSort(struct Package a[], int low, int high, int *comparisons)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(a, low, mid, comparisons);
        mergeSort(a, mid + 1, high, comparisons);
        merge(a, low, mid, high, comparisons);
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
        {101, 20}, {102, 15}, {103, 20}, {104, 10},
        {105, 15}, {106, 20}, {107, 25}, {108, 10}
    };

    int n = 8;
    int comparisons = 0;

    printf("Original Packages:\n");
    display(a, n);

    mergeSort(a, 0, n - 1, &comparisons);

    printf("\nAfter Stable Merge Sort:\n");
    display(a, n);

    printf("\nNumber of key comparisons: %d\n", comparisons);

    return 0;
}
