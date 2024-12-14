# C-Uni
A collection of C programs from my university exercises.

Now, I find it fun, but back then, it often brought out some "F" words. Those were the days!
## 1. [Variable Exchange](variable-exchange.c)
Write a program that takes two variables as input and swaps their values without using a third variable.

## 2. [Celsius to Farenhayt](celcius-to-farenhayt.c)
Write a program that converts temperature from Celsius to Fahrenheit. The formula is:

## 3. [Salary Calculation with Tax Per Hour](salary-with-tax-per-hour.c)
Write a program that calculates an individual's monthly salary after deducting tax. The program should take the number of monthly working hours and the hourly wage as input. If the total salary is less than 140,000, no tax is applied. For any amount above 140,000, 10% tax is deducted.

## 4. [Calculate `y` based on `x`](calculate-y-based-on-x.c)
Write a program that calculates and displays the value of `y` based on the following conditions:

`y = if (x>20) -4x2+3 else 3x-7`

## 5. [Day and Week Calculation](day-and-week-calculation.c)
Write a program that takes the number `n` as input, representing the nth day of the year, and determines which day of the week and which week of the year it is.

## 6. [Find the Smallest Number](find-the-smallest-number.c)
Write a program that reads three numbers from the input and displays the smallest one in the output.

## 7. [Sort Three Numbers](sort-three-numbers.c)
Write a program that reads three numbers from the input, sorts them in ascending order, and displays them from smallest to largest.

## 8. [Sum of Absolute Values](sum-of-absolute-values.c)
Write a program that takes two numbers `x` and `y` as input and calculates the sum of their absolute values `|x| + |y|`.

## 9. [Find the nth Uppercase Alphabet Letter](find-the-nth-uppercase-alphabet-letter.c)
Write a program that takes a natural number `n` as input and displays the nth uppercase letter of the alphabet. For example, if the input is 2, the output should be `B`.

## 10. [Decimal to Octal and Hexadecimal](decimal-to-octal-and-hexadecimal.c)
Write a program that reads an integer from the input and displays its equivalent in both octal and hexadecimal formats.

## 11. [Find the Maximum of Three Numbers](find-the-maximum-of-three-numbers.c)
Write a program that reads three numbers from the input and calculates the maximum value among them, then displays the result.

## 12. [Number of Days in a Persian Month](number-of-days-in-a-persian-month.c)
Write a program that takes the number of a Persian month as input and displays the number of days in that month.

## 13. [Solve a Quadratic Equation](solve-a-quadratic-equation.c)
Write a program that takes the coefficients `a`, `b`, and `c` of the quadratic equation `ax^2 + bx + c = 0` as input and calculates and displays the real roots, if they exist. First, calculate the discriminant `D = b^2 - 4ac`. Based on the value of `D`, determine the number and nature of the roots:
- If `D < 0`, there are no real roots.
- If `D = 0`, there are two equal real roots: `x = -b / (2a)`.
- If `D > 0`, there are two distinct real roots: `x1 = (-b - √D) / (2a)` and `x2 = (-b + √D) / (2a)`.

## 14. [Sort Three Numbers in Ascending Order](sort-three-numbers-in-ascending-order.c)
Write a program that takes three numbers, `a`, `b`, and `c`, as input and sorts them in ascending order.

## 15. [Function of x](function-of-x.c)
Write a program that takes the value of `x` as input and calculates the value of `y` according to the following rules:
```
y = 1, if x > 0
y = 0, if x = 0
y = -1, if x < 0
```

## 16. [Point Inside, Outside, or On Circle](point-Inside,outside,or-on-circle.c)
Write a program that takes the coordinates of the center and radius of a circle, along with the coordinates of another point, and determines whether the point is inside, outside, or on the circle.

## 17. [Display All Even Three-Digit Numbers](display-all-even-three-digit-numbers.c)
Write a program that displays all even three-digit numbers. Since the first even three-digit number is 100, set the initial counter to 100 and continue the loop until the counter is less than 1000. In each iteration, display the counter and then increment it by 2 to get the next even number.

## 18. [Calculate the Average of 10 Grades](calculate-the-average-of-10-Grades.c)
Write a program that takes 10 grades of a student as input and calculates the average of those grades.

## 19. [Calculate the Factorial of a Number](calculate-the-factorial-of-a-number.c)
Write a program that takes an integer `n` as input and calculates the product of all numbers from 1 to `n` (i.e., the factorial of `n`). Since the factorial can be a very large number, define the variable `f` as `long int`.

## 20. [Display a 5x5 Multiplication Table](display-a=5x5-multiplication=table.c)
Write a program that displays the 5x5 multiplication table.

## 21. [Display a Triangle of Stars](display-a-triangle-of-stars.c)
Write a program that takes an integer `n` as input and displays a triangle of stars. For example, if `n` is 5, the output should be:
```
*
**
***
****
*****
```
## 22. [Display a Mixed Triangle of Stars and Plus Signs](display-a-mixed-triangle-of-stars-and-plus-signs.c)
Write a program that takes an integer `n` as input and displays a pattern where stars and plus signs alternate. For `n = 4`, the output should be:
```
*
++
***
++++
```
## 23. [Display a Checkerboard Pattern of Stars and Plus Signs](display-a-checkerboard-pattern-of-stars-and-plus-signs.c)
Write a program that takes an integer `n` as input and displays a checkerboard pattern alternating between stars and plus signs. For `n = 4`, the output should look like:
```
*
+*
*+*
+*+*
```
## 24. [Display an Inverted Triangle of Stars](display-an-inverted-triangle-of-stars.c)
Write a program that takes an integer `n` as input and displays an inverted triangle of stars. For `n = 4`, the output should look like:
```
****
***
**
*
```
## 25. [Display a Right-Aligned Triangle of Stars](display-a-right-aligned-ariangle-of-stars.c)

Write a program that takes an integer `n` as input and displays a right-aligned triangle of stars. For `n = 4`, the output should be:

```
   *
  **
 ***
****
```
## 26. [Display a Triangle with Decreasing Stars and Increasing Plus Signs](display-a-triangle-with-decreasing-stars-and-lncreasing-plus-signs.c)
Write a program that takes an integer `n` as input and displays a triangle pattern where stars decrease from left to right, and plus signs increase. For `n = 4`, the output should be:
```
++++
*+++
**++
***+
****
```
## 27. [Display a Right-Aligned Triangle of Stars with Odd Numbers](display-a-right-aligned-triangle-of-stars-with-odd-numbers.c)
Write a program that takes an integer `n` as input and displays a right-aligned triangle of stars, but the number of stars increases by 2 each row. For `n = 4`, the output should be:
```
   *
  ***
 *****
*******
```
## 28. [Display a Pattern of Repeated Numbers Increasing](display-a-pattern-of-repeated-numbers-Increasing.c)
Write a program that takes an integer `n` as input and displays a pattern where each row consists of the row number repeated. For `n = 4`, the output should be:
```
1
22
333
4444
```
## 29. [Display a Pattern of Repeated Numbers Decreasing](display-a-pattern-of-repeated-numbers-decreasing.c)
Write a program that takes an integer `n` as input and displays a pattern where the largest number starts at the top and decreases while the count of repeated digits increases. For `n = 4`, the output should be:
```
4
33
222
1111
```
## 30. [Display a Pattern of Numbers in Decreasing Order](display-a-pattern-of-numbers-in-decreasing-order.c)
Write a program that takes an integer `n` as input and displays a pattern where the numbers start at `n` and decrease in each line, with the number of digits increasing per row. For `n = 4`, the output would look like:
```
4
43
432
4321
```
## 31. [Display a Decreasing Pattern of Numbers](display-a-decreasing-pattern-of-numbers.c)
Write a program that takes an integer `n` as input and displays a pattern where the numbers start at `n` and decrease in each line, with the number of digits decreasing per row. For `n = 4`, the output would look like:
```
4321
432
43
4
```
## 32. [Display a Left-Aligned Triangle of Numbers](display-a-left-aligned-triangle-of-numbers.c)
Write a program that takes an integer `n` as input and displays a pattern where the numbers start at `1` and increase in each row, with spaces to align the numbers to the right. For `n = 4`, the output would look like:
```
   1
  21
 321
4321
```
## 33. [Display a Triangle of Numbers in Increasing and Decreasing Order](display-a-triangle-of-numbers-in-Increasing-and-decreasing-order.c)
Write a program that takes an integer `n` as input and displays a triangle where the numbers start at `1`, increase to the current row number, and then decrease back down. For `n = 4`, the output would look like:
```
   1
  121
 12321
1234321
```
## 34. [Display a Triangle of Numbers with Odd Numbers](display-a-triangle-of-numbers-with-odd-numbers.c)
Write a program that takes an integer `n` as input and displays a triangle where the number of stars increases by 2 in each row. For `n = 4`, the output would look like:
```
   1
  123
 12345
1234567
```
## 35. [Display a Diamond Shape of Stars](display-a-diamond-shape-of-stars.c)
Write a program that takes an integer `n` as input and displays a diamond shape of stars. The number of stars should increase up to the middle and then decrease symmetrically. For `n = 4`, the output would look like:
```
  *
 ***
*****
 ***
  *
```
## 36. [Display Divisors of a Number](display-divisors-of-a-number.c)
Write a program that takes an integer `n` as input and displays all divisors of `n`. A divisor is a number that divides `n` without leaving a remainder. The program should print each divisor.

## 37. [Display the Word Corresponding to a Single Digit Using Switch](display-the-word-corresponding-to-a-single-digit-using-switch.c)
Write a program that takes a single digit as input and displays the corresponding word for that digit. The program should use a switch-case structure to display the word equivalent of the number (for example, `1` should be displayed as `One`).

## 38. [Display Full Color Name Based on First Character](display-full-color-name-based-on-first-character.c)
Write a program that takes the first letter of a color (`a`, `r`, or `g`) as input and displays the full name of the color. The input may be in either uppercase or lowercase.

## 39. [Check if a Character is a Vowel](check-if-a-character-is-a-vowel.c)
Write a program that takes a single English letter as input and determines if it is a vowel (A, E, I, O, U) or not

## 40. [Display a Hollow Square with Stars](display-a-hollow-square-with-stars.c)
Write a program that takes the side length of a square (`n`) as input and displays a hollow square made of stars. The program should print a square with stars on the borders and spaces inside. The side length `n` must be between 1 and 20. For example, if `n = 5`, the output should be:
```
*****
*   *
*   *
*   *
*****
```
## 41. [Check if a Number is Prime](check-if-a-number-is-prime.c)
Write a program that takes an integer `n` as input and determines if the number is prime. A prime number is a number greater than 1 that has no divisors other than 1 and itself. For example,

## 42. [Display Fibonacci Sequence](display-fibonacci-sequence.c)
Write a program that prints the first 15 terms of the Fibonacci sequence. The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones. The first two terms are `1` and `1`. The next terms are obtained by adding the two previous terms. The sequence starts like this: `1, 1, 2, 3, 5, 8, 13, 21, ...`

## 43. [Check if a Number is in Fibonacci Sequence](check-if-a-number-is-in-fibonacci-sequence.c)
Write a program that takes an integer `n` as input and determines whether `n` is part of the Fibonacci sequence or not.

## 44. [Display Largest Four-Digit Fibonacci Number](display-largest-four-digit-fibonacci-number.c)
Write a program that finds and displays the largest four-digit number in the Fibonacci sequence.

## 45. [Square Calculation Using Odd Numbers]()
The square of any natural number `n` can be calculated by summing `n` consecutive odd numbers starting from 1. For example:
- n = 1 > 1² = 1
- n = 2 > 2² = 1 + 3
- n = 3 > 3² = 1 + 3 + 5

Write a program that calculates the square of a given natural number using this method, without using the multiplication operation.

## 46. [Approximation of Constant 'e']()
Write a program that approximates the mathematical constant `e` using the following formula, accurate to four decimal places:

\[ e = 1 + \frac{1}{1!} + \frac{1}{2!} + \frac{1}{3!} + \dots \]

## 47. [Display Calendar for a 31-Day Month]()
Assume that each day of the week is represented by a code such that:
- Saturday has a code of 0,
- Sunday has a code of 1,
- and so on, with Friday having a code of 6.

Write a program that takes the code for the first day of a 31-day month as input and displays the calendar for that month. For example, if the input is 2, it means the first day of the month is a Monday. The output calendar should be displayed as follows:

```
Sat  Sun  Mon  Tue  Wed  Thu  Fri
               1    2    3    4    5
6    7    8    9    10   11   12
13   14   15   16   17   18   19
20   21   22   23   24   25   26
27   28   29   30   31
```

## 48. [Formatted Multiplication Table]()
Write a program that takes an input number `n` and prints `n` rows of output with appropriate spacing, similar to the following example:

```
 i         10 * i    100 * i   1000 * i
 1         10        100       1000
 2         20        200       2000
 3         30        300       3000
```

## 49. [Find the Least Common Multiple (LCM)]()
Write a program that takes two natural numbers as input and finds their Least Common Multiple (LCM). The Least Common Multiple of two numbers is the smallest number that is divisible by both without a remainder. For example, the LCM of 23 and 16 is 368.

## 50. [Prime Numbers up to a Given Number]()
Write a program that takes an integer as input and displays all the prime numbers less than or equal to that number.

## 51. [Binary to Decimal Conversion]()
Write a program that reads a binary number (an integer consisting only of 0s and 1s) and prints its decimal equivalent. For example, for the input `10110`, the output should be `22`.

## 52. [Computation of e^x using Series Expansion]()
Write a program that computes the value of \( e^x \) using the following formula up to 10 terms:

\[ e^x = 1 + \frac{x}{1!} + \frac{x^2}{2!} + \frac{x^3}{3!} + \dots \]

## 53. [Trigonometric Table for Angles 1 to 89 Degrees]()
Write a program that generates a table of trigonometric ratios for angles from 1 to 89 degrees. The table should display the angle (in degrees), sine, cosine, tangent, and cotangent values to `F` decimal places, with each value in its own column. Use a step of 1 degree.

## 54. [Table of Negative Powers of 2]()
Write a program that generates a table of negative powers of 2 (i.e., 2^-1, 2^-2, etc.). The table should display the values in decimal form, fractional form, and exponential form. The number of rows in the table should be specified by the input. An example output with three rows would look like this:

```
Decimal        Fraction        Power of 2
0.5000         1/2             2^-1
0.2500         1/4             2^-2
0.1250         1/8             2^-3
```
## 55. [Reverse an Array of Integers]()
Define a six-element array of integers named `A` with the initial values 3, 7, 27, 38, and 12. Write a program that reverses the order of the elements in this array.

## 56. [Sum of Array Elements]()
The array is defined as follows:

```c
A[arraysize]={5, 7, -12, 235, 178, -100, 236, 1, 9, 0, 11, 102};
```

Write a program that sums up all the elements in the array `A` and prints the result.

## 57. [Display Integers in Reverse Order]()
Write a program that reads 10 integers from input and displays them in reverse order.

## 58. [Separate Positive and Negative Numbers in an Array]()
Consider an array of integers named `A` of size `n = 5`. Write a program that reads the elements of this array from input, separates the positive and negative numbers, and stores the positive numbers in an array `pos` and the negative numbers in an array `neg`.

## 59. [Fibonacci Series using Arrays]()
Write a program that uses an array to compute and print the first ten terms of the Fibonacci series.

## 60. [Remove Duplicates and Count Frequencies in an Array]()
Given an array of `n = 10` integers, write a program that removes all duplicate values from the array and prints the unique numbers along with their frequencies.

## 61. [Hexadecimal to Decimal Conversion]()
Write a program that takes a hexadecimal number as a string input and converts it to its decimal (base 10) equivalent, then prints the result.
