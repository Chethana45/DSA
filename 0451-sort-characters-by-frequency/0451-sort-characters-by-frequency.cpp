class Solution {
public:
    string frequencySort(string s) {
        int freq[128]={0};
        for(char c:s){
            freq[c]++;
        }
         string ans = "";
         while(ans.length()<s.length()){
int maxchar=0;
int maxfreq=0;
for(int i=0;i<128;i++){
    if(freq[i]>maxfreq){
    maxfreq=freq[i];
    maxchar=i;
    }
}
         
          for (int i = 0; i < maxfreq; i++) {
                ans += (char)maxchar;
            }

            freq[maxchar] = 0;
         }

        return ans;
    }
};