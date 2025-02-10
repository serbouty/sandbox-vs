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
 */

int get(int i);

void set(int i, int val);

void pushBack(int val);

void removeElement(int i);

int size();

int main(void)
{
    /* ... */
}

/**
 * Abstract data type with the following
 * operations (at a minimum):
 * Get(i): returns element at location i*
 * Set(i, val): Sets element i to val*
 * PushBack(val): Adds val to the end
 * Remove(i): Removes element at location i
 * Size(): the number of elements
 *
 * Storage:
 * arr: dynamically-allocated array
 * capacity: size of the dynamically-allocated array
 * size: number of elements currently in the array
 *
 */

int get(int i)
{
    return i;
}

void set(int i, int val)
{
    /* ... */
}

void pushBack(int val)
{
    /* ... */
}

void removeElement(int i)
{
    /* ... */
}

int size()
{
    /* ... */
}