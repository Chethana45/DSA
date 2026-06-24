class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=0;
        int high=num;
        while(low<=high){
            int mid= low+(high-low)/2;
            if(1LL*mid*mid==num){
            return true;}
            else if(1LL*mid*mid<num){
            low = mid+1;}
            else{
            high =  mid-1;}
        }
        return false;
        
        
    }
};