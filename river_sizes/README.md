# River Sizes | Difficulty: Medium

Given a 2d-array (a matrix) of potentially unequal height and width containing only 0's and 1's.
Each 0 represents land, and each 1 represents part of a river.
A river consists of any number of 1's that are either horizontally or vertically adjacent (but not diagonally adjacent).
The number of adjacent 1's forming a river determine its size.

Sample Input:
<br />**matrix = [**
<br />**[1, 0, 0, 1, 0],**
<br />**[1, 0, 1, 0, 0],**
<br />**[0, 0, 1, 0, 1],**
<br />**[1, 0, 1, 0, 1],**
<br />**[1, 0, 1, 1, 0],**
<br />**]**

Sample Output:
<br />**[1, 2, 2, 2, 5]**
<br />//order can differ
<br />
<br />//Rivers can be clearly seen here:
<br />//[
<br />//[1,&nbsp;&nbsp;,&nbsp;&nbsp;, 1,&nbsp;&nbsp;&nbsp;],
<br />//[1,&nbsp;&nbsp;, 1,&nbsp;&nbsp;,&nbsp;&nbsp;&nbsp;],
<br />//[&nbsp;&nbsp;,&nbsp;&nbsp;, 1,&nbsp;&nbsp;, 1],
<br />//[1,&nbsp;&nbsp;, 1,&nbsp;&nbsp;, 1],
<br />//[1,&nbsp;&nbsp;, 1, 1,&nbsp;&nbsp;],
<br />//]

