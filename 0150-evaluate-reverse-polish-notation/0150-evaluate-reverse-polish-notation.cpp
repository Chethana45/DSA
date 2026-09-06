class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> st;

        for(string t : tokens) {

            if(t == "+" || t == "-" || t == "*" || t == "/") {

                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                int res;

                if(t == "+") res = a + b;
                if(t == "-") res = a - b;
                if(t == "*") res = a * b;
                if(t == "/") res = a / b;

                st.push(res);
            }
            else {
                st.push(stoi(t));
            }
        }

        return st.top();
    }
};