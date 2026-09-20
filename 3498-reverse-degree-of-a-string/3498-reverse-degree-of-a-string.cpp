class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            int value= 'z'-s[i]+1;
            sum+=value*(i+1);
        }
      return sum;  
    }
};