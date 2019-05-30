## Thinking
1.  Find the pivot which is max in nums.
2.  Divid nums to two parts by pivot.
3.  Find the target in which part.
4.  Need to process the case: target not found.
5.  If pivot is the last elment, do binary search from 0 to pivot.

## Notice
*   Input may be no rotation, empty and out of lower and upper-bound.
*   The input of bin_search needs increasing order.
*   Termination condition.
