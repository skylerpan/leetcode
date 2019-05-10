1. vector's erase function needs to notice it's usage.
>iterator erase (iterator position);<br>
>iterator erase (iterator first, iterator last);

Erase the last element.
```c++
myvector.erase(myvector.end()-1);
```
Runtime: 32 ms<br>
Memory Usage: 17.3 MB