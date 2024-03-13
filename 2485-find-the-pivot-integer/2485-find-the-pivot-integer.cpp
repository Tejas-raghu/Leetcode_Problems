class Solution {
public:
    int pivotInteger(int n) {

        int left = 1;
        int right = n;
        int fullsum = (n*(n+1))/2;

        while(left <= right){
            int mid = left + (right - left)/2;
            int leftsum = (mid*(mid+1))/2;
            int rightsum = fullsum - leftsum + mid;
            if(leftsum == rightsum) return mid;
            else if(leftsum < rightsum){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return -1;
    }
};