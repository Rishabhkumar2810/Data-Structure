class Solution {
public:
    int minAddToMakeValid(string s) {
        int c=0;
      
        stack<int>st;
        for(int it:s)
        {
            if(it=='(')
            st.push(it);
            else if(st.empty())
                c++;
            else
            st.pop();
            
        }
        return c+st.size();
    }
};
