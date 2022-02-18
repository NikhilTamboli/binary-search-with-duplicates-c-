# binary-search-with-duplicates-cpp

Problem Description:
Task-> Find the first occurence of an integer in the given sorted sequence of integers (possibly with duplicates).

Input Format-> The first two lines of the input contain an integer 𝑛 and a sequence 𝑎0 ≤ 𝑎1 ≤ · · · ≤ 𝑎𝑛−1
of 𝑛 positive integers in non-decreasing order. The next two lines contain an integer 𝑘 and 𝑘 positive
integers 𝑏0, 𝑏1, . . . , 𝑏𝑘−1.

Constraints-> 1 ≤ 𝑘 ≤ 105; 1 ≤ 𝑛 ≤ 3 · 104; 1 ≤ 𝑎𝑖 ≤ 109 for all 0 ≤ 𝑖 < 𝑛; 1 ≤ 𝑏𝑗 ≤ 109 for all 0 ≤ 𝑗 < 𝑘;

Output Format-> For all 𝑖 from 0 to 𝑘 − 1, output an index 0 ≤ 𝑗 ≤ 𝑛 − 1 of the first occurrence of 𝑏𝑖 (i.e.,
𝑎𝑗 = 𝑏𝑖) or −1 if there is no such index.


EXAMPLE 
Input:
7
2 4 4 4 7 7 9
4
9 4 5 2

Output:
6 1 -1 0
