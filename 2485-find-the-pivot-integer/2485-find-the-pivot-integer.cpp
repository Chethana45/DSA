class Solution {
public:
    int pivotInteger(int n) {
        for(int x=1;x<=n;x++){
            int leftsum=0;
            int rightsum=0;
            for(int i=1;i<=x;i++){
          leftsum+=i;
            }
            for(int i=x;i<=n;i++){
                rightsum+=i;
            }
            if(leftsum==rightsum)
            return x;
        }
        return -1;
    }
};