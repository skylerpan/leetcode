## Thinking:
1. Observe the sequence [3, 2, 1, 4, 3]. The next permutation is [3, 2, 3, 1, 4].
2. We can find out the changed numbers which appear at last few elements.
3. So, We can check the permutation from end.
4. If last n numbers has a number larger than last n and small than others, it will have a permutation larger than original sequence.
5. Change the larger number to the last n postion, and the permutation is always larger than origin.
6. Because we want to find the next permutation, sorting the last n-1 numbers can get the next one.
7. When check to the first element and no larger number after it, just sorting all the sequence.

## Example:
* iteration 1: [3]
* iteration 2: [4, 3]
* iteration 3: [1, 4, 3] -> 3 and 4 are larger than 1. Change 1 and 3. -> [3, 4, 1].
* Sort sequence after 3 -> [3, 1, 4].
* Find the next permutation [3, 2, 3, 1, 4].

## Reverse version:
* Same as almost sorting's steps but choice the closet one with last n when we has more than one number that larger than last n and small than others.
* Use "reverse" to replace "sort".
