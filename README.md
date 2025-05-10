# Targilon6

Elad Katz 322587064
https://github.com/eladk333/Targilon6

## Explanation for part 3
Becuase both threads read and inc the value of bar get that it runs less than 20000.

## Part 4 Explantion

Because we added `synchronized` to the functions now only one thread at a time can use them.
This prevenets **race condition**

## Part 5 Explantion

This time instead of using `synchronized` in the function signature we use a `synchronized` block, because we synchronize the same `this` object both method should work the same.

## Part 6 Explantion

Because we didn't use `synchronized` the code ran a lot faster but the incremenets were wrong and so was the result.

## Part 7 Explantion

Because we use `synchronized(this)` only 1 thread at a time can increment `bar` preventing **race condition** thus giving us correct output even tho the program runs longer.