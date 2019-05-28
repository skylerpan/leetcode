## Thinking:
* Think about what is palindromic string.
* There are odd and even case. (...XX..., ...XOX...) 
* So, we can find the center of the palindrimic substring, and expanding substring from center.
* Memorize the longest palindrimic substring.
## Notice:
* The input string shorter than 2.
* How to implement a simply and clearly *isPalindromic( )*.
* Usage of std::string::substr
    ```c
    string substr (size_t pos = 0, size_t len = npos) const;
    ```