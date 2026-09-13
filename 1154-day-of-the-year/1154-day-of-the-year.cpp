class Solution {
public:
    int dayOfYear(string date) {
        int y=stoi(date.substr(0,4)), m=stoi(date.substr(5,2)), d=stoi(date.substr(8,2));
        int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
        for(int i=0;i<m-1;i++) d+=days[i];
        if(m>2 && (y%400==0 || (y%4==0 && y%100!=0))) d++;
        return d;
    }
};