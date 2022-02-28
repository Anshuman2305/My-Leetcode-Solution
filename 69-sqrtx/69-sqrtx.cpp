class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0; //using Binary Search
        int left = 1, right = INT_MAX;
        while(true){
            // int mid = (left + right)/2;
            int mid = left + (right - left)/2;
            if(mid <= x/mid && (mid+1) > x/(mid+1)){
                return mid;
            }else if(mid < x/mid){
                left = mid+1;
            }else{
                //mid > x/mid
                right = mid-1;
            }
        }
    }
};