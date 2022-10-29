# Search Algorithms

- [tests](https://github.com/KristiSeraj/holbertonschool-low_level_programming/tree/main/0x1E-search_algorithms/tests) - Test files

- [0-linear.c](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/0-linear.c) - Write a function that searches for a value in an array of integers using the **Linear search algorithm**

- [1-binary.c](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/1-binary.c) - Write a function that searches for a value in a sorted array of integers using the **Binary search algorithm**

- [100-jump.c](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/100-jump.c) - Write a function that searches for a value in a sorted array of integers using the **Jump search algorithm**

- [101-O](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/101-O) - Time complexity (average case) of a jump search in an array of size `n`, using `step = sqrt(n)` 

- [102-interpolation.c](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/102-interpolation.c) - Write a function that searches for a value in a sorted array of integers using the **Interpolation search algorithm**

- [103-exponential.c](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/103-exponential.c) - Write a function that searches for a value in a sorted array of integers using the **Exponential search algorithm**

- [2-O](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/2-O) - Time complexity (worst case) of a linear search in an array of size `n`

- [3-O](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/3-O) - Space complexity (worst case) of an iterative linear search algorithm in an array of size `n`

- [4-O](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/4-O) - Time complexity (worst case) of a binary search in an array of size `n`

- [5-O](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/5-O) - Space complexity (worst case) of a binary search in an array of size `n`

- [6-O](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/6-O) - Space complexity of this function/algorithm 
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

- [search_algos.h](https://github.com/KristiSeraj/holbertonschool-low_level_programming/blob/main/0x1E-search_algorithms/search_algos.h) - Header file
