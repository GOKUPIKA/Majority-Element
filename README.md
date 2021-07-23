# Majority-Element
(GeekForGeek Question)


# ANSWER
We are using Moore’s Voting Algorithm approach, which is the explained below:
**STEP OF APPROACH**
* Step 1 : First, we let the majiority element be at index 0, then we store it count as 1.
* Step 2 : Second, Then we traverse the array and check for the majiority element.
* Step 3 : Third, after geting the majority value, then we traverse the array to check its count is greater than (size/2) or not
* Step 4 : Final step, if count is greater than (size/2), then return majiority element , if not then then return -1.

Time Complexity: O(n), because of linear traversal
Space Complexity: O(1), because no extra space is created

# QUESTION:
Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.

**Example 1:**
Input:
N = 3 
A[] = {1,2,3} 
Output:
-1
**EXPLANATION:**
Since, each element in 
{1,2,3} appears only once so there 
is no majority element.

Example 2:
Input:
N = 5 
A[] = {3,1,3,3,2} 
Output:
3
**EXPLANATION:**
Since, 3 is present more
than N/2 times, so it is 
the majority element.

**YOUR TASK:**
The task is to complete the function majorityElement() which returns the majority element in the array. If no majority exists, return -1.
 
**Expected Time Complexity:** O(N).
**Expected Auxiliary Space:** O(1).
 
**CONSTRAINTS**
* 1 ≤ N ≤ 107
* 0 ≤ Ai ≤ 106
