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
	* **keyboard<sub>n</sub>** - The prices of each keyboard model
* The third line contains m space-separated integers
	* **drives<sub>m</sub>** - The prices of each USB drive model

## Constraints
* **1 &le; n, m &le; 1000**
* **1 &le; b &le; 10<sup>6</sup>**
* Price of each item in inclusive range of **[1, 10<sup>6</sup>]**

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
* Used unordered and ordered sets as my data structures
	* Set - Does not allow duplicates and is ordered
	* Unordered Set - Does not allow duplicates and is unordered

### Algorithm
* Insert prices of Keyboards and USB drives in respective unordered sets. Only keep prices less than the budget
* For each keyboard price, compute the sum of each USB drive
* Insert sum into an ordered set if sum is less than or equal to the budget
* Print sum if it exist, else print -1
