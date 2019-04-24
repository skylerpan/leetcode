#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int maxArea(int* height, int heightSize) {
    int left = 0, right = heightSize - 1;
    int max_area = 0;

    if(heightSize < 2)
        return 0;

    while(left < right)
    {
        max_area = MAX( MIN(height[left], height[right]) * (right - left), max_area);

        if(height[left] < height[right])
            left++;
        else
            right--;
    }
    return max_area;
}