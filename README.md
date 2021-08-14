# 547.-Number-of-Provinces-Graph-Leetcode

There are n cities. Some of them are connected, while some are not. If city a is connected directly with city b, and city b is connected directly with city c, then city a is connected indirectly with city c.



A province is a group of directly or indirectly connected cities and no other cities outside of the group.




You are given an n x n matrix isConnected where isConnected[i][j] = 1 if the ith city and the jth city are directly connected, and isConnected[i][j] = 0 otherwise.



Return the total number of provinces.

 


Example 1:

![image](https://user-images.githubusercontent.com/63790684/129437522-e6db9c10-d4fe-4bec-938d-6606f73c13b1.png)


Input: isConnected = [[1,1,0],[1,1,0],[0,0,1]]


Output: 2


Example 2:

![image](https://user-images.githubusercontent.com/63790684/129437523-373f5e9a-2e61-4ea9-9f2f-f76d911daa1a.png)


Input: isConnected = [[1,0,0],[0,1,0],[0,0,1]]



Output: 3
 



Constraints:



1 <= n <= 200



n == isConnected.length



n == isConnected[i].length


isConnected[i][j] is 1 or 0.


isConnected[i][i] == 1


isConnected[i][j] == isConnected[j][i]
