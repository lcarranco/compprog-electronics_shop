# HackerRank - Electronics Shop

## Table of Contents
<!-- TOC -->

- [HackerRank - Electronics Shop](#hackerrank---electronics-shop)
    - [Table of Contents](#table-of-contents)
    - [Description](#description)
    - [Input Format](#input-format)
    - [Constraints](#constraints)
    - [Output Format](#output-format)
    - [Example](#example)
    - [Samples](#samples)
        - [Sample Input 0](#sample-input-0)
        - [Sample Output 0](#sample-output-0)
        - [Explanation 0](#explanation-0)
        - [Sample Input 1](#sample-input-1)
        - [Sample Output 1](#sample-output-1)
        - [Explanation 1](#explanation-1)
    - [Solving](#solving)
        - [Algorithm](#algorithm)

<!-- /TOC -->

## Description
* Monica wants to buy a keyboard and a USB drive from her favorite electronics store
* She wants to spend as much as possible for the 2 items, given her budget
* Find and print the amount of money Monica will spend.
* If she does not have enough money to purchase both a a keyboard and a USB drive, print -1 instead

## Input Format
* The first line contains three space-separated integers
	* **b** - budget
	* **n**- # keyboard models
	* **m** - # USB drive models
* The second line contains n space-separated integers
	* **keyboard[i]** - The prices of each keyboard model
* The third line contains m space-separated integers
	* **drives[j]** - The prices of each USB drive model

## Constraints
* **1** <= n, m <= **1000**
* **1** <= b <= **10^6**
* Price of each item in inclusive range of **[1, 10^6]**

## Output Format
* Print integer denoting amount of money Monica will spend
* If she does not have enough to buy one keyboard and one USB drive, print -1 instead

## Example
* Suppose Monica has $60 to spend
	* **s = 60**
* Three types of keyboards cost
	* **keyboards = [40, 50, 60]**
* Two USB drives cost
	* **drives = [5, 8, 12]**
* She could purchase **$40 keyboard** and **$12 USB drive** for **$52**
* She could purchase **$50 keyboard** and **$8 USB drive** for **$58**
* Monica chooses the $58 combination due to not being able to buy more than **2** items and can not spend more than **$60**

## Samples

### Sample Input 0
```
10 2 3
3 1
5 2 8
```

### Sample Output 0
```
9
```

### Explanation 0
She can buy the second keyboard and third USB drive for total cost of $1 + $8 = $9

### Sample Input 1
```
5 1 1
4
5
```

### Sample Output 1
```
-1
```
### Explanation 1
There is not way to buy one keyboard and one USB drive because $4 + $5 = $9, print -1 instead

## Solving
* The problem does not care about each of the prices of keyboards or USB drives
* Using sets for my data structure
  * A set is a data structure that does not allow duplicates and is ordered

### Algorithm
1. Insert prices of keyboards and USB drives in respective sets. Only keep prices less than the budget
2. Find the maximum of keyboards and find the minimum of USB drives
3. Find sum of max and min.
4. If sum of max and min is less than or equal to the budget, go to next minimum and repeat previous step
5. Stop when sum is greater than the budget.
6. Repeat steps one to five, but find min of keyboards and find max of USB drives
7. Print maximum of two sums or -1 if sum does not exist