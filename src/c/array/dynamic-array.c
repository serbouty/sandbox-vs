#include <stdio.h>

/**
 * Dynamic Arrays:
 *
 * Problem: static arrays have to determine
 * the size at compile time.
 * Semi-solution: dynamically-allocated arrays
 * at runtime.
 * Problem: might not know max size when
 * allocating an array.
 *
 * "All problems in computer science
 * can be solved by another level of
 * indirection."
 *
 * Solution: dynamic arrays (also known as
 * resizable arrays).
 *
 * Idea: store a pointer to a dynamically
 * allocated array, and replace it with a
 * newly-allocated array as needed.
 *
 * C++:     vector
 * Java:    ArrayList
 * Python:  list (the only kind of array)
 *
 */

/* Prototypes. */
int get(int i, int arr[], int size);
void set(int i, int val, int arr[], int size);
void pushBack(int val, int arr[], int size, int capacity);
void removeElement(int i, int arr[], int size);
int size(int size);

/**
 * ...
 */
int main(void)
{
    /* ... */
}

/**
 * Abstract data type with the following
 * operations (at a minimum):
 *
 * Get(i): returns element at location i*
 * Set(i, val): Sets element i to val*
 * PushBack(val): Adds val to the end
 * Remove(i): Removes element at location i
 * Size(): the number of elements
 *
 *
 * Storage:
 *
 * arr: dynamically-allocated array
 * capacity: size of the dynamically-allocated array
 * size: number of elements currently in the array
 *
 *
 * Runtimes:
 *
 * Get(i):          O(1)
 * Set(i, val):     O(1)
 * PushBack(val):   O(n)
 * Remove(i):       O(n)
 * Size():          O(1)
 *
 */

int get(int i, int arr[], int size)
{
    /* Check negative number and size available. */
    if (i < 0 || i >= size)
    {
        printf("ERROR: index out of range");
    }

    /* Get the value. */
    return arr[i];
}

void set(int i, int val, int arr[], int size)
{
    /* Check negative number and size available. */
    if (i < 0 || i >= size)
    {
        printf("ERROR: index out of range");
    }

    /* Set the value. */
    arr[i] = val;
}

void pushBack(int val, int arr[], int size, int capacity)
{
    /* Check if the array is full. */
    if (size == capacity)
    {
        /* Double the size of the array. */
        int new_array[2 * capacity];

        /* Assign elements to the new array.*/
        for (int i = 0; i < size; i++)
        {
            new_array[i] = arr[i];
        }

        /* Free memory : free arr */
        /* ... */

        /* Assign the pointer to the new array : arr < new_array */
        /* ... */

        /* Double the capacity value before adding a new element. */
        capacity *= 2;
    }

    /* Push the element at the end of the array. */
    arr[size] += val;

    /* Update the size. */
    size++;
}

void removeElement(int i, int arr[], int size)
{
    /* Check negative number and size available. */
    if (i < 0 || i >= size)
    {
        printf("ERROR: index out of range");
    }

    /* Start within the given index. */
    for (int j = i; j < size - 1; j++)
    {
        /* Rearrange values on previous indexes to remove the element. */
        arr[j + 1] = arr[j];
    }

    /* Update the size. */
    size--;
}

int size(int size)
{
    return size;
}